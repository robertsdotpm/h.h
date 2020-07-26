

uint128_t count_digits(uint128_t no)
{
    uint128_t digits = 0;
    uint128_t temp = no;
    while(temp != 0)
    {
        temp /= 10;
        digits++;
    }

    return digits;
}

uint128_t EXP(uint128_t no, uint128_t i)
{
    if(!i)
    {
        return 1;
    }

    uint128_t result = no;
    for(; i > 1; i--)
    {
        result *= no;
    }

    return result;
}

struct t_number safe_dec(struct t_number no, uint128_t precision)
{
    /*
    std::cout << "no.value" << std::endl;
    print_uint128_t(no.value);
    std::cout << std::endl;
    */

    // Max possible precision should be:
    if(no.precision > MAX_UINT128_PRECISION || precision > MAX_UINT128_PRECISION)
    {
        printf("No.prec or prec > max_precision\r\n");
        exit(1);
    }

    // Calculate digits in number.
    uint128_t digits = count_digits(no.value);
    uint128_t precision_difference = 0;
    uint128_t power = 10;
    uint128_t remaining_digits = MAX_UINT128_DIGITS - digits;

    // Already at precision we need.
    if(no.precision == precision || !digits)
    {
        no.precision = precision;
        return no;
    }

    // Pad number or upgrade precision.
    if(no.precision < precision)
    {
        precision_difference = precision - no.precision;

        /*
        std::cout << "u Prec dif" << std::endl;
        print_uint128_t(precision_difference);
        std::cout << std::endl;
        */

        // Make sure it will fit.
        if(precision_difference > remaining_digits)
        {
            //if(no
            printf("u Whole number can't fit with this precision upgrade.\r\n");
            exit(1);
        }

        // Exponent ** imp.
        for(uint128_t i = 1; i < precision_difference; i++)
        {
            power = power * 10;
        }


        /*
        std::cout << "u power" << std::endl;
        print_uint128_t(power);
        std::cout << std::endl;
        */

        // Do the upgrade.
        struct t_number upgraded_no = {
            no.value * power,
            precision
        };

        return upgraded_no;
    }

    // Downgrade / truncate precision.
    else
    {
        precision_difference = no.precision - precision;

        /*
        std::cout << "d Prec dif" << std::endl;
        print_uint128_t(precision_difference);
        std::cout << std::endl;
        */

        // Exponent ** imp.
        for(uint128_t i = 1; i < precision_difference; i++)
        {
            power = power * 10;
        }

        // Check number can be made this small first.
        // Covered by precision sanity checks.
        // Result may end up zero.

        /*
        std::cout << "d power" << std::endl;
        print_uint128_t(power);
        std::cout << std::endl;
        */

        // Do the downgrade.
        // Can end up
        struct t_number upgraded_no = {
            no.value / power,
            precision
        };

        return upgraded_no;
    }

}

uint128_t highest_precision(struct t_number left, struct t_number right)
{
    if(left.precision > right.precision)
    {
        return left.precision;
    }

    return right.precision;
}

bool safe_logic(unsigned int op, struct t_number left, struct t_number right, uint128_t precision)
{


    precision = precision != 1000 ? precision : highest_precision(left, right);
    left = safe_dec(left, precision);
    right = safe_dec(right, precision);

    if(op == GREATER_THAN)
    {
        return left.value > right.value;
    }

    if(op == GREATER_EQUALS)
    {
        return left.value >= right.value;
    }

    if(op == LESS_THAN)
    {
        return left.value < right.value;
    }

    if(op == LESS_EQUALS)
    {
        return left.value <= right.value;
    }

    if(op == BOTH_EQUALS)
    {
        return left.value == right.value;
    }

    if(op == NOT_EQUALS)
    {
        return left.value != right.value;
    }

    printf("Unknown logic op.\r\n");
    exit(1);
}

uint128_t Min(uint128_t left, uint128_t right)
{
    if(left <= right)
    {
        return left;
    }

    return right;
}

uint128_t Max(uint128_t left, uint128_t right)
{
    if(left >= right)
    {
        return left;
    }

    return right;
}

struct t_number Min(struct t_number left, struct t_number right)
{
    if(safe_logic(LESS_EQUALS, left, right))
    {
        return left;
    }

    return right;
}

struct t_number Max(struct t_number left, struct t_number right)
{
    if(safe_logic(GREATER_EQUALS, left, right))
    {
        return left;
    }

    return right;
}

t_number N(uint128_t value, uint128_t precision)
{
    // Pack results into t_number.
    t_number result = { value, 0 };
    if(precision != 1000)
    {
        result = safe_dec(result, precision);
    }

    return result;
}

struct t_number safe_mul(struct t_number left, struct t_number right)
{
    // Check for overflow before multiplying them.
    if(right.value > 0 && left.value > MAX_UINT128 / right.value)
    {
        printf("Mul overflow.\r\n");
        exit(1);
    }

    // Compute result.
    struct t_number result = {
        left.value * right.value,
        left.precision + right.precision
    };

    return result;
}

struct t_number safe_add(struct t_number left, struct t_number right)
{
    /*
    std::cout << "max int: " << std::endl;
    print_uint128_t(left.value);
    std::cout << std::endl;
    print_uint128_t(right.value);
    std::cout << std::endl;
    print_uint128_t(MAX_UINT128 - left.value);
    std::cout << std::endl;
    */

    // Line up decimal points.
    if(left.precision != right.precision)
    {
        left = safe_dec(left, Max(left.precision, right.precision));
        right = safe_dec(right, Max(left.precision, right.precision));
    }

    // Check for overflow before adding them.
    if(left.value > 0 && right.value > MAX_UINT128 - left.value)
    {
        printf("Add overflow.\r\n");
        exit(1);
    }

    // Compute result.
    struct t_number result = {
        left.value + right.value,
        Max(left.precision, right.precision)
    };

    return result;
}

struct t_number safe_sub(struct t_number left, struct t_number right)
{
    // Line up decimal points.
    if(left.precision != right.precision)
    {
        left = safe_dec(left, Max(left.precision, right.precision));
        right = safe_dec(right, Max(left.precision, right.precision));
    }

    // Check for overflow before adding them.
    if(left.value < right.value)
    {
        printf("Sub underflow.\r\n");
        exit(1);
    }

    // Compute result.
    uint128_t result = 0;
    if(left.value != 0)
    {
        result = left.value - right.value;
    }

    // Return result.
    struct t_number no = {
        result,
        Max(left.precision, right.precision)
    };

    return no;
}

uint128_t GCD(uint128_t left, uint128_t right)
{
    if(left <= 0 || right <= 0)
    {
        return 0;
    }

    if(left == right)
    {
        return left;
    }
    else
    {
        while(1)
        {
            if(left > right)
            {
                left = left % right;
                if(left == 0)
                {
                    return right;
                }
            }
            else
            {
                right = right % left;
                if(right == 0)
                {
                    return left;
                }
            }
        }
    }
}

struct t_number safe_div(struct t_number left, struct t_number right)
{
    // Check for divide by zero.
    if(right.value == 0 || left.value == 0)
    {
        printf("Div by zero\r\n");
        exit(1);
    }

    // Attempt to simplify left and right to save digit space in uint128.
    uint128_t gcd = GCD(left.value, right.value);
    left.value = left.value / gcd;
    right.value = right.value / gcd;

    /*
     * maybe ignore if left.value ends up being 1. i.e. left.value is already a factor of right.value.
     */

    // Calculate whole number result.
    uint128_t whole_part = left.value / right.value;
    uint128_t whole_part_len = count_digits(whole_part);

    // Calculate usable precision.
    uint128_t padding = 0;
    uint128_t precision = 0;
    uint128_t result = 0;
    uint128_t left_digits = count_digits(left.value);

    /* Apply padding to dividend. This ensures dividend is always larger in size than
     * divisor and the base padding forces the 'decimal' portion of the number
     * to be visible as an integer.
     */
    padding = left.precision + whole_part_len;

    // left.precision + 1;
    uint128_t pow = EXP(10, padding);

    /*
    std::cout << std::endl << std::endl;
    std::cout << "left" << std::endl;
    PN(left);

    std::cout << std::endl << std::endl;
    std::cout << "right" << std::endl;
    PN(right);

    std::cout << std::endl << std::endl;
    std::cout << "padded len" << std::endl;
    std::cout << std::endl << std::endl;
    print_uint128_t(padding);

    std::cout << std::endl << std::endl;
    std::cout << "whole part" << std::endl;
    std::cout << std::endl << std::endl;
    print_uint128_t(whole_part);
    */

    // Avoid overflow after padding.
    if(left_digits + padding > MAX_UINT128_DIGITS)
    {
        printf("Number result too large for this division.\r\n");
        exit(1);
    }

    // Calculate intermediary padded result.
    uint128_t padded_left = left.value * pow;
    result = padded_left / right.value;
    precision = count_digits(result) - whole_part_len;

    // Exclude potential truncation errors from excessively large numbers.
    if(MAX_UINT128_DIGITS - whole_part_len < left.precision)
    {
        printf("Result too large for decimal component.\r\n");
        exit(1);
    }

    // Check for division overflow errors.
    struct t_number derive_left = safe_add(
            safe_mul(N(whole_part, 0), N(right.value, 0)),
            N(left.value % right.value, 0)
    );
    if(!safe_logic(BOTH_EQUALS, N(left.value, 0), derive_left, 0))
    {
        printf("Division overflow error.\r\n");
        exit(1);
    }

    // These assert lines bound the result by the inputs e.g.
    // a = 100, b = 10 then r <= a.
    // a = 10, b = 100 then r <= b.
    // It's a basic sanity check.
    if(padded_left < right.value)
    {
        assert(result <= right.value);
    }
    if(right.value < padded_left)
    {
        assert(result <= padded_left);
    }

    // Pack results.
    struct t_number no = {
        result,
        precision
    };

    // Return them.
    return no;
}

struct t_number simplify_insignificant(struct t_number no)
{
    while(no.value % 10 == 0 && no.precision)
    {
        no.value /= 10;
        no.precision -= 1;
    }

    return no;
}

struct t_number no_by_index(struct t_number no, uint128_t offset, uint128_t limit)
{
    uint128_t value = 0;
    uint128_t padding = 0;
    uint128_t col_offset = 0;
    uint128_t count = 0;
    uint128_t len = count_digits(no.value);
    uint128_t last = no.value;
    uint128_t current = no.value;
    uint128_t candidate = 0;
    uint128_t precision = no.precision;

    if(limit > len)
    {
        printf("No by index limit overflow\r\n");
        exit(1);
    }

    if(limit == 0)
    {
        limit = len - offset;
    }

    last = current = no.value;
    for(count = len - 1; count >= offset && (len == limit || col_offset + 1 != len); count--)
    {
        // Traverse number.
        candidate = current / 10;

        // Skip outside no range.
        if(count > (offset + limit) - 1)
        {
            current = candidate;
            if(count <= precision && precision)
            {
                precision--;
            }

            continue;
        }

        // Traverse number.
        last = current % 10;

        // Save column value
        if(col_offset && limit != 1)
        {
            padding = EXP(10, col_offset);
        }
        else
        {
            padding = 1;
        }

        // Add column value.
        value += last * padding;

        // Updarte col offset.
        col_offset++;
        current = candidate;

        // Avoid underflow.
        if(count == 0)
        {
            if(limit == 1)
            {
                break;
            }
            count = 1;
            break;
        }
    }

    struct t_number answer = { value, limit };
    return answer;
}

struct t_number round(struct t_number no, uint128_t precision)
{
    struct t_number result;
    uint128_t digits = count_digits(no.value);
    if(digits == 0)
    {
        result.value = 0;
        result.precision = precision;
        return result;
    }

    if(precision + 1 >= digits || precision == 0)
    {
        return no;
    }

    // Get trailing digit and mid value.
    uint128_t whole_len = (digits - no.precision);
    struct t_number surplus = no_by_index(no, whole_len + (precision));
    if(!surplus.value)
    {
        return no;
    }

    // if surplus is 0 - 1 is an underflow = max uint138 then exp writes over all memory clobbering everything in sight
    // everything will burn in a fire. ppl. trees. small trees that look like ppl. bow over and weep
    assert(surplus.precision);

    struct t_number ceiling = {
        5 * EXP(10, surplus.precision - 1),
        surplus.precision
    };

    // Init result.
    uint128_t x_l = digits - surplus.precision;
    result = no_by_index(no, 0, x_l);
    result.precision = x_l - whole_len;
    //result.precision = surplus.precision;

    // Round up.
    if(surplus.value >= ceiling.value)
    {
        if(result.value == MAX_UINT128)
        {
            printf("Can't round up value = overflow\r\n");
            exit(1);
        }

        result.value++;
    }

    return result;
}

struct t_number safe_math(
    struct t_number (*math_op)
        (struct t_number, struct t_number),
    struct t_number left, struct t_number right, uint128_t precision)
{
    // Convert numbers to correct precision.
    // Whole number overflow exceptions bubble up.
    precision = precision != 1000 ? precision : highest_precision(left, right);

    // Precision too high.
    if(precision > MAX_UINT128_PRECISION)
    {
        printf("Chosen t_number precision is too high.\r\n");
        exit(1);
    }

    // Pad inputs.
    left = left.precision < precision ? safe_dec(left, precision) : left;
    right = right.precision < precision ? safe_dec(right, precision) : right;
    if(math_op == safe_div)
    {
        left = left.precision != precision ? safe_dec(left, precision) : left;
    }

    // Calculate result.
    t_number result = (*math_op) (left, right);

    // Truncate or pad result as needed to required precision.
    result = safe_dec(result, precision);

    return result;
}

uint128_t uint128_get_whole(struct t_number no)
{
    t_number temp = safe_dec(no, 0);

    uint128_t result = temp.value;

    return result;
}

uint128_t uint128_get_dec(struct t_number no)
{
    // Pad whole portion.
    uint128_t whole_unpadded = uint128_get_whole(no);
    t_number whole_padded = safe_dec(
        N(whole_unpadded, 0), no.precision
    );

    // Calculate decimal result.
    t_number temp = safe_math(
        &safe_sub,
        no,
        whole_padded
    );

    uint128_t result = temp.value;

    return result;
}

struct t_number safe_mod(struct t_number left, struct t_number right, uint128_t precision)
{
    // Convert numbers to correct precision.
    // Whole number overflow exceptions bubble up.
    precision = precision ? precision : highest_precision(left, right);
    left = safe_dec(left, precision);
    right = safe_dec(right, precision);

    // Check for divide by zero.
    if(right.value == 0)
    {
        printf("Mod zero error\r\n");
        exit(1);
    }

    // Compute result.
    struct t_number result = {
        left.value % right.value,
        precision
    };

    return result;
}

t_number N(const char *s, uint128_t precision)
{
    // Someone forgot to use quotes.
    assert(s != 0);





    uint128_t value = 0;
    uint128_t s_precision = 0;
    uint128_t s_len = strlen(s);
    bool dec_found = false;
    uint128_t unit = 0;
    uint128_t pow = 1;



    /*
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "S LEN" << std::endl;
    print_uint128_t(s_len);
    std::cout << std::endl;
    std::cout << "S = " << s;

    std::cout << std::endl;
    std::cout << std::endl;
    */

    assert(s_len <= MAX_UINT128_DIGITS);
    signed int i = (signed int) s_len - 1;
    uint128_t dec_total = 0;
    if(s_len)
    {
        for(; i >= 0; i--)
        {
            //std::cout << s[i] << std::endl;

            // Encountered decimal point.
            if(s[i] == '.')
            {
                dec_found = true;
                continue;
            }

            // Convert ASCII to int value.
            unit = s[i] - '0';

            //std::cout << unit << std::endl;

            //std::cout << pow << std::endl;

            // Increase result.
            value += unit * pow;

            // Increase column value.
            pow *= 10;

            // Keep increasing precision value.
            if(!dec_found)
            {
                dec_total += unit;
                s_precision++;
            }
        }
    }

    // Handle precision underflows.
    if(dec_total && precision < s_precision && precision)
    {
        printf("Insufficent prescision to handle storing this value\r\n");
        exit(1);
    }

    // Assume whole number. (dec_total ? 333 : s_len - 1)
    // dec_found ? (dec_total ? s_len - s_precision : 1 ) : 0;
    uint128_t existing_prec = dec_found ? (s_precision ? s_precision : 0 ) : 0;


    // Pack results into t_number.
    t_number result = { value, existing_prec };

    // Ensure input is stored (and / or truncated) to this len.
    if(precision)
    {
        result = safe_dec(result, precision);
    }

    #ifdef MATH_DEBUG
      if(precision == 0 && !is_whole && !dec_found && value)
      {
          printf("\r\n\r\nWarning: ambiguous no. specify prec or if whole is intended.\r\n\r\n");
          PN(result);
      }
    #endif

    return result;
}
