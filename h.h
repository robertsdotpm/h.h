// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
// AUTO GENERATED -- dont edit this file directly! Run single file builder
#ifndef H_H_header
#define H_H_header
/*
- Hashmap came from http://pokristensson.com/strmap.html and was modified to support any object. Notice is already in the source code (GNU Lesser General Public License.)
- The HTTP download and POST code came from https://github.com/mattiasgustavsson/libs/blob/master/http.h which is duel licensed under apache and the public domain.
- The web module came from https://github.com/vurtun/mmx and was a port of https://github.com/deplinenoise/webby that I substantially modified to work across platforms. Full copy right notices is already in the code. BSD 2-Clause "Simplified" License
- Crypto code came from trezor firmware and was modified to make it single-header https://github.com/trezor/trezor-firmware. Credit already given in the source code. Apache 2.0.
- Regex came from https://github.com/ccxvii/minilibs and is in the public domain.
- Endian module from https://raw.githubusercontent.com/freebsd/freebsd/master/sys/sys/endian.h
- Uint128.h from https://www.leidinger.net/FreeBSD/dox/dev_random/html/d2/d45/uint128_8h_source.html
- JSON I wrote.
- Linked list I wrote.
- BigNum I wrote.
- Rand I wrote
- API I wrote

Every license on this list should already be compatible with the GNU GPL.
*/
/*

                    GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The GNU General Public License is a free, copyleft license for
software and other kinds of works.

  The licenses for most software and other practical works are designed
to take away your freedom to share and change the works.  By contrast,
the GNU General Public License is intended to guarantee your freedom to
share and change all versions of a program--to make sure it remains free
software for all its users.  We, the Free Software Foundation, use the
GNU General Public License for most of our software; it applies also to
any other work released this way by its authors.  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
them if you wish), that you receive source code or can get it if you
want it, that you can change the software or use pieces of it in new
free programs, and that you know you can do these things.

  To protect your rights, we need to prevent others from denying you
these rights or asking you to surrender the rights.  Therefore, you have
certain responsibilities if you distribute copies of the software, or if
you modify it: responsibilities to respect the freedom of others.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must pass on to the recipients the same
freedoms that you received.  You must make sure that they, too, receive
or can get the source code.  And you must show them these terms so they
know their rights.

  Developers that use the GNU GPL protect your rights with two steps:
(1) assert copyright on the software, and (2) offer you this License
giving you legal permission to copy, distribute and/or modify it.

  For the developers' and authors' protection, the GPL clearly explains
that there is no warranty for this free software.  For both users' and
authors' sake, the GPL requires that modified versions be marked as
changed, so that their problems will not be attributed erroneously to
authors of previous versions.

  Some devices are designed to deny users access to install or run
modified versions of the software inside them, although the manufacturer
can do so.  This is fundamentally incompatible with the aim of
protecting users' freedom to change the software.  The systematic
pattern of such abuse occurs in the area of products for individuals to
use, which is precisely where it is most unacceptable.  Therefore, we
have designed this version of the GPL to prohibit the practice for those
products.  If such problems arise substantially in other domains, we
stand ready to extend this provision to those domains in future versions
of the GPL, as needed to protect the freedom of users.

  Finally, every program is threatened constantly by software patents.
States should not allow patents to restrict development and use of
software on general-purpose computers, but in those that do, we wish to
avoid the special danger that patents applied to a free program could
make it effectively proprietary.  To prevent this, the GPL assures that
patents cannot be used to render the program non-free.

  The precise terms and conditions for copying, distribution and
modification follow.

                       TERMS AND CONDITIONS

  0. Definitions.

  "This License" refers to version 3 of the GNU General Public License.

  "Copyright" also means copyright-like laws that apply to other kinds of
works, such as semiconductor masks.

  "The Program" refers to any copyrightable work licensed under this
License.  Each licensee is addressed as "you".  "Licensees" and
"recipients" may be individuals or organizations.

  To "modify" a work means to copy from or adapt all or part of the work
in a fashion requiring copyright permission, other than the making of an
exact copy.  The resulting work is called a "modified version" of the
earlier work or a work "based on" the earlier work.

  A "covered work" means either the unmodified Program or a work based
on the Program.

  To "propagate" a work means to do anything with it that, without
permission, would make you directly or secondarily liable for
infringement under applicable copyright law, except executing it on a
computer or modifying a private copy.  Propagation includes copying,
distribution (with or without modification), making available to the
public, and in some countries other activities as well.

  To "convey" a work means any kind of propagation that enables other
parties to make or receive copies.  Mere interaction with a user through
a computer network, with no transfer of a copy, is not conveying.

  An interactive user interface displays "Appropriate Legal Notices"
to the extent that it includes a convenient and prominently visible
feature that (1) displays an appropriate copyright notice, and (2)
tells the user that there is no warranty for the work (except to the
extent that warranties are provided), that licensees may convey the
work under this License, and how to view a copy of this License.  If
the interface presents a list of user commands or options, such as a
menu, a prominent item in the list meets this criterion.

  1. Source Code.

  The "source code" for a work means the preferred form of the work
for making modifications to it.  "Object code" means any non-source
form of a work.

  A "Standard Interface" means an interface that either is an official
standard defined by a recognized standards body, or, in the case of
interfaces specified for a particular programming language, one that
is widely used among developers working in that language.

  The "System Libraries" of an executable work include anything, other
than the work as a whole, that (a) is included in the normal form of
packaging a Major Component, but which is not part of that Major
Component, and (b) serves only to enable use of the work with that
Major Component, or to implement a Standard Interface for which an
implementation is available to the public in source code form.  A
"Major Component", in this context, means a major essential component
(kernel, window system, and so on) of the specific operating system
(if any) on which the executable work runs, or a compiler used to
produce the work, or an object code interpreter used to run it.

  The "Corresponding Source" for a work in object code form means all
the source code needed to generate, install, and (for an executable
work) run the object code and to modify the work, including scripts to
control those activities.  However, it does not include the work's
System Libraries, or general-purpose tools or generally available free
programs which are used unmodified in performing those activities but
which are not part of the work.  For example, Corresponding Source
includes interface definition files associated with source files for
the work, and the source code for shared libraries and dynamically
linked subprograms that the work is specifically designed to require,
such as by intimate data communication or control flow between those
subprograms and other parts of the work.

  The Corresponding Source need not include anything that users
can regenerate automatically from other parts of the Corresponding
Source.

  The Corresponding Source for a work in source code form is that
same work.

  2. Basic Permissions.

  All rights granted under this License are granted for the term of
copyright on the Program, and are irrevocable provided the stated
conditions are met.  This License explicitly affirms your unlimited
permission to run the unmodified Program.  The output from running a
covered work is covered by this License only if the output, given its
content, constitutes a covered work.  This License acknowledges your
rights of fair use or other equivalent, as provided by copyright law.

  You may make, run and propagate covered works that you do not
convey, without conditions so long as your license otherwise remains
in force.  You may convey covered works to others for the sole purpose
of having them make modifications exclusively for you, or provide you
with facilities for running those works, provided that you comply with
the terms of this License in conveying all material for which you do
not control copyright.  Those thus making or running the covered works
for you must do so exclusively on your behalf, under your direction
and control, on terms that prohibit them from making any copies of
your copyrighted material outside their relationship with you.

  Conveying under any other circumstances is permitted solely under
the conditions stated below.  Sublicensing is not allowed; section 10
makes it unnecessary.

  3. Protecting Users' Legal Rights From Anti-Circumvention Law.

  No covered work shall be deemed part of an effective technological
measure under any applicable law fulfilling obligations under article
11 of the WIPO copyright treaty adopted on 20 December 1996, or
similar laws prohibiting or restricting circumvention of such
measures.

  When you convey a covered work, you waive any legal power to forbid
circumvention of technological measures to the extent such circumvention
is effected by exercising rights under this License with respect to
the covered work, and you disclaim any intention to limit operation or
modification of the work as a means of enforcing, against the work's
users, your or third parties' legal rights to forbid circumvention of
technological measures.

  4. Conveying Verbatim Copies.

  You may convey verbatim copies of the Program's source code as you
receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy an appropriate copyright notice;
keep intact all notices stating that this License and any
non-permissive terms added in accord with section 7 apply to the code;
keep intact all notices of the absence of any warranty; and give all
recipients a copy of this License along with the Program.

  You may charge any price or no price for each copy that you convey,
and you may offer support or warranty protection for a fee.

  5. Conveying Modified Source Versions.

  You may convey a work based on the Program, or the modifications to
produce it from the Program, in the form of source code under the
terms of section 4, provided that you also meet all of these conditions:

    a) The work must carry prominent notices stating that you modified
    it, and giving a relevant date.

    b) The work must carry prominent notices stating that it is
    released under this License and any conditions added under section
    7.  This requirement modifies the requirement in section 4 to
    "keep intact all notices".

    c) You must license the entire work, as a whole, under this
    License to anyone who comes into possession of a copy.  This
    License will therefore apply, along with any applicable section 7
    additional terms, to the whole of the work, and all its parts,
    regardless of how they are packaged.  This License gives no
    permission to license the work in any other way, but it does not
    invalidate such permission if you have separately received it.

    d) If the work has interactive user interfaces, each must display
    Appropriate Legal Notices; however, if the Program has interactive
    interfaces that do not display Appropriate Legal Notices, your
    work need not make them do so.

  A compilation of a covered work with other separate and independent
works, which are not by their nature extensions of the covered work,
and which are not combined with it such as to form a larger program,
in or on a volume of a storage or distribution medium, is called an
"aggregate" if the compilation and its resulting copyright are not
used to limit the access or legal rights of the compilation's users
beyond what the individual works permit.  Inclusion of a covered work
in an aggregate does not cause this License to apply to the other
parts of the aggregate.

  6. Conveying Non-Source Forms.

  You may convey a covered work in object code form under the terms
of sections 4 and 5, provided that you also convey the
machine-readable Corresponding Source under the terms of this License,
in one of these ways:

    a) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by the
    Corresponding Source fixed on a durable physical medium
    customarily used for software interchange.

    b) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by a
    written offer, valid for at least three years and valid for as
    long as you offer spare parts or customer support for that product
    model, to give anyone who possesses the object code either (1) a
    copy of the Corresponding Source for all the software in the
    product that is covered by this License, on a durable physical
    medium customarily used for software interchange, for a price no
    more than your reasonable cost of physically performing this
    conveying of source, or (2) access to copy the
    Corresponding Source from a network server at no charge.

    c) Convey individual copies of the object code with a copy of the
    written offer to provide the Corresponding Source.  This
    alternative is allowed only occasionally and noncommercially, and
    only if you received the object code with such an offer, in accord
    with subsection 6b.

    d) Convey the object code by offering access from a designated
    place (gratis or for a charge), and offer equivalent access to the
    Corresponding Source in the same way through the same place at no
    further charge.  You need not require recipients to copy the
    Corresponding Source along with the object code.  If the place to
    copy the object code is a network server, the Corresponding Source
    may be on a different server (operated by you or a third party)
    that supports equivalent copying facilities, provided you maintain
    clear directions next to the object code saying where to find the
    Corresponding Source.  Regardless of what server hosts the
    Corresponding Source, you remain obligated to ensure that it is
    available for as long as needed to satisfy these requirements.

    e) Convey the object code using peer-to-peer transmission, provided
    you inform other peers where the object code and Corresponding
    Source of the work are being offered to the general public at no
    charge under subsection 6d.

  A separable portion of the object code, whose source code is excluded
from the Corresponding Source as a System Library, need not be
included in conveying the object code work.

  A "User Product" is either (1) a "consumer product", which means any
tangible personal property which is normally used for personal, family,
or household purposes, or (2) anything designed or sold for incorporation
into a dwelling.  In determining whether a product is a consumer product,
doubtful cases shall be resolved in favor of coverage.  For a particular
product received by a particular user, "normally used" refers to a
typical or common use of that class of product, regardless of the status
of the particular user or of the way in which the particular user
actually uses, or expects or is expected to use, the product.  A product
is a consumer product regardless of whether the product has substantial
commercial, industrial or non-consumer uses, unless such uses represent
the only significant mode of use of the product.

  "Installation Information" for a User Product means any methods,
procedures, authorization keys, or other information required to install
and execute modified versions of a covered work in that User Product from
a modified version of its Corresponding Source.  The information must
suffice to ensure that the continued functioning of the modified object
code is in no case prevented or interfered with solely because
modification has been made.

  If you convey an object code work under this section in, or with, or
specifically for use in, a User Product, and the conveying occurs as
part of a transaction in which the right of possession and use of the
User Product is transferred to the recipient in perpetuity or for a
fixed term (regardless of how the transaction is characterized), the
Corresponding Source conveyed under this section must be accompanied
by the Installation Information.  But this requirement does not apply
if neither you nor any third party retains the ability to install
modified object code on the User Product (for example, the work has
been installed in ROM).

  The requirement to provide Installation Information does not include a
requirement to continue to provide support service, warranty, or updates
for a work that has been modified or installed by the recipient, or for
the User Product in which it has been modified or installed.  Access to a
network may be denied when the modification itself materially and
adversely affects the operation of the network or violates the rules and
protocols for communication across the network.

  Corresponding Source conveyed, and Installation Information provided,
in accord with this section must be in a format that is publicly
documented (and with an implementation available to the public in
source code form), and must require no special password or key for
unpacking, reading or copying.

  7. Additional Terms.

  "Additional permissions" are terms that supplement the terms of this
License by making exceptions from one or more of its conditions.
Additional permissions that are applicable to the entire Program shall
be treated as though they were included in this License, to the extent
that they are valid under applicable law.  If additional permissions
apply only to part of the Program, that part may be used separately
under those permissions, but the entire Program remains governed by
this License without regard to the additional permissions.

  When you convey a copy of a covered work, you may at your option
remove any additional permissions from that copy, or from any part of
it.  (Additional permissions may be written to require their own
removal in certain cases when you modify the work.)  You may place
additional permissions on material, added by you to a covered work,
for which you have or can give appropriate copyright permission.

  Notwithstanding any other provision of this License, for material you
add to a covered work, you may (if authorized by the copyright holders of
that material) supplement the terms of this License with terms:

    a) Disclaiming warranty or limiting liability differently from the
    terms of sections 15 and 16 of this License; or

    b) Requiring preservation of specified reasonable legal notices or
    author attributions in that material or in the Appropriate Legal
    Notices displayed by works containing it; or

    c) Prohibiting misrepresentation of the origin of that material, or
    requiring that modified versions of such material be marked in
    reasonable ways as different from the original version; or

    d) Limiting the use for publicity purposes of names of licensors or
    authors of the material; or

    e) Declining to grant rights under trademark law for use of some
    trade names, trademarks, or service marks; or

    f) Requiring indemnification of licensors and authors of that
    material by anyone who conveys the material (or modified versions of
    it) with contractual assumptions of liability to the recipient, for
    any liability that these contractual assumptions directly impose on
    those licensors and authors.

  All other non-permissive additional terms are considered "further
restrictions" within the meaning of section 10.  If the Program as you
received it, or any part of it, contains a notice stating that it is
governed by this License along with a term that is a further
restriction, you may remove that term.  If a license document contains
a further restriction but permits relicensing or conveying under this
License, you may add to a covered work material governed by the terms
of that license document, provided that the further restriction does
not survive such relicensing or conveying.

  If you add terms to a covered work in accord with this section, you
must place, in the relevant source files, a statement of the
additional terms that apply to those files, or a notice indicating
where to find the applicable terms.

  Additional terms, permissive or non-permissive, may be stated in the
form of a separately written license, or stated as exceptions;
the above requirements apply either way.

  8. Termination.

  You may not propagate or modify a covered work except as expressly
provided under this License.  Any attempt otherwise to propagate or
modify it is void, and will automatically terminate your rights under
this License (including any patent licenses granted under the third
paragraph of section 11).

  However, if you cease all violation of this License, then your
license from a particular copyright holder is reinstated (a)
provisionally, unless and until the copyright holder explicitly and
finally terminates your license, and (b) permanently, if the copyright
holder fails to notify you of the violation by some reasonable means
prior to 60 days after the cessation.

  Moreover, your license from a particular copyright holder is
reinstated permanently if the copyright holder notifies you of the
violation by some reasonable means, this is the first time you have
received notice of violation of this License (for any work) from that
copyright holder, and you cure the violation prior to 30 days after
your receipt of the notice.

  Termination of your rights under this section does not terminate the
licenses of parties who have received copies or rights from you under
this License.  If your rights have been terminated and not permanently
reinstated, you do not qualify to receive new licenses for the same
material under section 10.

  9. Acceptance Not Required for Having Copies.

  You are not required to accept this License in order to receive or
run a copy of the Program.  Ancillary propagation of a covered work
occurring solely as a consequence of using peer-to-peer transmission
to receive a copy likewise does not require acceptance.  However,
nothing other than this License grants you permission to propagate or
modify any covered work.  These actions infringe copyright if you do
not accept this License.  Therefore, by modifying or propagating a
covered work, you indicate your acceptance of this License to do so.

  10. Automatic Licensing of Downstream Recipients.

  Each time you convey a covered work, the recipient automatically
receives a license from the original licensors, to run, modify and
propagate that work, subject to this License.  You are not responsible
for enforcing compliance by third parties with this License.

  An "entity transaction" is a transaction transferring control of an
organization, or substantially all assets of one, or subdividing an
organization, or merging organizations.  If propagation of a covered
work results from an entity transaction, each party to that
transaction who receives a copy of the work also receives whatever
licenses to the work the party's predecessor in interest had or could
give under the previous paragraph, plus a right to possession of the
Corresponding Source of the work from the predecessor in interest, if
the predecessor has it or can get it with reasonable efforts.

  You may not impose any further restrictions on the exercise of the
rights granted or affirmed under this License.  For example, you may
not impose a license fee, royalty, or other charge for exercise of
rights granted under this License, and you may not initiate litigation
(including a cross-claim or counterclaim in a lawsuit) alleging that
any patent claim is infringed by making, using, selling, offering for
sale, or importing the Program or any portion of it.

  11. Patents.

  A "contributor" is a copyright holder who authorizes use under this
License of the Program or a work on which the Program is based.  The
work thus licensed is called the contributor's "contributor version".

  A contributor's "essential patent claims" are all patent claims
owned or controlled by the contributor, whether already acquired or
hereafter acquired, that would be infringed by some manner, permitted
by this License, of making, using, or selling its contributor version,
but do not include claims that would be infringed only as a
consequence of further modification of the contributor version.  For
purposes of this definition, "control" includes the right to grant
patent sublicenses in a manner consistent with the requirements of
this License.

  Each contributor grants you a non-exclusive, worldwide, royalty-free
patent license under the contributor's essential patent claims, to
make, use, sell, offer for sale, import and otherwise run, modify and
propagate the contents of its contributor version.

  In the following three paragraphs, a "patent license" is any express
agreement or commitment, however denominated, not to enforce a patent
(such as an express permission to practice a patent or covenant not to
sue for patent infringement).  To "grant" such a patent license to a
party means to make such an agreement or commitment not to enforce a
patent against the party.

  If you convey a covered work, knowingly relying on a patent license,
and the Corresponding Source of the work is not available for anyone
to copy, free of charge and under the terms of this License, through a
publicly available network server or other readily accessible means,
then you must either (1) cause the Corresponding Source to be so
available, or (2) arrange to deprive yourself of the benefit of the
patent license for this particular work, or (3) arrange, in a manner
consistent with the requirements of this License, to extend the patent
license to downstream recipients.  "Knowingly relying" means you have
actual knowledge that, but for the patent license, your conveying the
covered work in a country, or your recipient's use of the covered work
in a country, would infringe one or more identifiable patents in that
country that you have reason to believe are valid.

  If, pursuant to or in connection with a single transaction or
arrangement, you convey, or propagate by procuring conveyance of, a
covered work, and grant a patent license to some of the parties
receiving the covered work authorizing them to use, propagate, modify
or convey a specific copy of the covered work, then the patent license
you grant is automatically extended to all recipients of the covered
work and works based on it.

  A patent license is "discriminatory" if it does not include within
the scope of its coverage, prohibits the exercise of, or is
conditioned on the non-exercise of one or more of the rights that are
specifically granted under this License.  You may not convey a covered
work if you are a party to an arrangement with a third party that is
in the business of distributing software, under which you make payment
to the third party based on the extent of your activity of conveying
the work, and under which the third party grants, to any of the
parties who would receive the covered work from you, a discriminatory
patent license (a) in connection with copies of the covered work
conveyed by you (or copies made from those copies), or (b) primarily
for and in connection with specific products or compilations that
contain the covered work, unless you entered into that arrangement,
or that patent license was granted, prior to 28 March 2007.

  Nothing in this License shall be construed as excluding or limiting
any implied license or other defenses to infringement that may
otherwise be available to you under applicable patent law.

  12. No Surrender of Others' Freedom.

  If conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot convey a
covered work so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you may
not convey it at all.  For example, if you agree to terms that obligate you
to collect a royalty for further conveying from those to whom you convey
the Program, the only way you could satisfy both those terms and this
License would be to refrain entirely from conveying the Program.

  13. Use with the GNU Affero General Public License.

  Notwithstanding any other provision of this License, you have
permission to link or combine any covered work with a work licensed
under version 3 of the GNU Affero General Public License into a single
combined work, and to convey the resulting work.  The terms of this
License will continue to apply to the part which is the covered work,
but the special requirements of the GNU Affero General Public License,
section 13, concerning interaction through a network will apply to the
combination as such.

  14. Revised Versions of this License.

  The Free Software Foundation may publish revised and/or new versions of
the GNU General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

  Each version is given a distinguishing version number.  If the
Program specifies that a certain numbered version of the GNU General
Public License "or any later version" applies to it, you have the
option of following the terms and conditions either of that numbered
version or of any later version published by the Free Software
Foundation.  If the Program does not specify a version number of the
GNU General Public License, you may choose any version ever published
by the Free Software Foundation.

  If the Program specifies that a proxy can decide which future
versions of the GNU General Public License can be used, that proxy's
public statement of acceptance of a version permanently authorizes you
to choose that version for the Program.

  Later license versions may give you additional or different
permissions.  However, no additional obligations are imposed on any
author or copyright holder as a result of your choosing to follow a
later version.

  15. Disclaimer of Warranty.

  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY
OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM
IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF
ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

  16. Limitation of Liability.

  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS
THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY
GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF
DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD
PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),
EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF
SUCH DAMAGES.

  17. Interpretation of Sections 15 and 16.

  If the disclaimer of warranty and limitation of liability provided
above cannot be given local legal effect according to their terms,
reviewing courts shall apply local law that most closely approximates
an absolute waiver of all civil liability in connection with the
Program, unless a warranty or assumption of liability accompanies a
copy of the Program in return for a fee.

                     END OF TERMS AND CONDITIONS

            How to Apply These Terms to Your New Programs

  If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these terms.

  To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
state the exclusion of warranty; and each file should have at least
the "copyright" line and a pointer to where the full notice is found.

    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

Also add information on how to contact you by electronic and paper mail.

  If the program does terminal interaction, make it output a short
notice like this when it starts in an interactive mode:

    <program>  Copyright (C) <year>  <name of author>
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.

The hypothetical commands `show w' and `show c' should show the appropriate
parts of the General Public License.  Of course, your program's commands
might be different; for a GUI interface, you would use an "about box".

  You should also get your employer (if you work as a programmer) or school,
if any, to sign a "copyright disclaimer" for the program, if necessary.
For more information on this, and how to apply and follow the GNU GPL, see
<https://www.gnu.org/licenses/>.

  The GNU General Public License does not permit incorporating your program
into proprietary programs.  If your program is a subroutine library, you
may consider it more useful to permit linking proprietary applications with
the library.  If this is what you want to do, use the GNU Lesser General
Public License instead of this License.  But first, please read
<https://www.gnu.org/licenses/why-not-lgpl.html>.

*/

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define __STDC_WANT_LIB_EXT1__ 1

#if defined(__GNUC__) && ! defined(_GNU_SOURCE)
	#define _GNU_SOURCE /* needed for (v)asprintf, affects '#include <stdio.h>' */
#endif

// Todo: detect inclusion and only include once.
#ifdef OE_API_VERSION

#ifdef INSIDE_ENCLAVE
	// Includes for mbedtls shipped with oe.
	// Also add the following libraries to your linker command line:
	// -loeenclave -lmbedcrypto -lmbedtls -lmbedx509
	#include <mbedtls/config.h>
	#include <mbedtls/ctr_drbg.h>
	#include <mbedtls/entropy.h>
	#include <mbedtls/pk.h>
	#include <mbedtls/rsa.h>
	#include <mbedtls/sha256.h>
	
    #include <openenclave/enclave.h>
#else
    #include <openenclave/host.h>
#endif

#endif

#include <random>
#include <cstdio>
#include <cstring>
#include <stddef.h>
#include <assert.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstdarg>
#include <stdint.h>
#include <algorithm>
#include <climits>
#include <cstdint>
#include <limits>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <stdbool.h>
#include <setjmp.h>


#if defined(_WIN32) || defined(_WIN64)


#define F_OK 0
#include <io.h>
#include <ws2tcpip.h>
#pragma comment (lib, "Ws2_32.lib")
// Todo: detect inclusion and only include once.
#include <Windows.h>

#ifndef access
inline int access(const char *pathname, int mode) {
        return _access(pathname, mode);
    }
#endif

#endif

#ifdef __unix__
#include <unistd.h>
#include <strings.h>
#include <sys/param.h>
#include <sys/endian.h>
#endif


#ifdef __APPLE__
#include <unistd.h>


#include <machine/endian.h>

#endif

#ifdef _MSC_VER
#include <intrin.h>


static inline int __builtin_ctz(uint32_t x) {
    unsigned long ret;
    _BitScanForward(&ret, x);
    return (int)ret;
}

static inline int __builtin_ctzll(unsigned long long x) {
    unsigned long ret;
    _BitScanForward64(&ret, x);
    return (int)ret;
}

static inline int __builtin_ctzl(unsigned long x) {
    return sizeof(x) == 8 ? __builtin_ctzll(x) : __builtin_ctz((uint32_t)x);
}

static inline int __builtin_clz(uint32_t x) {
    //unsigned long ret;
    //_BitScanReverse(&ret, x);
    //return (int)(31 ^ ret);
    return (int)__lzcnt(x);
}

static inline int __builtin_clzll(unsigned long long x) {
    //unsigned long ret;
    //_BitScanReverse64(&ret, x);
    //return (int)(63 ^ ret);
    return (int)__lzcnt64(x);
}

static inline int __builtin_clzl(unsigned long x) {
    return sizeof(x) == 8 ? __builtin_clzll(x) : __builtin_clz((uint32_t)x);
}

#ifdef __cplusplus
static inline int __builtin_ctzl(unsigned long long x) {
    return __builtin_ctzll(x);
}

static inline int __builtin_clzl(unsigned long long x) {
    return __builtin_clzll(x);
}
#endif
#endif








// M is a short-hand for sizeof.
#define M sizeof

#undef memzero

void memzero(void *const pnt, const size_t len);

#if defined(OE_API_VERSION)

   typedef unsigned int wby_socket;
   typedef int wby_socket_cast;
   typedef size_t wby_size_cast;

#elif defined(_WIN64) || defined(_WIN32)

    typedef SOCKET wby_socket;
    typedef SOCKET wby_socket_cast;
    typedef int wby_size_cast;

#else

    typedef int wby_socket;
    typedef int wby_socket_cast;
    typedef int wby_size_cast;

#endif

// CONFIG:
/////////////
//////////////////////////
/////////////////////////////////////////////

// Turn on enhanced error checking and logging
// at the expense of performance.
const unsigned int DEBUG_MODE = 1;

const unsigned int OFFERS_CAPACITY = 100;
const unsigned int MATCH_CAPACITY = 100;




#define MAX_WSCONN 0

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WBY_STATIC
#define WBY_IMPLEMENTATION
#define WBY_USE_FIXED_TYPES
#define WBY_USE_ASSERT

#define WBY_REQ_BUF_SIZE 2048


// use precomputed Curve Points (some scalar multiples of curve base point G)
#ifndef USE_PRECOMPUTED_CP
#define USE_PRECOMPUTED_CP 1
#endif

// use fast inverse method
#ifndef USE_INVERSE_FAST
#define USE_INVERSE_FAST 1
#endif

// support for printing bignum256 structures via printf
#ifndef USE_BN_PRINT
#define USE_BN_PRINT 0
#endif

// use deterministic signatures
#ifndef USE_RFC6979
#define USE_RFC6979 1
#endif

// add way how to mark confidential data
#ifndef CONFIDENTIAL
#define CONFIDENTIAL
#endif

#define HTTP_IMPLEMENTATION

//////////////////////////////////////////////
/////// Don't touch bellow this point. ///////
//////////////////////////////////////////////

/*-
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * Copyright (c) 2002 Thomas Moestl <tmm@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */


/* Alignment-agnostic encode/decode bytestream to/from little/big endian. */

static __inline uint16_t
be16dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return ((p[0] << 8) | p[1]);
}

static __inline uint32_t
be32dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return (((unsigned)p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
}

static __inline uint64_t
be64dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return (((uint64_t)be32dec(p) << 32) | be32dec(p + 4));
}

static __inline uint16_t
le16dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return ((p[1] << 8) | p[0]);
}

static __inline uint32_t
le32dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return (((unsigned)p[3] << 24) | (p[2] << 16) | (p[1] << 8) | p[0]);
}

static __inline uint64_t
le64dec(const void *pp)
{
	uint8_t const *p = (uint8_t const *)pp;

	return (((uint64_t)le32dec(p + 4) << 32) | le32dec(p));
}

static __inline void
be16enc(void *pp, uint16_t u)
{
	uint8_t *p = (uint8_t *)pp;

	p[0] = (u >> 8) & 0xff;
	p[1] = u & 0xff;
}

static __inline void
be32enc(void *pp, uint32_t u)
{
	uint8_t *p = (uint8_t *)pp;

	p[0] = (u >> 24) & 0xff;
	p[1] = (u >> 16) & 0xff;
	p[2] = (u >> 8) & 0xff;
	p[3] = u & 0xff;
}

static __inline void
be64enc(void *pp, uint64_t u)
{
	uint8_t *p = (uint8_t *)pp;

	be32enc(p, (uint32_t)(u >> 32));
	be32enc(p + 4, (uint32_t)(u & 0xffffffffU));
}

static __inline void
le16enc(void *pp, uint16_t u)
{
	uint8_t *p = (uint8_t *)pp;

	p[0] = u & 0xff;
	p[1] = (u >> 8) & 0xff;
}

static __inline void
le32enc(void *pp, uint32_t u)
{
	uint8_t *p = (uint8_t *)pp;

	p[0] = u & 0xff;
	p[1] = (u >> 8) & 0xff;
	p[2] = (u >> 16) & 0xff;
	p[3] = (u >> 24) & 0xff;
}

static __inline void
le64enc(void *pp, uint64_t u)
{
	uint8_t *p = (uint8_t *)pp;

	le32enc(p, (uint32_t)(u & 0xffffffffU));
	le32enc(p + 4, (uint32_t)(u >> 32));
}

/*-
 * Copyright (c) 2014 Mark R V Murray
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer
 *    in this position and unchanged.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: head/sys/dev/random/uint128.h 273872 2014-10-30 21:21:53Z markm $
 */
 
 /* This whole thing is a crock :-(
  *
  * Everyone knows you always need the __uint128_t types!
  */
 
 #ifdef __SIZEOF_INT128__
 #define USE_REAL_UINT128_T
 #endif
 
 #ifdef USE_REAL_UINT128_T
 typedef __uint128_t uint128_t;
 #define UINT128_ZERO 0ULL
 #else
 typedef struct {
         /* Ignore endianness */
         uint64_t u128t_word0;
         uint64_t u128t_word1;
 } uint128_t;
 static const uint128_t very_long_zero = {0UL,0UL};
 #define UINT128_ZERO very_long_zero
 #endif
 
 static __inline void
 uint128_increment(uint128_t *big_uintp)
 {
 #ifdef USE_REAL_UINT128_T
         (*big_uintp)++;
 #else
         big_uintp->u128t_word0++;
         if (big_uintp->u128t_word0 == 0UL)
                 big_uintp->u128t_word1++;
 #endif
 }
 
 static __inline void
 uint128_add64(uint128_t *big_uintp, uint64_t add)
 {
 #ifdef USE_REAL_UINT128_T
         (*big_uintp) += add;
 #else
         uint64_t word0p;
 
         word0p = big_uintp->u128t_word0 + add;
         if (word0p < big_uintp->u128t_word0)
                 big_uintp->u128t_word1++;
         big_uintp->u128t_word0 = word0p;
 #endif
 }
 
 static __inline bool
 uint128_equals(uint128_t a, uint128_t b)
 {
 #ifdef USE_REAL_UINT128_T
         return (a == b);
 #else
         return (a.u128t_word0 == b.u128t_word0 &&
             a.u128t_word1 == b.u128t_word1);
 #endif
 }
 
 static __inline int
 uint128_is_zero(uint128_t big_uint)
 {
         return (uint128_equals(big_uint, UINT128_ZERO));
 }


 
 static __inline uint128_t
 le128dec(const void *pp)
 {
         const uint8_t *p = (uint8_t *) pp;
 
 #ifdef USE_REAL_UINT128_T
         return (((uint128_t)le64dec(p + 8) << 64) | le64dec(p));
 #else
         return ((uint128_t){
             .u128t_word0 = le64dec(p),
             .u128t_word1 = le64dec(p + 8),
             });
 #endif
 }
 
 static __inline void
 le128enc(void *pp, uint128_t u)
 {
         uint8_t *p = (uint8_t *) pp;
 
 #ifdef USE_REAL_UINT128_T
         le64enc(p, (uint64_t)(u & UINT64_MAX));
         le64enc(p + 8, (uint64_t)(u >> 64));
 #else
         le64enc(p, u.u128t_word0);
         le64enc(p + 8, u.u128t_word1);
 #endif
 }
 


/*      UINT64_MAX 18446744073709551615ULL */
#define P10_UINT64 10000000000000000000ULL   /* 19 zeroes */
#define E10_UINT64 19

// https://stackoverflow.com/questions/36798522/the-stringizer-operator mind = blown
#define STRINGIZER(x)   # x
#define TO_STRING(x)    STRINGIZER(x)



#define MIN_UINT128  ((uint128_t) 0)
#define MAX_UINT128  (~MIN_UINT128)


static const uint128_t MAX_UINT128_PRECISION = 38; // Then this could be changed, too.
static const uint128_t MAX_UINT128_DIGITS = 39; // Should be 40? todo: check this.

struct t_number {
    uint128_t value;
    uint128_t precision;
};

#define nelem(a) (sizeof (a) / sizeof (a)[0])
#define REPINF 255
#define MAXSUB REG_MAXSUB
#define MAXPROG (32 << 10)

enum {
	/* regcomp flags */
	REG_ICASE = 1,
	REG_NEWLINE = 2,

	/* regexec flags */
	REG_NOTBOL = 4,

	/* limits */
	REG_MAXSUB = 10
};

/* Scan */

enum {
	L_CHAR = 256,
	L_CCLASS,	/* character class */
	L_NCCLASS,	/* negative character class */
	L_NC,		/* "(?:" no capture */
	L_PLA,		/* "(?=" positive lookahead */
	L_NLA,		/* "(?!" negative lookahead */
	L_WORD,		/* "\b" word boundary */
	L_NWORD,	/* "\B" non-word boundary */
	L_REF,		/* "\1" back-reference */
	L_COUNT		/* {M,N} */
};

/* Parse */

enum {
	P_CAT, P_ALT, P_REP,
	P_BOL, P_EOL, P_WORD, P_NWORD,
	P_PAR, P_PLA, P_NLA,
	P_ANY, P_CHAR, P_CCLASS, P_NCCLASS,
	P_REF
};

/* Compile */

enum {
	I_END, I_JUMP, I_SPLIT, I_PLA, I_NLA,
	I_ANYNL, I_ANY, I_CHAR, I_CCLASS, I_NCCLASS, I_REF,
	I_BOL, I_EOL, I_WORD, I_NWORD,
	I_LPAR, I_RPAR
};

typedef unsigned int Rune;
typedef struct Reprog Reprog;
typedef struct Resub Resub;
typedef struct Reclass Reclass;
typedef struct Renode Renode;
typedef struct Reinst Reinst;

struct Resub {
	unsigned int nsub;
	struct {
		const char *sp;
		const char *ep;
	} sub[REG_MAXSUB];
};


struct Reclass {
	Rune *end;
	Rune spans[64];
};

struct Reinst {
	unsigned char opcode;
	unsigned char n;
	Rune c;
	Reclass *cc;
	Reinst *x;
	Reinst *y;
};

struct Reprog {
	Reinst *start;
    Reinst *end;
	int flags;
	unsigned int nsub;
	Reclass cclass[16];
};

struct Renode {
	unsigned char type;
	unsigned char ng, m, n;
	Rune c;
	Reclass *cc;
	Renode *x;
	Renode *y;
};




//typedef struct Rethread Rethread;


Reprog *regcomp(const char *pattern, int cflags, const char **errorp);
int regexec(Reprog *prog, const char *string, Resub *sub, int eflags);
void regfree(Reprog *prog);

// RE stores its globals here...
struct {
	Reprog *prog;
	Renode *pstart, *pend;

	const char *source;
	unsigned int ncclass;
	unsigned int nsub;
	Renode *sub[MAXSUB];

	int lookahead;
	Rune yychar;
	Reclass *yycc;
	int yymin, yymax;

	const char *error;
	jmp_buf kaboom;
} g; 

#ifndef _MSC_VER
size_t strnlen_s(const char *s, size_t maxsize);
#endif

#ifndef _MSC_VER
size_t strncpy_s(const char *dest, size_t dest_size, const char *src, size_t src_count);
#endif

int strncmp_s(const char* dest, size_t dest_size, const char* src, size_t src_size, size_t count);

int s_sprintf(char * const dest, size_t dest_size, const char *format, size_t varg_total_size, ...);

size_t hexstr_to_bytes(const char* hexstr, size_t len, unsigned char* out, size_t out_size);

size_t bytes_to_hex(unsigned char* b_str, size_t b_str_len, unsigned char* out, size_t out_len);

void hex_print(uint8_t *buf, size_t size);

bool A(unsigned char *c_str, unsigned int do_throw=0);

void reverse(char s[]);

void itoa(uint128_t n, char s[]);

int print_uint128_t(uint128_t u128, uint128_t precision=0);

void assert_uint128_t(uint128_t left, uint128_t right);

unsigned char * Z(unsigned char *c_str, size_t from_size_of);

void PN(t_number no);

void delete_t_number(void *p);

void terminate_uid(void *uid, size_t buf_len);

bool is_whitespace(char ch);

void trim_ws(char* s);


#ifdef _MSC_VER
#define vscprintf _vscprintf
#endif

#ifdef __GNUC__
int vscprintf(const char *format, va_list ap);
#endif

#ifdef _MSC_VER
int vasprintf(char **strp, const char *format, va_list ap);
int asprintf(char **strp, const char *format, ...);
#endif

void sleep_for(long ms);

void test_log(const char* text);

char *file_get_contents(const char *file_path);

bool is_lfi(char *buf, size_t size);

unsigned int s_gets( char *str, size_t n );

bool re_match(const char *p_cstr_pattern, char *p_cstr_haystack);

bool is_hex(char *p_cstr);


struct t_linked_item {
    void *value;
    void *p_prev;
    void *p_next;
};

struct t_linked_info {
    unsigned int no;
    struct t_linked_item *p_list_start;
    struct t_linked_item *p_list_end;
};

void delete_list_item(struct t_linked_item *list_item);

struct t_linked_item * add_value_to_linked_list(struct t_linked_info *p_info, void *p_value);

struct t_linked_item *TREAD(struct t_linked_info *p_list_info, struct t_linked_item *p_list_item);

void remove_value_from_linked_list(
    struct t_linked_info *list, void *value
);

void remove_values_from_linked_list(
    struct t_linked_info *hay_list,
    struct t_linked_info *needle_list
);

void join_linked_lists(
    struct t_linked_info *list_a,
    struct t_linked_info *list_b
);

struct t_linked_item * linked_list_pop(struct t_linked_info *list);

void delete_linked_list(struct t_linked_info *p_allocations, void (*delete_list_value)(void *)=0);

struct t_linked_info *create_linked_list_info();

uint128_t count_digits(uint128_t no);

uint128_t EXP(uint128_t no, uint128_t i);

struct t_number safe_dec(struct t_number no, uint128_t precision);

uint128_t highest_precision(struct t_number left, struct t_number right);

enum e_logic_ops {
    GREATER_THAN = 0,
    GREATER_EQUALS = 1,
    LESS_THAN = 2,
    LESS_EQUALS = 3,
    BOTH_EQUALS = 4,
    NOT_EQUALS = 5,
    LOGIC_AND = 6,
    LOGIC_OR = 7
};

bool safe_logic(unsigned int op, struct t_number left, struct t_number right, uint128_t precision=1000);

uint128_t Min(uint128_t left, uint128_t right);

uint128_t Max(uint128_t left, uint128_t right);

struct t_number Min(struct t_number left, struct t_number right);

struct t_number Max(struct t_number left, struct t_number right);

struct t_number N(uint128_t value, uint128_t precision=1000);

struct t_number safe_mul(struct t_number left, struct t_number right);

struct t_number safe_add(struct t_number left, struct t_number right);

struct t_number safe_sub(struct t_number left, struct t_number right);

uint128_t GCD(uint128_t left, uint128_t right);

struct t_number safe_div(struct t_number left, struct t_number right);

struct t_number simplify_insignificant(struct t_number no);

struct t_number no_by_index(struct t_number no, uint128_t offset, uint128_t limit=0);

struct t_number round(struct t_number no, uint128_t precision);

struct t_number safe_math(
    struct t_number (*math_op)
        (struct t_number, struct t_number),
    struct t_number left, struct t_number right, uint128_t precision=1000);

struct t_dec {
    uint128_t whole;
    t_number dec;
};

uint128_t uint128_get_whole(struct t_number no);

uint128_t uint128_get_dec(struct t_number no);

struct t_number safe_mod(struct t_number left, struct t_number right, uint128_t precision=0);

t_number N(const char *s, uint128_t precision=0);

typedef void(*sm_enum_func)(const char *key, const char *value, const void *obj);

struct Pair {
    char *key;
    char *value;
};

struct Bucket {
    unsigned int count;
    Pair *pairs;
};

struct StrMap {
    unsigned int count;
    Bucket *buckets;
};

static Pair * get_pair(Bucket *bucket, const char *key);
static unsigned long map_hash(const char *str);

struct StrMap *sm_new(unsigned int capacity);

void sm_iter(const char *key, const char *value, const void *obj);

void sm_delete(StrMap *map);

size_t sm_get(const StrMap *map, const char *key, char *out_buf, unsigned int n_out_buf);

int sm_exists(const StrMap *map, const char *key);

size_t sm_put(StrMap *map, const char *key, const char *value);

size_t sm_get_count(const StrMap *map);

int sm_enum(const StrMap *map, sm_enum_func enum_func, const void *obj);

static Pair * get_pair(Bucket *bucket, const char *key);

static unsigned long map_hash(const char *str);

StrMap *map_create(unsigned int capacity);

void map_destroy(StrMap *p_map);

#define MAX_MEM_ADDRESS_DIGITS 20

size_t map_put(StrMap *p_map, const char *p_key, void *p_value);

void *map_get(StrMap *p_map, const char *p_key);

void *map_get_or_make(
    struct StrMap *p_map,
    char *k_key,
    void *(*new_func)(),
    size_t len=0,
    void *(*init_func)(void *)=0,
    unsigned int *obj_no=0
);



enum e_trade_action {BUY = 0, SELL = 1};

struct t_currency {
    struct t_number no;
    unsigned char code[10];
    struct t_number usd_ppc;
};

struct t_ppc {
    struct t_currency have;
    // struct t_currency usd;
};

struct t_trade {
    //unsigned int action;
    struct t_currency have;
    struct t_currency want;
    //struct t_currency total;
};

enum e_attestation_type {INTEL_ATTEST = 0, SAMSUNG_ATTEST = 1};

/*
//                                PKI------->   ...
// Samsung -> Root pub -> Attest. Root pub -> Container pub -> Input.
*
*  Intel -> Root pub -> Attest
*
*/

enum e_auth_type {
    CERT_PEM = 0,
    ECDSA_SECP256K1 = 1
};

struct t_auth {
    unsigned int type;
    unsigned char id[500];
    unsigned char id_hex[1001];
};

struct t_attestation {
    unsigned int type;

    // Contains root pub and root sig
    // signed by Samsung.
    unsigned char hex_blob[2000];

    // Deserialised root pub from the TEE
    // for easier validation.
    struct t_auth root_pub;
};

// From a TEE (Trusted Execution Environment.)
struct t_tee_proof {
    struct t_auth auth;
    unsigned char sig[100];
};

// Unspent input event.
struct t_deposit {
    struct t_currency currency;
    unsigned char pub_key[70];
    struct t_tee_proof tee_proof;
};

// Offer event.
struct t_offer {
    struct t_trade trade;
    struct t_attestation attestation;
    struct t_tee_proof tee_proof;
    unsigned int round;
    unsigned char hash[65];
};

struct t_match_info {
    unsigned int no;
    struct t_linked_info list;
    struct t_number sent_total;
};

// Show an overview for a currency account.
struct t_summary {
    //unsigned int no;
    struct t_number total;
    struct t_linked_info statements;
};

// Point to a summary based on currency name.
struct t_portfolio {
    unsigned int no;

    StrMap *by_currency;
};

// Point to a list of asset holdings based on account.
struct t_balances {
    //unsigned int no;

    struct t_portfolio available;
    struct t_portfolio matching;
    struct t_portfolio matched;
    struct t_portfolio converting;
};

struct t_account {
    struct t_portfolio credits;
    struct t_portfolio debits;
    struct t_balances balances;
};

struct t_state {
    uint8_t master_signer_pub[33];

    // First 32 bytes of seed = signer priv key.
    // Next 32 bytes = encryption priv key.
    uint8_t *p_master_seed;

    StrMap *accounts;

    unsigned int active_offers;
    struct t_offer offers[OFFERS_CAPACITY];

    unsigned int active_matches;

    // Doubly linked list of t_match.
    StrMap *matches;

    //map<char *, struct t_pending_matches> pending_matches;
};

void init_state(struct t_state *p_state);

enum e_round_type { ROUND_DOWN = 0, ROUND_UP = 1 };

void *init_empty(void *p);

void *new_summary();

enum t_json_expect {
	JSON_any = 0,
	JSON_non_start = 1,
	JSON_any_quotes = 2,
	JSON_any_then_close_name = 3,
	JSON_any_or_quotes = 4,
	JSON_colon_then_open_or_expr = 5,
	JSON_open_or_expr = 6,
	JSON_expr = 7,
	JSON_str_any_or_close = 8,
	JSON_any_or_end_expr = 9,
	JSON_close_or_comma_expr = 10,
	JSON_obj = 1000,
	JSON_list = 2000,
	JSON_left_tree = 3000
};

enum t_json_expr_type {
    JSON_no = 1,
    JSON_str = 2
};

struct t_json_expr
{
    unsigned int type;
    struct t_number *p_no;
    unsigned char *p_str;
    unsigned char *p_no_str;
};

struct t_json_tokens
{
	// Number of key value pairs in tree.
	unsigned int key_pair_no;

	// Used for state machine transitions.
	unsigned int expect;

	// If it's a JSON tree name is the key.
	unsigned char *name;

	// Indicate a found value ready to save.
    struct t_json_expr expr;

	// Type of tree: obj or list.
    unsigned int tree_type;
};

unsigned char *get_json_key_name(struct t_linked_info* linked_list);

void json_save_key_pair(struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info* linked_list);

struct t_json_tokens *pop_json_token_sub_tree(struct t_linked_info *linked_list, struct t_json_tokens *p_json_tokens);

unsigned int json_state_machine(unsigned char* p_ch, struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info *linked_list);

struct t_json_tokens *new_json_tokens();

StrMap* json_decode(const char* json_str, size_t json_str_len);

char *get_json_str(StrMap* p_json_map, const char *key, size_t str_len_limit=0, bool do_throw=false);

struct t_number *get_json_no(StrMap* p_json_map, const char *key, bool do_throw=false);

char *jstr_schema(StrMap* p_json_map, const char *key, const char *p_cstr_pattern=0, size_t str_len_limit=0, bool str_is_hex=0, bool return_bytes=0, bool do_throw=true);

struct t_number *jno_schema(
	StrMap* p_json_map, const char *key,
	char *p_cstr_exact_list_filter=0,
	struct t_number gte_filter=N("0"),
	struct t_number lte_filter=N("0"),
	unsigned int op=LOGIC_AND,
	bool do_throw=true
);

/* macros */
#define S(x, n) (((((uint32_t)(x)&0xFFFFFFFFUL)>>(uint32_t)((n)&31))|((uint32_t)(x)<<(uint32_t)((32-((n)&31))&31)))&0xFFFFFFFFUL)
#define R(x, n) (((x)&0xFFFFFFFFUL)>>(n))
#define Gamma0(x) (S(x, 7) ^ S(x, 18) ^ R(x, 3))
#define Gamma1(x) (S(x, 17) ^ S(x, 19) ^ R(x, 10))
#define RND(a,b,c,d,e,f,g,h,i) \
    t0 = h + (S(e, 6) ^ S(e, 11) ^ S(e, 25)) + (g ^ (e & (f ^ g))) + K[i] + W[i]; \
    t1 = (S(a, 2) ^ S(a, 13) ^ S(a, 22)) + (((a | b) & c) | (a & b)); \
    d += t0; \
    h  = t0 + t1;
#define STORE32H(x, y) \
    (y)[0] = (unsigned char)(((x)>>24)&255); (y)[1] = (unsigned char)(((x)>>16)&255); \
    (y)[2] = (unsigned char)(((x)>>8)&255); (y)[3] = (unsigned char)((x)&255);
#define LOAD32H(x, y) \
    x = ((uint32_t)((y)[0]&255)<<24)|((uint32_t)((y)[1]&255)<<16)|((uint32_t)((y)[2]&255)<<8)|((uint32_t)((y)[3]&255));
#define STORE64H(x, y) \
    (y)[0] = (unsigned char)(((x)>>56)&255); (y)[1] = (unsigned char)(((x)>>48)&255); \
    (y)[2] = (unsigned char)(((x)>>40)&255); (y)[3] = (unsigned char)(((x)>>32)&255); \
    (y)[4] = (unsigned char)(((x)>>24)&255); (y)[5] = (unsigned char)(((x)>>16)&255); \
    (y)[6] = (unsigned char)(((x)>>8)&255); (y)[7] = (unsigned char)((x)&255);
#define SHA256_COMPRESS(buff) \
    for (i = 0; i < 8; i++) S[i] = sha256_state[i]; \
    for (i = 0; i < 16; i++) LOAD32H(W[i], buff + (4*i)); \
    for (i = 16; i < 64; i++) W[i] = Gamma1(W[i-2]) + W[i-7] + Gamma0(W[i-15]) + W[i-16]; \
    for (i = 0; i < 64; i++) { \
        RND(S[0],S[1],S[2],S[3],S[4],S[5],S[6],S[7],i); \
        t = S[7]; S[7] = S[6]; S[6] = S[5]; S[5] = S[4]; \
        S[4] = S[3]; S[3] = S[2]; S[2] = S[1]; S[1] = S[0]; S[0] = t; \
    } \
    for (i = 0; i < 8; i++) sha256_state[i] = sha256_state[i] + S[i];

int sha256(unsigned char out[32], const unsigned char* in, size_t len);

#include <random>

signed int rand_chr();

unsigned int rand_bytes(unsigned char *p, unsigned int no);

#ifndef RAND_PLATFORM_INDEPENDENT

uint32_t random32(void);

#endif

// C11's bounds-checking interface.
#if defined(__STDC_LIB_EXT1__)
#define HAVE_MEMSET_S 1
#endif

// GNU C Library version 2.25 or later.
#if defined(__GLIBC__) && \
    (__GLIBC__ > 2 || (__GLIBC__ == 2 && __GLIBC_MINOR__ >= 25))
#define HAVE_EXPLICIT_BZERO 1
#endif

// Newlib
#if defined(__NEWLIB__)
#define HAVE_EXPLICIT_BZERO 1
#endif

// FreeBSD version 11.0 or later.
#if defined(__FreeBSD__) && __FreeBSD_version >= 1100037
#define HAVE_EXPLICIT_BZERO 1
#endif

// OpenBSD version 5.5 or later.
#if defined(__OpenBSD__) && OpenBSD >= 201405
#define HAVE_EXPLICIT_BZERO 1
#endif

// NetBSD version 7.2 or later.
#if defined(__NetBSD__) && __NetBSD_Version__ >= 702000000
#define HAVE_EXPLICIT_MEMSET 1
#endif

// Adapted from
// https://github.com/jedisct1/libsodium/blob/1647f0d53ae0e370378a9195477e3df0a792408f/src/libsodium/sodium/utils.c#L102-L130





// bignum256 are 256 bits stored as 8*30 bit + 1*16 bit
// val[0] are lowest 30 bits, val[8] highest 16 bits
typedef struct {
  uint32_t val[9];
} bignum256;

 void bn_addi(bignum256 *a, uint32_t b);

 void bn_add(bignum256 *a, const bignum256 *b);

 void bn_subi(bignum256 *a, uint32_t b, const bignum256 *prime);

void bn_zero(bignum256 *a);

 void bn_divmod1000(bignum256 *a, uint32_t *r);

 #define DIGITS 78  // log10(2 ^ 256)

unsigned int bn_digitcount(const bignum256 *a);

 int bn_is_zero(const bignum256 *a);

 size_t bn_format(const bignum256 *amnt, const char *prefix, const char *suffix,
                  unsigned int decimals, int exponent, bool trailing, char *out,
                  size_t outlen);

void bn_read_uint64(uint64_t in_number, bignum256 *out_number);

static inline uint32_t bn_write_uint32(const bignum256 *in_number);

 static inline uint64_t bn_write_uint64(const bignum256 *in_number);

 static inline void bn_copy(const bignum256 *a, bignum256 *b);

 static inline int bn_is_even(const bignum256 *a);

 static inline int bn_is_odd(const bignum256 *a);

 static inline size_t bn_format_uint64(uint64_t amount, const char *prefix,
                                       const char *suffix, unsigned int decimals,
                                       int exponent, bool trailing, char *out,
                                       size_t outlen);

uint32_t read_be(const uint8_t *data);

void write_be(uint8_t *data, uint32_t x);

uint32_t read_le(const uint8_t *data);

void write_le(uint8_t *data, uint32_t x);

void bn_read_be(const uint8_t *in_number, bignum256 *out_number);

void bn_write_be(const bignum256 *in_number, uint8_t *out_number);

void bn_read_le(const uint8_t *in_number, bignum256 *out_number);

void bn_write_le(const bignum256 *in_number, uint8_t *out_number);

void bn_read_uint32(uint32_t in_number, bignum256 *out_number);

int bn_bitcount(const bignum256 *a);

void bn_one(bignum256 *a);

int bn_is_less(const bignum256 *a, const bignum256 *b);

int bn_is_equal(const bignum256 *a, const bignum256 *b);

void bn_cmov(bignum256 *res, int cond, const bignum256 *truecase,
             const bignum256 *falsecase);

void bn_lshift(bignum256 *a);

void bn_rshift(bignum256 *a);

void bn_setbit(bignum256 *a, uint8_t bit);

void bn_clearbit(bignum256 *a, uint8_t bit);

uint32_t bn_testbit(bignum256 *a, uint8_t bit);

void bn_xor(bignum256 *a, const bignum256 *b, const bignum256 *c);

void bn_mult_half(bignum256 *x, const bignum256 *prime);

void bn_fast_mod(bignum256 *x, const bignum256 *prime);

void bn_mult_k(bignum256 *x, uint8_t k, const bignum256 *prime);

void bn_subtract(const bignum256 *a, const bignum256 *b, bignum256 *res);

void bn_mod(bignum256 *x, const bignum256 *prime);

void bn_multiply_long(const bignum256 *k, const bignum256 *x,
                      uint32_t res[18]);

void bn_multiply_reduce_step(uint32_t res[18], const bignum256 *prime,
                             uint32_t i);

void bn_multiply_reduce(bignum256 *x, uint32_t res[18],
                                                     const bignum256 *prime);

void bn_multiply(const bignum256 *k, bignum256 *x, const bignum256 *prime);

void bn_sqrt(bignum256 *x, const bignum256 *prime);

void bn_inverse(bignum256 *x, const bignum256 *prime);

void bn_inverse(bignum256 *x, const bignum256 *prime);

void bn_normalize(bignum256 *a);

void bn_addmod(bignum256 *a, const bignum256 *b, const bignum256 *prime);

void bn_subtractmod(const bignum256 *a, const bignum256 *b, bignum256 *res,
                    const bignum256 *prime);

void bn_divmod58(bignum256 *a, uint32_t *r);

/**
 * Copyright (c) 2000-2001 Aaron D. Gifford
 * Copyright (c) 2013-2014 Pavol Rusnak
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTOR(S) ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTOR(S) BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */




#define   SHA1_BLOCK_LENGTH		64
#define   SHA1_DIGEST_LENGTH		20
#define   SHA1_DIGEST_STRING_LENGTH	(SHA1_DIGEST_LENGTH   * 2 + 1)
#define SHA256_BLOCK_LENGTH		64
#define SHA256_DIGEST_LENGTH		32
#define SHA256_DIGEST_STRING_LENGTH	(SHA256_DIGEST_LENGTH * 2 + 1)
#define SHA512_BLOCK_LENGTH		128
#define SHA512_DIGEST_LENGTH		64
#define SHA512_DIGEST_STRING_LENGTH	(SHA512_DIGEST_LENGTH * 2 + 1)

typedef struct _SHA1_CTX {
	uint32_t	state[5];
	uint64_t	bitcount;
	uint32_t	buffer[SHA1_BLOCK_LENGTH/sizeof(uint32_t)];
} SHA1_CTX;
typedef struct _SHA256_CTX {
	uint32_t	state[8];
	uint64_t	bitcount;
	uint32_t	buffer[SHA256_BLOCK_LENGTH/sizeof(uint32_t)];
} SHA256_CTX;
typedef struct _SHA512_CTX {
	uint64_t	state[8];
	uint64_t	bitcount[2];
	uint64_t	buffer[SHA512_BLOCK_LENGTH/sizeof(uint64_t)];
} SHA512_CTX;

/*** ENDIAN REVERSAL MACROS *******************************************/
#ifndef LITTLE_ENDIAN
#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN    4321
#endif

#ifndef BYTE_ORDER
#define BYTE_ORDER LITTLE_ENDIAN
#endif

#if BYTE_ORDER == LITTLE_ENDIAN
#define REVERSE32(w,x)	{ \
	uint32_t tmp = (uint32_t) (w); \
	tmp = (tmp >> 16) | (tmp << 16); \
	(x) = (uint32_t) (((tmp & 0xff00ff00UL) >> 8) | ((tmp & 0x00ff00ffUL) << 8)); \
}
#define REVERSE64(w,x)	{ \
	uint64_t tmp = (w); \
	tmp = (tmp >> 32) | (tmp << 32); \
	tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | \
	      ((tmp & 0x00ff00ff00ff00ffULL) << 8); \
	(x) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | \
	      ((tmp & 0x0000ffff0000ffffULL) << 16); \
}
#endif /* BYTE_ORDER == LITTLE_ENDIAN */

extern const uint32_t sha256_initial_hash_value[8];
extern const uint64_t sha512_initial_hash_value[8];

void sha1_Transform(const uint32_t* state_in, const uint32_t* data, uint32_t* state_out);
void sha1_Init(SHA1_CTX *);
void sha1_Update(SHA1_CTX*, const uint8_t*, size_t);
void sha1_Final(SHA1_CTX*, uint8_t[SHA1_DIGEST_LENGTH]);
char* sha1_End(SHA1_CTX*, char[SHA1_DIGEST_STRING_LENGTH]);
void sha1_Raw(const uint8_t*, size_t, uint8_t[SHA1_DIGEST_LENGTH]);
char* sha1_Data(const uint8_t*, size_t, char[SHA1_DIGEST_STRING_LENGTH]);

void sha256_Transform(const uint32_t* state_in, const uint32_t* data, uint32_t* state_out);
void sha256_Init(SHA256_CTX *);
void sha256_Update(SHA256_CTX*, const uint8_t*, size_t);
void sha256_Final(SHA256_CTX*, uint8_t[SHA256_DIGEST_LENGTH]);
char* sha256_End(SHA256_CTX*, char[SHA256_DIGEST_STRING_LENGTH]);
void sha256_Raw(const uint8_t*, size_t, uint8_t[SHA256_DIGEST_LENGTH]);
char* sha256_Data(const uint8_t*, size_t, char[SHA256_DIGEST_STRING_LENGTH]);

void sha512_Transform(const uint64_t* state_in, const uint64_t* data, uint64_t* state_out);
void sha512_Init(SHA512_CTX*);
void sha512_Update(SHA512_CTX*, const uint8_t*, size_t);
void sha512_Final(SHA512_CTX*, uint8_t[SHA512_DIGEST_LENGTH]);
char* sha512_End(SHA512_CTX*, char[SHA512_DIGEST_STRING_LENGTH]);
void sha512_Raw(const uint8_t*, size_t, uint8_t[SHA512_DIGEST_LENGTH]);
char* sha512_Data(const uint8_t*, size_t, char[SHA512_DIGEST_STRING_LENGTH]);

#define SHA256_BLOCK_LENGTH   64

typedef struct _HMAC_SHA256_CTX {
  uint8_t o_key_pad[SHA256_BLOCK_LENGTH];
  SHA256_CTX ctx;
} HMAC_SHA256_CTX;

typedef struct _HMAC_SHA512_CTX {
  uint8_t o_key_pad[SHA512_BLOCK_LENGTH];
  SHA512_CTX ctx;
} HMAC_SHA512_CTX;

void hmac_sha256_Init(HMAC_SHA256_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen);

void hmac_sha256_Update(HMAC_SHA256_CTX *hctx, const uint8_t *msg,
                                              const uint32_t msglen);

void hmac_sha256_Final(HMAC_SHA256_CTX *hctx, uint8_t *hmac);

void hmac_sha256(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);

void hmac_sha256_prepare(const uint8_t *key, const uint32_t keylen,
                                          uint32_t *opad_digest, uint32_t *ipad_digest);

void hmac_sha512_Init(HMAC_SHA512_CTX *hctx, const uint8_t *key,
                                                                const uint32_t keylen);

void hmac_sha512_Update(HMAC_SHA512_CTX *hctx, const uint8_t *msg, const uint32_t msglen);

void hmac_sha512_Final(HMAC_SHA512_CTX *hctx, uint8_t *hmac);

void hmac_sha512(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);

void hmac_sha512_prepare(const uint8_t *key, const uint32_t keylen, uint64_t *opad_digest, uint64_t *ipad_digest);

typedef struct _HMAC_DRBG_CTX {
  uint32_t odig[SHA256_DIGEST_LENGTH / sizeof(uint32_t)];
  uint32_t idig[SHA256_DIGEST_LENGTH / sizeof(uint32_t)];
  uint32_t v[SHA256_BLOCK_LENGTH / sizeof(uint32_t)];
} HMAC_DRBG_CTX;

static void update_k(HMAC_DRBG_CTX *ctx, uint8_t domain, const uint8_t *data1,
                     size_t len1, const uint8_t *data2, size_t len2);

static void update_v(HMAC_DRBG_CTX *ctx);

void hmac_drbg_reseed(HMAC_DRBG_CTX *ctx, const uint8_t *entropy, size_t len,
                      const uint8_t *addin, size_t addin_len);

void hmac_drbg_init(HMAC_DRBG_CTX *ctx, const uint8_t *entropy,
                                          size_t entropy_len, const uint8_t *nonce,
                                          size_t nonce_len);

void hmac_drbg_generate(HMAC_DRBG_CTX *ctx, uint8_t *buf, size_t len);

// rfc6979 pseudo random number generator state
typedef HMAC_DRBG_CTX rfc6979_state;

void init_rfc6979(const uint8_t *priv_key, const uint8_t *hash,
                  rfc6979_state *state);

void generate_rfc6979(uint8_t rnd[32], rfc6979_state *state);

void generate_k_rfc6979(bignum256 *k, rfc6979_state *state);

// curve point x and y
typedef struct {
  bignum256 x, y;
} curve_point;

typedef struct {
  bignum256 prime;       // prime order of the finite field
  curve_point G;         // initial curve point
  bignum256 order;       // order of G
  bignum256 order_half;  // order of G divided by 2
  int a;                 // coefficient 'a' of the elliptic curve
  bignum256 b;           // coefficient 'b' of the elliptic curve

#if USE_PRECOMPUTED_CP
  const curve_point cp[64][8];
#endif

} ecdsa_curve;


const ecdsa_curve secp256k1 = {
    /* .prime */ {/*.val =*/{0x3ffffc2f, 0x3ffffffb, 0x3fffffff, 0x3fffffff,
                             0x3fffffff, 0x3fffffff, 0x3fffffff, 0x3fffffff,
                             0xffff}},

    /* G */
    {/*.x =*/{/*.val =*/{0x16f81798, 0x27ca056c, 0x1ce28d95, 0x26ff36cb,
                         0x70b0702, 0x18a573a, 0xbbac55a, 0x199fbe77, 0x79be}},
     /*.y =*/{/*.val =*/{0x3b10d4b8, 0x311f423f, 0x28554199, 0x5ed1229,
                         0x1108a8fd, 0x13eff038, 0x3c4655da, 0x369dc9a8,
                         0x483a}}},

    /* order */
    {/*.val =*/{0x10364141, 0x3f497a33, 0x348a03bb, 0x2bb739ab, 0x3ffffeba,
                0x3fffffff, 0x3fffffff, 0x3fffffff, 0xffff}},

    /* order_half */
    {/*.val =*/{0x281b20a0, 0x3fa4bd19, 0x3a4501dd, 0x15db9cd5, 0x3fffff5d,
                0x3fffffff, 0x3fffffff, 0x3fffffff, 0x7fff}},

    /* a */ 0,

    /* b */ {/*.val =*/{7}}

#if USE_PRECOMPUTED_CP
    ,
    /* cp */
    {
  {
    /*  1*16^0*G: */
    {{{0x16f81798, 0x27ca056c, 0x1ce28d95, 0x26ff36cb, 0x070b0702, 0x018a573a, 0x0bbac55a, 0x199fbe77, 0x79be}},
     {{0x3b10d4b8, 0x311f423f, 0x28554199, 0x05ed1229, 0x1108a8fd, 0x13eff038, 0x3c4655da, 0x369dc9a8, 0x483a}}},
    /*  3*16^0*G: */
    {{{0x3ce036f9, 0x1807c44e, 0x36f99b08, 0x0c721160, 0x1d5229b5, 0x113e17e2, 0x0c310493, 0x22806496, 0xf930}},
     {{0x04b8e672, 0x32e7f5d6, 0x0c2231b6, 0x002a664d, 0x37f35665, 0x0cdf98a8, 0x1e8140fe, 0x1ec3d8cb, 0x388f}}},
    /*  5*16^0*G: */
    {{{0x3240efe4, 0x2ea355a6, 0x0619ab7c, 0x22e12f77, 0x1c5128e8, 0x129c9429, 0x3209355b, 0x37934681, 0x2f8b}},
     {{0x26ac62d6, 0x32a1f4ea, 0x30d6840d, 0x2209c6ea, 0x09c426f7, 0x2ea7769b, 0x1e3d6d4d, 0x08898db9, 0xd8ac}}},
    /*  7*16^0*G: */
    {{{0x0ac4f9bc, 0x24af77b7, 0x330e39ce, 0x1066df80, 0x2a7a0e3d, 0x23cd97cb, 0x1b4eaa39, 0x3c191b97, 0x5cbd}},
     {{0x087264da, 0x142098a0, 0x3fde7b5a, 0x04f42e04, 0x1a54dba8, 0x1e35b618, 0x15960a31, 0x32902e89, 0x6aeb}}},
    /*  9*16^0*G: */
    {{{0x3c27ccbe, 0x0d7c4437, 0x057e714c, 0x25e5a5d3, 0x159abde0, 0x345e2a7d, 0x3f65309a, 0x2138bc31, 0xacd4}},
     {{0x064f9c37, 0x173098ab, 0x35f8e0f0, 0x3622290d, 0x3b61e9ad, 0x2025c5d8, 0x3d9fd643, 0x22486c29, 0xcc33}}},
    /* 11*16^0*G: */
    {{{0x1da008cb, 0x2fb05e25, 0x1c17891b, 0x126602f9, 0x065aac56, 0x1091adc3, 0x1411e5ef, 0x39fe162a, 0x774a}},
     {{0x0953c61b, 0x0075d327, 0x3f9d6a83, 0x0b6c78b7, 0x37b36537, 0x0f755b5e, 0x35e19024, 0x280cbada, 0xd984}}},
    /* 13*16^0*G: */
    {{{0x19405aa8, 0x3bb77e3c, 0x10e58cdd, 0x1d7ef198, 0x348651b0, 0x0748170d, 0x1288bc7d, 0x1cf0b65d, 0xf287}},
     {{0x1b03ed81, 0x26d72d4b, 0x21fa91f2, 0x0681b694, 0x0daf473a, 0x084bad97, 0x00a89758, 0x240ba362, 0x0ab0}}},
    /* 15*16^0*G: */
    {{{0x227e080e, 0x12b6f3e3, 0x085f79e4, 0x39651bcf, 0x1ff41131, 0x196b8c25, 0x3ea965a4, 0x1353df50, 0xd792}},
     {{0x36a26b58, 0x1413727f, 0x096d3a5c, 0x102bcaf6, 0x0c6defea, 0x10bb08a3, 0x072a6838, 0x0a1caa1b, 0x581e}}}
  },
  {
    /*  1*16^1*G: */
    {{{0x2a6dec0a, 0x113ba278, 0x07a5ae9c, 0x28c4da6e, 0x023e97b2, 0x06aaf087, 0x29ec5301, 0x33a4ed67, 0xe60f}},
     {{0x29616821, 0x07ccb339, 0x0d23f0be, 0x25a24791, 0x39371012, 0x267cd3d5, 0x195929db, 0x141ce679, 0xf7e3}}},
    /*  3*16^1*G: */
    {{{0x1118e5c3, 0x2f61c2a8, 0x12bebc19, 0x15e6c9d1, 0x265b4bfc, 0x0595bbd3, 0x1307db44, 0x0cd76591, 0x6eca}},
     {{0x05a08668, 0x2628bde0, 0x3f8ec344, 0x125a8e8e, 0x3875a03a, 0x3d5e41d2, 0x20710592, 0x08ed5e9e, 0xd501}}},
    /*  5*16^1*G: */
    {{{0x0f87f62e, 0x3b34c785, 0x37161270, 0x39b98e18, 0x0659f010, 0x31d13b4d, 0x390ec0d7, 0x0eefbc6f, 0xe962}},
     {{0x244ee737, 0x0c04fabe, 0x168844e5, 0x1810f277, 0x1aa929fe, 0x3a54ea3b, 0x299e9e0f, 0x1d0ed2f0, 0x38a9}}},
    /*  7*16^1*G: */
    {{{0x2a8d733c, 0x2c2ab7e0, 0x2fca8f9e, 0x309d2fd8, 0x00d682ff, 0x128dbc82, 0x21dba088, 0x375cf945, 0xbc82}},
     {{0x347797f0, 0x39e18413, 0x33897301, 0x24e82eb9, 0x1f02dfae, 0x26d2fdc6, 0x31cac54a, 0x230e8112, 0xe5f2}}},
    /*  9*16^1*G: */
    {{{0x1fbc7671, 0x1fbf88c5, 0x2858e32d, 0x0fc6f214, 0x18f49074, 0x0a47385e, 0x17211d20, 0x049231d9, 0x8e3d}},
     {{0x18717dec, 0x3bc77190, 0x23e144a7, 0x0d4aeaa9, 0x13e90eb9, 0x1203864e, 0x3cb81f64, 0x123843b3, 0x099a}}},
    /* 11*16^1*G: */
    {{{0x3eb31db2, 0x0ca1d0ca, 0x0f506a0f, 0x32ba09e2, 0x08a2b68f, 0x2864fb42, 0x0a498896, 0x246a888d, 0x78a8}},
     {{0x39fa4343, 0x01a7588e, 0x000b82d3, 0x0de6f376, 0x302df654, 0x17c9549c, 0x035cbfcf, 0x28d6fad4, 0x6912}}},
    /* 13*16^1*G: */
    {{{0x0db0e595, 0x14d23dde, 0x3a082bb6, 0x058f2e7e, 0x2076eba7, 0x38dd9605, 0x31b17d7c, 0x1e061576, 0x7d86}},
     {{0x3c733de8, 0x265478ea, 0x225d5329, 0x0de11383, 0x0f883829, 0x18b8afb5, 0x2f8772e5, 0x26b7fb21, 0xe2b9}}},
    /* 15*16^1*G: */
    {{{0x16060dfc, 0x023fbe14, 0x05e6a2a0, 0x1517e108, 0x1ab08676, 0x252e7710, 0x02ac8484, 0x0c43c016, 0xddc5}},
     {{0x27820ca8, 0x2d7e2adb, 0x3d04730f, 0x36ebf1aa, 0x0f0e9041, 0x06adb732, 0x19692019, 0x0bcebc83, 0xba0d}}}
  },
  {
    /*  1*16^2*G: */
    {{{0x15f51508, 0x191b88ff, 0x1ac1ca10, 0x30e72af5, 0x2de238d8, 0x29b8f85c, 0x209d9ea2, 0x098c84b1, 0x8282}},
     {{0x36e26caf, 0x0c6dbabf, 0x37b17bed, 0x3584eb0b, 0x360ace62, 0x095ba0c2, 0x3dfe45e8, 0x2a026155, 0x11f8}}},
    /*  3*16^2*G: */
    {{{0x257e8dfa, 0x33f032e7, 0x3c7e184f, 0x20246468, 0x298ca009, 0x28c3e2b2, 0x19c4c0d9, 0x33cbfc1e, 0x8262}},
     {{0x3bac376a, 0x173fe363, 0x314c4783, 0x2dbb4cca, 0x334f3457, 0x3b88bb16, 0x09e4e66f, 0x25788244, 0x83fd}}},
    /*  5*16^2*G: */
    {{{0x026bdb6f, 0x014b922c, 0x3734b949, 0x2906f51e, 0x299c877c, 0x0416c933, 0x0ddd5168, 0x1722c768, 0x1982}},
     {{0x049cfc9b, 0x177dc213, 0x0f6d3a6b, 0x3a7bb323, 0x359f6ceb, 0x09873253, 0x0878f320, 0x0c43c353, 0x6294}}},
    /*  7*16^2*G: */
    {{{0x3d82824c, 0x03b42548, 0x21534e65, 0x29638d17, 0x02999edf, 0x17d5bb1b, 0x0191443c, 0x361b0458, 0x6f12}},
     {{0x06eb34d0, 0x15e70d20, 0x054bc5b8, 0x07249042, 0x22376939, 0x2653cff5, 0x3bfa0875, 0x3dfd12ac, 0x5c4f}}},
    /*  9*16^2*G: */
    {{{0x1b453629, 0x1db7700b, 0x359e6030, 0x33f73703, 0x3abef645, 0x189c5a88, 0x2aa5d142, 0x231be682, 0x203a}},
     {{0x3ff89f84, 0x25c71e14, 0x1285ed45, 0x1b7ac971, 0x01061268, 0x31db457d, 0x1d9b936c, 0x02d4f797, 0x3b0f}}},
    /* 11*16^2*G: */
    {{{0x246c7ecb, 0x20c4c377, 0x1bb4ce97, 0x0ebb4ff9, 0x26e1ec9d, 0x3bdccd21, 0x34181c81, 0x32bacf40, 0x6e2a}},
     {{0x2ebc8720, 0x1124807b, 0x367512c8, 0x31c1ae46, 0x3b643afa, 0x03136bc3, 0x3ee149d8, 0x2919e5fb, 0x9e61}}},
    /* 13*16^2*G: */
    {{{0x30a4147e, 0x2dc063cf, 0x375f201e, 0x11f762fd, 0x090a5827, 0x05c5fa29, 0x1156baf6, 0x0124ba7a, 0xd5a7}},
     {{0x33fb65ff, 0x392cf2e0, 0x167f57f8, 0x3136611e, 0x1e0532f4, 0x242641d9, 0x389c6fc4, 0x09bd76ea, 0x9db5}}},
    /* 15*16^2*G: */
    {{{0x18edcec6, 0x3b76d1af, 0x3634f454, 0x018730b4, 0x2cdac6a1, 0x0fbf18c0, 0x18ba8052, 0x0466aaf8, 0x38c5}},
     {{0x1933db08, 0x15b82fec, 0x35530a64, 0x285b208a, 0x1f282f28, 0x32cb689d, 0x1732a668, 0x3748a176, 0xe649}}}
  },
  {
    /*  1*16^3*G: */
    {{{0x11e5b739, 0x0ff396d5, 0x12222ed7, 0x2e4e0cff, 0x3c846de0, 0x26731b1b, 0x3865a72f, 0x0567dca2, 0x175e}},
     {{0x29fed695, 0x3be9bffb, 0x124345c6, 0x2d6556b7, 0x371f5eac, 0x3e5e947f, 0x079eba4e, 0x1b83678f, 0xd350}}},
    /*  3*16^3*G: */
    {{{0x05041216, 0x16dfe3c7, 0x02b836a6, 0x1ccd7da1, 0x2fed523f, 0x2d67bf70, 0x3acf4128, 0x0c5ec87d, 0xda75}},
     {{0x2e708572, 0x2bb4ca61, 0x37acedad, 0x2ab01eb9, 0x2d7fc6e9, 0x27886cd0, 0x2d5f0df1, 0x2811afdc, 0x73f8}}},
    /*  5*16^3*G: */
    {{{0x2465a930, 0x0050f9c7, 0x31352fdb, 0x21fc705a, 0x02eb1e25, 0x0f16312a, 0x349d7057, 0x316d23a5, 0x1c71}},
     {{0x034638b5, 0x361cfdb3, 0x3174d471, 0x0d178fed, 0x0bb68c79, 0x0fc7ca09, 0x1fa0c271, 0x30cd3a3d, 0x4a91}}},
    /*  7*16^3*G: */
    {{{0x3adb6ee7, 0x0c636b96, 0x344a077e, 0x143750c9, 0x1b4c9c78, 0x3a0dea42, 0x1a566936, 0x12bf07cc, 0xd84e}},
     {{0x142ebed2, 0x0b555b9b, 0x2a3e6498, 0x362b25d2, 0x25de4dfd, 0x0e3563d5, 0x379ce12a, 0x20269f1e, 0xe525}}},
    /*  9*16^3*G: */
    {{{0x249e6d10, 0x253a7b3e, 0x2ac99d23, 0x02b7fceb, 0x3f6ed3f6, 0x08ae4a17, 0x2814d41b, 0x1112f799, 0xf3d4}},
     {{0x1347da3f, 0x280e3301, 0x29d6c630, 0x06b69433, 0x0a4b5bfc, 0x2e56b066, 0x0163d4ba, 0x0937e9bc, 0x0a43}}},
    /* 11*16^3*G: */
    {{{0x29d33a07, 0x232cd01b, 0x239bcab4, 0x1cbb822a, 0x3df4044e, 0x21548336, 0x01d89f90, 0x194b2767, 0xae30}},
     {{0x20a0b2a6, 0x121c303d, 0x3d7e95c7, 0x270dfd77, 0x38d5cf1c, 0x339f4cf6, 0x3fe57efc, 0x3670e358, 0x6cb9}}},
    /* 13*16^3*G: */
    {{{0x0c28caca, 0x165952e4, 0x08281da7, 0x1a71eef3, 0x388c9a18, 0x05f9d60c, 0x1e1c815e, 0x06ca96f5, 0xd8dc}},
     {{0x23b3ec7a, 0x36d9dba8, 0x08128f6c, 0x0c574b3b, 0x247d947d, 0x36369080, 0x2c7d58c6, 0x02b649f3, 0x8cec}}},
    /* 15*16^3*G: */
    {{{0x3bc4416f, 0x2487ed98, 0x30b04028, 0x2bbf48fc, 0x32f31da7, 0x1096a340, 0x04eccd59, 0x38a4b17e, 0x2749}},
     {{0x3c6bbd8e, 0x3a62f78b, 0x2e961057, 0x27a7ed97, 0x0adb3ef5, 0x3652643f, 0x32bc4403, 0x0b538dd9, 0x50cc}}}
  },
  {
    /*  1*16^4*G: */
    {{{0x03ff4640, 0x09aeb63e, 0x1552ffe5, 0x11071f95, 0x262ee053, 0x3ab016d8, 0x00c9c99c, 0x243511ec, 0x363d}},
     {{0x3bee9de9, 0x0800f1fc, 0x0199ecb6, 0x2e6a2402, 0x33363145, 0x2d114e5f, 0x32221953, 0x1ceb7f1c, 0x04e2}}},
    /*  3*16^4*G: */
    {{{0x36e55dc8, 0x2e24485b, 0x2ca04394, 0x3e56adba, 0x1094426f, 0x12910301, 0x1ffb2ba8, 0x1011e431, 0x4431}},
     {{0x1be323b3, 0x076512bb, 0x2aa2e503, 0x1a8a6de7, 0x02fed7a6, 0x260dfd59, 0x366f8fe9, 0x3050b994, 0x96b0}}},
    /*  5*16^4*G: */
    {{{0x301b23a8, 0x3fa52175, 0x287ee0ad, 0x1edf51c2, 0x21089dab, 0x090f56e4, 0x0a87c126, 0x3fa3619b, 0x9e22}},
     {{0x0884edae, 0x1e904f14, 0x3511cecf, 0x3df2527e, 0x1c1533c0, 0x3cfc0826, 0x22d10177, 0x3c3a7284, 0xfd2f}}},
    /*  7*16^4*G: */
    {{{0x071a70e4, 0x35d022fc, 0x35cf475d, 0x17b947d7, 0x05306dcd, 0x35a7991c, 0x22a8d2ed, 0x3db540f3, 0x508d}},
     {{0x29950984, 0x3cb96fdc, 0x28aadfed, 0x300c8a3b, 0x3e49c54e, 0x0c12a9cc, 0x3c42d777, 0x10e6e4ce, 0x154c}}},
    /*  9*16^4*G: */
    {{{0x0e1abe11, 0x3abf69db, 0x1cb220f6, 0x2e487096, 0x0125b2da, 0x37d6064c, 0x09763338, 0x3fe11544, 0xe3db}},
     {{0x1fa8de63, 0x2d26b552, 0x06b5c414, 0x325f640f, 0x0a8ef3d3, 0x23e9d76e, 0x01421643, 0x3e42668d, 0x06f2}}},
    /* 11*16^4*G: */
    {{{0x03593449, 0x33c6c8d8, 0x02a46ffd, 0x06df04b9, 0x3d014af6, 0x36704e81, 0x2940d878, 0x381931f7, 0x19ac}},
     {{0x2df83631, 0x29052e4e, 0x084068a3, 0x1c42e7d0, 0x002c46ac, 0x2f5ce765, 0x0a333bfe, 0x2480d49a, 0xe379}}},
    /* 13*16^4*G: */
    {{{0x0cba6b63, 0x38fa624b, 0x10b3bb5e, 0x03f99d3f, 0x288e310a, 0x30cc8a3a, 0x07daa108, 0x033b083e, 0xd874}},
     {{0x2934c5f3, 0x3ba8db01, 0x381694ab, 0x0413d730, 0x3ac37d40, 0x29bba640, 0x132bf378, 0x304cf1ae, 0x6472}}},
    /* 15*16^4*G: */
    {{{0x1b3ec038, 0x0653fcb0, 0x20c6b276, 0x3f545ab9, 0x290a50d9, 0x20f9d8bc, 0x06083648, 0x0cce46d4, 0x58ac}},
     {{0x10246279, 0x1baa8fc4, 0x34fbbca1, 0x06410f02, 0x11fe9702, 0x1e4927a6, 0x092d9787, 0x35c1b557, 0x9163}}}
  },
  {
    /*  1*16^5*G: */
    {{{0x1ffdf80c, 0x27de6957, 0x15bcd1b6, 0x3929e068, 0x05638843, 0x0912d6dd, 0x3c2be8c6, 0x17c5977c, 0x8b4b}},
     {{0x1fd4fd36, 0x0fbfc319, 0x162ee56b, 0x38cd9518, 0x30da04f9, 0x2f5e04ea, 0x308b4b3f, 0x029bda34, 0x4aad}}},
    /*  3*16^5*G: */
    {{{0x355812dd, 0x028a960b, 0x12d30e2a, 0x1119c8d5, 0x18f78e3d, 0x2afb5b01, 0x3352f0b6, 0x2f5ea4bf, 0x7029}},
     {{0x1a2d2927, 0x087319ac, 0x3b2c73c7, 0x36ba1090, 0x0683ac47, 0x19512b8c, 0x0b3d27dd, 0x3eb6bf7a, 0xb0ee}}},
    /*  5*16^5*G: */
    {{{0x3d486ed1, 0x27395a0e, 0x1565b6a4, 0x116fae92, 0x0f756057, 0x35042763, 0x25c99009, 0x3b72bab9, 0x9ccf}},
     {{0x35e95d8d, 0x3db567b5, 0x1592aa24, 0x0859d65a, 0x0b341124, 0x08920480, 0x232cfb61, 0x135c4f5a, 0x7c2f}}},
    /*  7*16^5*G: */
    {{{0x1bd0eaca, 0x081ac69d, 0x22d4ab7a, 0x31d15dae, 0x24df19d0, 0x23f78cf2, 0x1414335a, 0x12e1d8d0, 0xcd9a}},
     {{0x2bff4acc, 0x39bebed6, 0x16f634f6, 0x09ece3bb, 0x3ea08b01, 0x1222ba4c, 0x0f23e815, 0x161e687a, 0xf045}}},
    /*  9*16^5*G: */
    {{{0x07bc57c6, 0x08254e8f, 0x2b276cbf, 0x00f5e88f, 0x16309449, 0x3cb4ba4f, 0x19bea884, 0x220be23b, 0xad09}},
     {{0x2e4a0ab8, 0x28cb03b6, 0x190e2d3c, 0x0c474dcd, 0x1abe5f7b, 0x061b1ca7, 0x3a52ba28, 0x302310be, 0x7243}}},
    /* 11*16^5*G: */
    {{{0x2ba56302, 0x2a0c31ca, 0x30f1862e, 0x01aa4deb, 0x3ad2e0f5, 0x368b4aa7, 0x0a41f1ea, 0x0a42bacf, 0xd9d1}},
     {{0x08291c29, 0x2ab76bea, 0x3a74f2ae, 0x0e6bb367, 0x2386e417, 0x1c5719c9, 0x13eed029, 0x0c44fb0b, 0x7eb5}}},
    /* 13*16^5*G: */
    {{{0x34d1243a, 0x2b34dc13, 0x354a5fdb, 0x2c49808f, 0x3f558402, 0x3486b018, 0x16cef91c, 0x1e7794e7, 0xbc50}},
     {{0x055db68a, 0x172545a2, 0x1f47169f, 0x1fb93d6c, 0x3fc8d75f, 0x31cae537, 0x05cbb8ee, 0x0a8ece9c, 0x6506}}},
    /* 15*16^5*G: */
    {{{0x374a3f9f, 0x2349139a, 0x00981690, 0x21e99977, 0x32625ac2, 0x37aab9f6, 0x3c7e8913, 0x29df9417, 0x4d31}},
     {{0x301e0ba7, 0x3f2c0904, 0x2e00a754, 0x3dbed46d, 0x002753cb, 0x063ce31e, 0x0575b06b, 0x07b25826, 0x2224}}}
  },
  {
    /*  1*16^6*G: */
    {{{0x1232fcda, 0x2d845649, 0x2c0e77bc, 0x0036ffe9, 0x1548c7b7, 0x1dc7002f, 0x3996d6bf, 0x2ea9b976, 0x723c}},
     {{0x1eb39f5f, 0x07701a76, 0x37949480, 0x1828194d, 0x024d6e26, 0x044dd222, 0x0c498a92, 0x19ed5657, 0x96e8}}},
    /*  3*16^6*G: */
    {{{0x00633cb1, 0x159f827a, 0x1d021132, 0x168892da, 0x181fcb57, 0x189cc848, 0x2cad400c, 0x273cc5ea, 0x6dde}},
     {{0x27ce6b34, 0x1f7526a9, 0x3859ef35, 0x2c9ff6b3, 0x3a66a880, 0x27be1a86, 0x3e41d5c9, 0x3ef9e9c1, 0x9188}}},
    /*  5*16^6*G: */
    {{{0x2933f3c5, 0x06694634, 0x1f125224, 0x1683dc45, 0x07b85008, 0x12edfe39, 0x1cde813c, 0x29cb356d, 0x486f}},
     {{0x0afb0f53, 0x2b529c6b, 0x30f23b79, 0x366de0f3, 0x08f19f62, 0x3122ebb3, 0x3dd43e48, 0x08c67d5a, 0x62e1}}},
    /*  7*16^6*G: */
    {{{0x1e99f728, 0x2f565089, 0x2f12204e, 0x1cdd7ef9, 0x2a530367, 0x13fc9edd, 0x0af4fb66, 0x1a5d2a25, 0x2479}},
     {{0x2baaebff, 0x1e80145b, 0x175a2d83, 0x36fcf025, 0x0d664a5a, 0x0ba1f9f6, 0x33001ec5, 0x23511a23, 0xe3d7}}},
    /*  9*16^6*G: */
    {{{0x2fb0079a, 0x27831b50, 0x3926049c, 0x1be7bdc8, 0x33832491, 0x2967b9da, 0x15ff0631, 0x32f6a8f5, 0x2f39}},
     {{0x2c5690ba, 0x388a5cc0, 0x02a0230f, 0x3ecfef22, 0x0da58b9b, 0x24db409e, 0x239834da, 0x36f784e1, 0xabea}}},
    /* 11*16^6*G: */
    {{{0x24f7ab73, 0x24cc02cb, 0x14443a77, 0x38f53aa7, 0x34aed262, 0x0e7a1b14, 0x161ba56a, 0x075b0c9f, 0xe5a3}},
     {{0x30561f42, 0x244e8ff1, 0x00cba213, 0x2311126a, 0x0ece5dbf, 0x062a5de9, 0x29d7a0c1, 0x230f6347, 0x3778}}},
    /* 13*16^6*G: */
    {{{0x014dcd86, 0x23e4a68f, 0x2bf71b58, 0x31750825, 0x11dcf11f, 0x03766081, 0x13447df5, 0x27528345, 0xcc38}},
     {{0x08f0a873, 0x23adb767, 0x27e78746, 0x315f863f, 0x2910ca05, 0x1a2f6efa, 0x2bbed9b5, 0x13f5983d, 0x93ae}}},
    /* 15*16^6*G: */
    {{{0x38819311, 0x13e71bad, 0x08771472, 0x0f87b884, 0x35ed1f0b, 0x0285f833, 0x1e902375, 0x2472275c, 0x7f92}},
     {{0x2c2eb125, 0x2a7e6d5e, 0x086a174a, 0x02aa9027, 0x2415b612, 0x037a3114, 0x03ef0f5d, 0x034418fb, 0x9da0}}}
  },
  {
    /*  1*16^7*G: */
    {{{0x0e7dd7fa, 0x294cfb28, 0x3a919839, 0x11e5848d, 0x02d3b509, 0x3fbb204b, 0x2bf98ba5, 0x293524ef, 0xeebf}},
     {{0x21de8999, 0x37f53f6b, 0x311f712d, 0x393370e9, 0x38089d9a, 0x39fb6bc5, 0x2f0f269e, 0x2328e5c3, 0x5d9a}}},
    /*  3*16^7*G: */
    {{{0x3b7ceceb, 0x0fd9e3fe, 0x097faf0f, 0x2967e4e2, 0x2e681473, 0x3ee049bd, 0x2d45036f, 0x2188109d, 0x437a}},
     {{0x16c181e1, 0x0d8ef30d, 0x08f97827, 0x0883f3f7, 0x1297ff87, 0x23fada67, 0x2c32f69b, 0x1ae84fba, 0x0b91}}},
    /*  5*16^7*G: */
    {{{0x097f96f2, 0x1635ca78, 0x2c8735cd, 0x208d4a74, 0x3cc27335, 0x2df8ee68, 0x089bc83c, 0x27c4f8a9, 0xa9ef}},
     {{0x16c04be4, 0x00f556c1, 0x29b4702c, 0x13e26bd6, 0x3b613db7, 0x1bb8583a, 0x19d7cd95, 0x33396515, 0xe814}}},
    /*  7*16^7*G: */
    {{{0x350cf77e, 0x302ad684, 0x0a8ab0db, 0x36fd5d15, 0x2a064207, 0x209f5a7e, 0x135be553, 0x01507b87, 0x66d8}},
     {{0x20eaa3a6, 0x297e5ebe, 0x3b1b76d2, 0x112d0ead, 0x1613f694, 0x0750814d, 0x3fb42c3f, 0x37f9ccbf, 0x51cf}}},
    /*  9*16^7*G: */
    {{{0x07213a5a, 0x0d5218a2, 0x05fa62b9, 0x1cc8129e, 0x0cc3c80b, 0x14228719, 0x03fa2bf3, 0x01784d94, 0x62ac}},
     {{0x346a9e45, 0x04348703, 0x17994efc, 0x16424060, 0x292579e5, 0x179e781e, 0x1a6e4d39, 0x2f7ce834, 0x236f}}},
    /* 11*16^7*G: */
    {{{0x27bad12b, 0x0c3f5261, 0x2f66e1ec, 0x357a803a, 0x2f2db385, 0x184ebd71, 0x08f5b5bf, 0x31125c91, 0xca13}},
     {{0x1723b0f2, 0x25a67d1a, 0x1a575668, 0x1c2adc44, 0x2da3d663, 0x17e993aa, 0x287c8ac1, 0x0260d870, 0x83aa}}},
    /* 13*16^7*G: */
    {{{0x1c80414e, 0x36bb97e5, 0x166cf7fd, 0x3be2a18b, 0x209e4914, 0x04713d11, 0x12ae85ac, 0x2c4069c1, 0x1cec}},
     {{0x12169a3b, 0x32ba524b, 0x07231d0d, 0x1d55f951, 0x2dad1690, 0x2a8ca0d7, 0x17cfb4e5, 0x1819a582, 0xf343}}},
    /* 15*16^7*G: */
    {{{0x0ed810a9, 0x13d6f231, 0x0700155c, 0x22274fcf, 0x1f23924f, 0x036bd7c7, 0x38f9cc95, 0x241d4135, 0x2a69}},
     {{0x3a9b4728, 0x3e1ace23, 0x2c145c7c, 0x1f51fa5f, 0x3b04fc66, 0x3161a553, 0x1ffdac3e, 0x00e6db0f, 0x54f9}}}
  },
  {
    /*  1*16^8*G: */
    {{{0x39a48db0, 0x3f5e0d6c, 0x33c03bfe, 0x048568a6, 0x3bde459f, 0x0742826d, 0x27167279, 0x11369a5b, 0x100f}},
     {{0x2bc65a09, 0x3ef57358, 0x35195ac0, 0x3fd2863f, 0x090666b7, 0x23ccc030, 0x00b772ec, 0x384c64a8, 0xcdd9}}},
    /*  3*16^8*G: */
    {{{0x15bc15b4, 0x32e684d2, 0x25a2ee69, 0x1d40a391, 0x17ca8d92, 0x163ba73b, 0x2adc9ed8, 0x038b947b, 0x10e9}},
     {{0x18aa258d, 0x13af9825, 0x2bb6a883, 0x296258c0, 0x2d1f754c, 0x1ea3185a, 0x1e0424d5, 0x0dc0e035, 0xc68a}}},
    /*  5*16^8*G: */
    {{{0x3fe75269, 0x374ff0c0, 0x13d33182, 0x1de8f301, 0x0b7dcda3, 0x16e42dc5, 0x01638457, 0x0bd0b695, 0xf742}},
     {{0x17e49bd5, 0x22603a1c, 0x0a398e01, 0x2ce88dfd, 0x3635977f, 0x339f72e7, 0x3093fd18, 0x0bc68cc4, 0x406c}}},
    /*  7*16^8*G: */
    {{{0x35a7175f, 0x14ed9a5b, 0x31cf42a6, 0x2e39dc74, 0x15debbed, 0x1e69560b, 0x03cff728, 0x2b4105f5, 0x2d8c}},
     {{0x3b9d592a, 0x3cdeee46, 0x0b5e5e0c, 0x211aff67, 0x2c9d377a, 0x08cbe984, 0x0a94a7bb, 0x0ee0cc63, 0xc73f}}},
    /*  9*16^8*G: */
    {{{0x14b51045, 0x0d326f0e, 0x31c25b3e, 0x31b225bc, 0x28cf73bb, 0x1cf53ac7, 0x26ea58ae, 0x3f476e62, 0x1ecb}},
     {{0x02c70026, 0x0e99c404, 0x036422d5, 0x240191ad, 0x1a9b38b1, 0x342ec612, 0x1c3a6447, 0x388c22e6, 0x1cf6}}},
    /* 11*16^8*G: */
    {{{0x29358533, 0x1eb35d9b, 0x0fb4b9df, 0x2a4cfe75, 0x132a8c10, 0x25568a47, 0x3752883e, 0x25317f95, 0x9a08}},
     {{0x0360ba08, 0x2cf87177, 0x380ddadf, 0x29b96f6e, 0x0fc32165, 0x05f57e55, 0x38fc31f9, 0x20f10806, 0xa798}}},
    /* 13*16^8*G: */
    {{{0x198ef7f6, 0x25101758, 0x2078f9f6, 0x08fcfdde, 0x38aea659, 0x272149ce, 0x3d2e35bd, 0x361276d3, 0x664d}},
     {{0x1d1eac94, 0x1d25bfcd, 0x38e6ecee, 0x0f4eacc6, 0x0458cffc, 0x12339774, 0x27932a14, 0x0805c5fc, 0xad51}}},
    /* 15*16^8*G: */
    {{{0x03c934b3, 0x03029adf, 0x30ae2c4e, 0x0c7d6016, 0x11a7022b, 0x07659a60, 0x0b863823, 0x0ea4ddf4, 0x8211}},
     {{0x042c6a0f, 0x1f9798ab, 0x24468037, 0x07df09a6, 0x20c628aa, 0x19b3cad6, 0x23666084, 0x2e36b26b, 0x8da1}}}
  },
  {
    /*  1*16^9*G: */
    {{{0x2534fd2d, 0x322b379b, 0x0f3b3852, 0x1fe35119, 0x04c017a7, 0x2489e928, 0x3ed1b1dc, 0x06f898b1, 0xe103}},
     {{0x1456a00d, 0x113c63ca, 0x21ced79a, 0x24b75067, 0x17535af2, 0x1a905d96, 0x0405e6bb, 0x1864a250, 0x9d70}}},
    /*  3*16^9*G: */
    {{{0x2f028d83, 0x1e588ebb, 0x27439615, 0x25649b6e, 0x1e69db61, 0x2af96857, 0x385ec6a5, 0x3df138f1, 0xa7eb}},
     {{0x19d0bed1, 0x1900e4ae, 0x30539199, 0x28e249d2, 0x04804b47, 0x271cddc1, 0x362d5cfd, 0x054beff8, 0x6205}}},
    /*  5*16^9*G: */
    {{{0x27dd5cfa, 0x2b839008, 0x309d4b5b, 0x227144df, 0x2346336a, 0x31a94d09, 0x24f4c1cd, 0x282372c0, 0x5b5c}},
     {{0x1e48e98c, 0x19929be6, 0x33269d3e, 0x3419f32b, 0x069094bf, 0x07c33aa2, 0x15825e99, 0x2dbdc2a8, 0x3ecc}}},
    /*  7*16^9*G: */
    {{{0x23531f82, 0x2e54a38c, 0x10c2c9f2, 0x144c9aec, 0x022c29ff, 0x3cf9d227, 0x14bb5cce, 0x09ab3044, 0x046f}},
     {{0x0bceda07, 0x1417f22c, 0x2b55c7fa, 0x09651736, 0x032579d0, 0x0dc2b0bf, 0x382eace2, 0x12cc58d6, 0x6b80}}},
    /*  9*16^9*G: */
    {{{0x10432711, 0x02c550dc, 0x1916b906, 0x0502cbf7, 0x19645acf, 0x25bc3c22, 0x0efb535f, 0x09b64c78, 0xc119}},
     {{0x2fe2610c, 0x1249878b, 0x0f34055e, 0x2ae48b28, 0x0cc6cf83, 0x252fc61b, 0x1b689184, 0x3e331f49, 0x8be1}}},
    /* 11*16^9*G: */
    {{{0x21257963, 0x05e61d3e, 0x34aa861c, 0x006354b0, 0x0979c45b, 0x2ed52d4e, 0x08f2e6cd, 0x11ba7ada, 0x6908}},
     {{0x066f9835, 0x295d9665, 0x1c92b253, 0x2f0f2a08, 0x2fbb7f6c, 0x05c093e4, 0x3ebc5b40, 0x17f2dfcf, 0xe248}}},
    /* 13*16^9*G: */
    {{{0x1ee23ace, 0x3444e52f, 0x14dd2fd2, 0x321f196d, 0x232915de, 0x1d54b7d2, 0x220babba, 0x3dfee324, 0xfb3d}},
     {{0x1722e8de, 0x0277bd32, 0x2d27f5ee, 0x1c9c50bf, 0x3ab58a9e, 0x09455036, 0x33c5652a, 0x0a6f0471, 0x510e}}},
    /* 15*16^9*G: */
    {{{0x10272351, 0x181f3fbd, 0x19ff1098, 0x1cd2cf7e, 0x31cd4170, 0x228facea, 0x0518b3eb, 0x17b093d7, 0x6dd8}},
     {{0x3fc7664b, 0x2c1fe8ad, 0x3e0817c9, 0x1f1bfdf0, 0x1c41b787, 0x101fe6bd, 0x3427e09d, 0x19fd0487, 0x16ea}}}
  },
  {
    /*  1*16^10*G: */
    {{{0x1094696d, 0x3579a236, 0x01d6af52, 0x3e2c99a9, 0x3bd7ec5c, 0x0a0e7c50, 0x15b530ac, 0x1b2b91b5, 0xfeea}},
     {{0x18090088, 0x05577afc, 0x041442d3, 0x072255f3, 0x3ecd5c98, 0x39384afc, 0x0e1bab06, 0x1adb25f7, 0xe57c}}},
    /*  3*16^10*G: */
    {{{0x08dfd587, 0x1e4d86ed, 0x1b026560, 0x312e8e32, 0x35a12d5e, 0x19eaa8b3, 0x0508b348, 0x2d06eb3d, 0x5084}},
     {{0x11470e89, 0x39e7a5fe, 0x091f5606, 0x2dbd581a, 0x2927475d, 0x2a9b2154, 0x00d31619, 0x18c68766, 0x34a9}}},
    /*  5*16^10*G: */
    {{{0x3ab34cc6, 0x0208c985, 0x0f30a12d, 0x030a5d9f, 0x0d7128c8, 0x2cfc7f46, 0x2d5ea53f, 0x300f8190, 0x4f14}},
     {{0x187e681f, 0x17b094be, 0x281dd022, 0x378f33a3, 0x262540b9, 0x0e9c3d0e, 0x0e894c65, 0x342a32a9, 0x7b53}}},
    /*  7*16^10*G: */
    {{{0x1241d90d, 0x109dc404, 0x32444f83, 0x073c5076, 0x1dd363e8, 0x10d8257b, 0x39ed1d41, 0x2e1f9271, 0xa74d}},
     {{0x3f7adad4, 0x0c9462e0, 0x0a0a313f, 0x3b9424d1, 0x0171c8a9, 0x37422962, 0x3eef327f, 0x24736bc8, 0xf786}}},
    /*  9*16^10*G: */
    {{{0x31c1ae1f, 0x17b32888, 0x2cd40b2a, 0x1b9631a2, 0x23565845, 0x373513ae, 0x2a2cf9ac, 0x3e95d12e, 0x6901}},
     {{0x122838b0, 0x3e0cc197, 0x1c77a930, 0x27cee979, 0x1c900dd7, 0x2d4e030a, 0x3c212461, 0x1722089c, 0x35de}}},
    /* 11*16^10*G: */
    {{{0x327a4bdb, 0x2c0c4206, 0x1494cac4, 0x1a9b410d, 0x3ba35d04, 0x12d90fc6, 0x38127a24, 0x360b4750, 0x8d3c}},
     {{0x269a8a2c, 0x0f4d31f3, 0x30ad296c, 0x38e01f4d, 0x36236ed4, 0x3efe7401, 0x241f470c, 0x0958603b, 0x9bd4}}},
    /* 13*16^10*G: */
    {{{0x34ec1d2d, 0x10334f1a, 0x27d8f454, 0x0267d71b, 0x3b691fd9, 0x2759ca59, 0x24739afe, 0x20d8f581, 0xeaf9}},
     {{0x0c838452, 0x33f9d581, 0x3e84b53f, 0x3d4b5515, 0x3199aaa9, 0x08a2839a, 0x38d22775, 0x060e9ff9, 0xe518}}},
    /* 15*16^10*G: */
    {{{0x045ae767, 0x32cd6fdc, 0x289771cb, 0x1cea72e7, 0x06e5d8c2, 0x103814b0, 0x1b63466f, 0x2f458ebb, 0xfb95}},
     {{0x3bbf0e11, 0x214fa82b, 0x259f1341, 0x05bd1c62, 0x02275bb8, 0x013674da, 0x0ddbc520, 0x0536046a, 0x664c}}}
  },
  {
    /*  1*16^11*G: */
    {{{0x01ec6cb1, 0x0fea5e2f, 0x08583de3, 0x3b595f60, 0x3fca3cfe, 0x1ef92f9b, 0x09cdcb36, 0x2a476441, 0xda67}},
     {{0x3a68be1d, 0x3a7aa389, 0x0f740a17, 0x31eb7142, 0x1780e5de, 0x118fdfb2, 0x242bc41f, 0x2a8d5205, 0x9bac}}},
    /*  3*16^11*G: */
    {{{0x15bc8a44, 0x3bf74194, 0x3e151a19, 0x10405df2, 0x1a5fc768, 0x159692e9, 0x0eda3d38, 0x20160f3f, 0x4d01}},
     {{0x1adbc09e, 0x3c7e5324, 0x182da362, 0x250811a1, 0x16381396, 0x26ea001f, 0x0f5d367e, 0x31b0632d, 0x3a33}}},
    /*  5*16^11*G: */
    {{{0x25daeb00, 0x306ad4a1, 0x2645f76b, 0x08fac933, 0x36e9d159, 0x32da89ce, 0x0f957082, 0x0541f7d7, 0x2f66}},
     {{0x033992c0, 0x089d9e26, 0x15d308c1, 0x337b89c6, 0x00add06e, 0x254dea08, 0x2b33f6ef, 0x0484dbd4, 0xfd5c}}},
    /*  7*16^11*G: */
    {{{0x116aa6d9, 0x20aa4282, 0x3702dcf1, 0x18b22d91, 0x035a3836, 0x3c5d3686, 0x247d2254, 0x045f417f, 0xf594}},
     {{0x3f2e50cf, 0x1f41a5ba, 0x26b5b86c, 0x249de20f, 0x14bceb7a, 0x176f6ac2, 0x31b12cf6, 0x18695ba5, 0xcaa7}}},
    /*  9*16^11*G: */
    {{{0x3ac6f4c0, 0x2ab80e55, 0x04bdc4cc, 0x13a37a33, 0x16711dda, 0x070e2f9a, 0x19cdec4e, 0x135fc7d3, 0x0f2d}},
     {{0x32339b58, 0x1f9eeeb5, 0x0242656e, 0x1a8429e4, 0x01e71e8f, 0x2c9ff7ce, 0x3de4d17f, 0x27e15fa4, 0x3ec8}}},
    /* 11*16^11*G: */
    {{{0x1f428cb2, 0x215414ff, 0x2a22b55d, 0x0e08bf59, 0x18d0f123, 0x1e860565, 0x14bbd1eb, 0x33b0b8a8, 0x1d5d}},
     {{0x095b189b, 0x397b4402, 0x36044a51, 0x0fa44be1, 0x2f0b88bd, 0x1e1e0921, 0x2c8c50d0, 0x1020ec50, 0x6e5c}}},
    /* 13*16^11*G: */
    {{{0x28381273, 0x2c3aa23e, 0x293dae5f, 0x10dda581, 0x0126ced8, 0x3aa6cb31, 0x167439fd, 0x28bf4c02, 0x89d9}},
     {{0x1309773d, 0x00facfbb, 0x1127324a, 0x1875a02b, 0x0f62f58f, 0x2abc81db, 0x26f50377, 0x096d1475, 0xdfca}}},
    /* 15*16^11*G: */
    {{{0x35c71d91, 0x330cacb2, 0x2894fd21, 0x25178b8a, 0x1afece23, 0x28704c45, 0x10ae1c52, 0x06e1e0e9, 0x8319}},
     {{0x22148a61, 0x02e7b023, 0x10445ee7, 0x2847d45d, 0x3cae8a17, 0x1b784f45, 0x01b709e0, 0x1fc55ce0, 0xe0ac}}}
  },
  {
    /*  1*16^12*G: */
    {{{0x1a37b7c0, 0x1d517330, 0x311069f5, 0x02343dee, 0x322151ec, 0x00024d7b, 0x34cdda6e, 0x13ea82cc, 0x5390}},
     {{0x022771c8, 0x372c25ac, 0x14434699, 0x26666078, 0x0d3c1c13, 0x27b32b08, 0x0106d88c, 0x21f42f20, 0x5bc0}}},
    /*  3*16^12*G: */
    {{{0x08a2050e, 0x06b10bf9, 0x15f8a677, 0x0bbd55d8, 0x079b8974, 0x1da731b9, 0x0731896b, 0x093f492f, 0x6737}},
     {{0x061d3d70, 0x24326924, 0x3349cc2b, 0x1aeb3f50, 0x086b6dbe, 0x120b026a, 0x24a20203, 0x2095e25a, 0xe4cf}}},
    /*  5*16^12*G: */
    {{{0x02de63bf, 0x2fdb920e, 0x3261c66c, 0x0ebd4ca1, 0x2166a8e0, 0x26298c7d, 0x34c309e5, 0x3be91cb7, 0x4366}},
     {{0x217924cd, 0x0b1a9023, 0x2aa6d6b0, 0x0ec31496, 0x0268eaf3, 0x094df84c, 0x2d7ce2ee, 0x36426fb8, 0x2e7d}}},
    /*  7*16^12*G: */
    {{{0x06f96190, 0x04149ffc, 0x3c9525ef, 0x3c0b7a41, 0x3aa75fd1, 0x3955a599, 0x1ab1f97b, 0x14d89e64, 0x7bd7}},
     {{0x2bda00f6, 0x0f45c812, 0x20ea695a, 0x03f31707, 0x3827d6ce, 0x3591d250, 0x26309d5e, 0x3cacf6ee, 0x8336}}},
    /*  9*16^12*G: */
    {{{0x16ad41ed, 0x0ec54c55, 0x0f035243, 0x022b0d7d, 0x18dc9203, 0x0d067a24, 0x2d5c1afa, 0x249ef76a, 0x4f7e}},
     {{0x3e642d57, 0x3d0d5e19, 0x2af775bd, 0x1cc51c53, 0x28f6a62e, 0x26037d4e, 0x08b10552, 0x1d1455aa, 0xdfe7}}},
    /* 11*16^12*G: */
    {{{0x27748690, 0x3e981449, 0x0630b01c, 0x15e41376, 0x133d007d, 0x114ac7b7, 0x11ccc94b, 0x32e19f4a, 0x2355}},
     {{0x0c89582b, 0x1f11d4c5, 0x11c93914, 0x0a1a1633, 0x2a7c5858, 0x2e17b056, 0x1e1f8f55, 0x3c62969c, 0x21c2}}},
    /* 13*16^12*G: */
    {{{0x0ade7f16, 0x36ba8858, 0x0be028c6, 0x272eba4f, 0x275d24ae, 0x164aadb0, 0x1a56c013, 0x2096e6cf, 0x0b66}},
     {{0x08c56217, 0x251109a1, 0x3e7cd2bd, 0x090f037c, 0x17a97fb7, 0x29daea2d, 0x09b3fef3, 0x282e0638, 0xa1fb}}},
    /* 15*16^12*G: */
    {{{0x19060d5b, 0x241ac08a, 0x03a3a7c2, 0x1184ec47, 0x3951cb90, 0x026cbf67, 0x1022cb61, 0x010f3c2f, 0xf602}},
     {{0x1af88f13, 0x1bdbd42c, 0x3dd1a3f7, 0x2a95b4ad, 0x0f7bea37, 0x2a3d92b1, 0x0cf19881, 0x2dc1b07c, 0xf036}}}
  },
  {
    /*  1*16^13*G: */
    {{{0x3ad86047, 0x3fe567d0, 0x29b8bcae, 0x2d4e810e, 0x0a906779, 0x3329dd93, 0x183a7719, 0x3342f4d6, 0x8e7b}},
     {{0x0460372a, 0x284011fa, 0x3fd68b3e, 0x3a238b91, 0x29514579, 0x0c410832, 0x1a4b3940, 0x1dc2ca8f, 0x10b7}}},
    /*  3*16^13*G: */
    {{{0x041ead4b, 0x3fa21e68, 0x11b03c1f, 0x1d7b7eda, 0x3e76be3a, 0x11cd3beb, 0x3337ec71, 0x03032323, 0xbfc9}},
     {{0x06fedaed, 0x114b1bc2, 0x2e0ae3e7, 0x11a3bfcc, 0x042d36fb, 0x29c63754, 0x0ded24db, 0x206c7827, 0x7a94}}},
    /*  5*16^13*G: */
    {{{0x35bb3b3e, 0x1b9ef41d, 0x39f73cb2, 0x1d4d85fb, 0x2d3f5b50, 0x1664fa30, 0x3aaa4dca, 0x3c472f8f, 0x732d}},
     {{0x17366693, 0x315df87b, 0x0c58436c, 0x276b5b59, 0x253916e6, 0x38956100, 0x39977cb7, 0x240fb7a3, 0x7f41}}},
    /*  7*16^13*G: */
    {{{0x088dc3b9, 0x17d6cf06, 0x1774c99c, 0x299a493a, 0x17ef6019, 0x2a210332, 0x147b428d, 0x252e580e, 0x4ce0}},
     {{0x25c0de52, 0x3053dedb, 0x1ea06502, 0x0816c832, 0x36aca216, 0x2d360329, 0x29b3ed57, 0x03eeafc6, 0x0539}}},
    /*  9*16^13*G: */
    {{{0x0aaafe5a, 0x30dd782c, 0x109aedd4, 0x151c2ce9, 0x023fd0e2, 0x229aa56c, 0x267de96d, 0x23addbf1, 0x9a96}},
     {{0x0ed975c0, 0x39aff509, 0x1e70cc0c, 0x2d620299, 0x061d0ee7, 0x319b40f6, 0x3ba2954f, 0x3ec1e9b4, 0xabf6}}},
    /* 11*16^13*G: */
    {{{0x334c6397, 0x1d472fe7, 0x074cd093, 0x374f6d40, 0x36b22107, 0x2bbe0094, 0x161954f0, 0x3efb405c, 0xd3c6}},
     {{0x28cb3f9c, 0x07f23415, 0x05e0e00b, 0x031dc224, 0x2ab6468a, 0x20e5364b, 0x22af1945, 0x34b15797, 0x4a0d}}},
    /* 13*16^13*G: */
    {{{0x0ac3137e, 0x26e0964c, 0x1af64461, 0x2496d8a9, 0x2b3953fe, 0x3c1a9daa, 0x243b8e02, 0x38e604a4, 0x4cbd}},
     {{0x2ec02fe6, 0x0023c573, 0x08ead60c, 0x24e9eb96, 0x14c370d1, 0x24a84d2e, 0x36159500, 0x151823c4, 0x6ce5}}},
    /* 15*16^13*G: */
    {{{0x20fbf84b, 0x1e88c1b3, 0x03f0b8a4, 0x3123f2ef, 0x14cebb03, 0x3671cc30, 0x16247b8b, 0x0ccf20ac, 0x4b9d}},
     {{0x236c3c48, 0x0e7b92d2, 0x2f5b5e62, 0x19b550f8, 0x39b7eb67, 0x04f66099, 0x0c152553, 0x31fef893, 0xfd7f}}}
  },
  {
    /*  1*16^14*G: */
    {{{0x19c43862, 0x2a107856, 0x397e6690, 0x29fd3c60, 0x381bde71, 0x02061a26, 0x1ff21e6d, 0x3b4d3073, 0x385e}},
     {{0x142e5453, 0x01163f95, 0x086dc8cc, 0x0c13bb08, 0x2bf4576b, 0x077867a7, 0x223f5670, 0x3af0fa3a, 0x283b}}},
    /*  3*16^14*G: */
    {{{0x36e2d9b3, 0x12f4c1aa, 0x338d6351, 0x36e4a0c6, 0x0f845641, 0x0ba984e7, 0x305e75e1, 0x053ce5f1, 0x19a3}},
     {{0x0baaaf33, 0x154bb897, 0x004be56d, 0x00874749, 0x3528b3a5, 0x2597e21f, 0x328dd234, 0x363d76b1, 0x6cac}}},
    /*  5*16^14*G: */
    {{{0x12f00480, 0x36161fac, 0x100dcee7, 0x0d620128, 0x36721920, 0x32618d93, 0x0daa355d, 0x3b52e56a, 0x5840}},
     {{0x3e22cf9e, 0x164b578a, 0x2ae38721, 0x1d489514, 0x1dd8daba, 0x1a37aa85, 0x3f141079, 0x369ac882, 0x670c}}},
    /*  7*16^14*G: */
    {{{0x23f54c42, 0x12137ba0, 0x29a3dc8e, 0x37068f09, 0x0e532545, 0x16307d3b, 0x118fb1dc, 0x00694d1a, 0x9f57}},
     {{0x2feb6a21, 0x18387124, 0x219e5278, 0x3b9e12ac, 0x29bfdd89, 0x256dad5c, 0x19e57bfb, 0x23ee2007, 0xce7b}}},
    /*  9*16^14*G: */
    {{{0x1522461a, 0x3a504cca, 0x3c718327, 0x2cc28996, 0x3ef9a0bc, 0x2e1c0419, 0x28cfc01b, 0x045a48d6, 0x27f6}},
     {{0x07301a2d, 0x2a932be7, 0x28639446, 0x2606c836, 0x028ee8e4, 0x2315849d, 0x26ad2ea4, 0x3c6a6402, 0xe512}}},
    /* 11*16^14*G: */
    {{{0x114f36b9, 0x338b26cb, 0x3b9f390c, 0x2632aed8, 0x34a98125, 0x2fcbd0d7, 0x2f941261, 0x1e615b3b, 0x6407}},
     {{0x24b4b50a, 0x252c7ba7, 0x19ceeb28, 0x36821c12, 0x1a7b6c8c, 0x035d7f61, 0x16efaef9, 0x24a3d139, 0xda61}}},
    /* 13*16^14*G: */
    {{{0x14d6b76f, 0x3bd8f7e6, 0x0c815dbc, 0x396a7eed, 0x1dfeae7f, 0x3dc22f02, 0x1669f452, 0x1438c721, 0xa237}},
     {{0x0dcca8da, 0x0764b332, 0x1b848d14, 0x1c1f047f, 0x011113e7, 0x0be8f935, 0x3de6dac3, 0x26c529b9, 0xf733}}},
    /* 15*16^14*G: */
    {{{0x3ceee475, 0x0bba7193, 0x0ed782b1, 0x1ab20a10, 0x0aff41ab, 0x0f0087cf, 0x2378d5ed, 0x2b01e8fc, 0xbbf1}},
     {{0x07fe5067, 0x1188a802, 0x38b41d68, 0x3ae76250, 0x315fe324, 0x20f320da, 0x060e6108, 0x2e37bab5, 0xb4bf}}}
  },
  {
    /*  1*16^15*G: */
    {{{0x03fac3a7, 0x181bb61b, 0x147fbc9c, 0x377e1296, 0x3dfa180f, 0x31ce9104, 0x0f191637, 0x366e00fb, 0x06f9}},
     {{0x3a842160, 0x21a24180, 0x0281002d, 0x29374bd7, 0x05c4d47e, 0x238a8c39, 0x059ba69b, 0x31a3980c, 0x7c80}}},
    /*  3*16^15*G: */
    {{{0x121ce204, 0x13b5d7a3, 0x26763d52, 0x29c96390, 0x26f72fb2, 0x1d361672, 0x3c64fb83, 0x107458ac, 0x43ca}},
     {{0x134a8f6b, 0x1494113a, 0x2a4a468e, 0x2db1eccf, 0x1ba31f9a, 0x143e4863, 0x023fa1c6, 0x16a0b8dc, 0xdcea}}},
    /*  5*16^15*G: */
    {{{0x2be6efda, 0x13f3a4b3, 0x07280596, 0x0b53fcfe, 0x1a506d92, 0x1bdc8de1, 0x12bf5b66, 0x01bbc8a2, 0x9c3e}},
     {{0x27aefc7d, 0x3c503cca, 0x336fdf7d, 0x0ef21a1e, 0x226fd5d4, 0x02cb5133, 0x2923d8af, 0x027979d8, 0xa7b7}}},
    /*  7*16^15*G: */
    {{{0x06c88be2, 0x2449ead7, 0x06ee5e27, 0x0b1e0834, 0x30775bea, 0x1c9d6760, 0x20f033bb, 0x22a8c4f8, 0x5d6f}},
     {{0x0d7ad75d, 0x24b954fc, 0x2bf92c28, 0x2adbe3a9, 0x08bc20ed, 0x2abcceac, 0x2d4e8c71, 0x2c636355, 0xadc4}}},
    /*  9*16^15*G: */
    {{{0x12d1b844, 0x0a24d46e, 0x173e484f, 0x2700e0b0, 0x388bc5c6, 0x2c570f04, 0x20d5fc86, 0x0d70c129, 0xf57d}},
     {{0x21266837, 0x192eaef5, 0x0915c6a4, 0x01a5c80c, 0x24634c70, 0x134fd6a7, 0x2f4d9790, 0x0f67aa63, 0x707f}}},
    /* 11*16^15*G: */
    {{{0x3cc7cb09, 0x0d3401fc, 0x1d1b4352, 0x31fada28, 0x1871463b, 0x1b87fb8f, 0x194a5f59, 0x181e8e99, 0x13e7}},
     {{0x08079160, 0x2f9d6a28, 0x2b576411, 0x3ab8aed9, 0x34299d65, 0x17f7616c, 0x3b8b1e32, 0x32237a3e, 0x284d}}},
    /* 13*16^15*G: */
    {{{0x18cdee05, 0x01833849, 0x32ec3b90, 0x1d87ec85, 0x06901da8, 0x00942c6c, 0x182e6240, 0x28c895a0, 0x29be}},
     {{0x262651c8, 0x39280d66, 0x0c698e39, 0x3f0c6db2, 0x305ec7f9, 0x026cfee1, 0x29a0ea90, 0x36689a43, 0x7c40}}},
    /* 15*16^15*G: */
    {{{0x12f18ada, 0x06db1d58, 0x3dbdbcc1, 0x182f64ee, 0x3d4a59d4, 0x0dbebfcc, 0x288e7d9c, 0x1e1b48e0, 0xf521}},
     {{0x23953516, 0x375a2bf4, 0x05bf0981, 0x17bd28db, 0x11d1d6aa, 0x09840af3, 0x0db57ecc, 0x1befd80e, 0xe068}}}
  },
  {
    /*  1*16^16*G: */
    {{{0x02d0e6bd, 0x0edf839d, 0x30f5e531, 0x1d3458f6, 0x0d6ecbf7, 0x0851f041, 0x04e2582a, 0x3500490f, 0x3322}},
     {{0x2c28b2a0, 0x13ce8ba5, 0x2873af62, 0x017d8fa8, 0x1af9b728, 0x0066f137, 0x24ef5bfb, 0x01e5fa59, 0x56e7}}},
    /*  3*16^16*G: */
    {{{0x059ab499, 0x2f674fc8, 0x273c330a, 0x04ca671b, 0x3f01bc0b, 0x065acf19, 0x005ba5d2, 0x2bfcc057, 0x78ba}},
     {{0x3ee097fd, 0x20748c63, 0x11251996, 0x18cbbba3, 0x02082e91, 0x2a1383b6, 0x2c0afafc, 0x3736f6c1, 0xad4b}}},
    /*  5*16^16*G: */
    {{{0x3d06ace6, 0x124f85b3, 0x03a20ca4, 0x1c26cdbe, 0x29ab1a23, 0x2e126124, 0x2e3d4c20, 0x3c846852, 0x6f70}},
     {{0x3602d5de, 0x122fb4d2, 0x25ac5ee0, 0x0ca559af, 0x399f5075, 0x1763cd1e, 0x27b736f9, 0x228c2500, 0x791e}}},
    /*  7*16^16*G: */
    {{{0x20ee1b40, 0x323b8fb9, 0x1e96247d, 0x3b5216dc, 0x03ccd48c, 0x2527c644, 0x2a415f80, 0x276ca75a, 0xe159}},
     {{0x178f93a6, 0x0758997b, 0x032999de, 0x0d8e9d2f, 0x2fc7cfa6, 0x3e252aa8, 0x1d4a0efa, 0x1888caa0, 0x7933}}},
    /*  9*16^16*G: */
    {{{0x09c00c3e, 0x2077e8a1, 0x11208e2f, 0x03a3c0f2, 0x051859f0, 0x158b4cf5, 0x06956436, 0x0125c110, 0xbb0b}},
     {{0x11955a35, 0x266a60b4, 0x05dc90a7, 0x19c113a4, 0x31b052fe, 0x34be85ea, 0x39f63655, 0x391614eb, 0x4067}}},
    /* 11*16^16*G: */
    {{{0x05dd32e6, 0x039d6e70, 0x13e5ee7e, 0x18ed546d, 0x1a5fbfc6, 0x1276f81d, 0x1789e9b6, 0x10555065, 0xdc5a}},
     {{0x354a99b9, 0x039f6de9, 0x2e49bcf8, 0x3cbba41d, 0x3f59442f, 0x3a978806, 0x367a76dc, 0x2a298fe7, 0x4af3}}},
    /* 13*16^16*G: */
    {{{0x0544e7cb, 0x3b516eb1, 0x12960359, 0x0190896d, 0x014e99a1, 0x0d5295c4, 0x33b9dbe3, 0x065c0e61, 0x156e}},
     {{0x2d250a37, 0x354e4b02, 0x2b439cd6, 0x25b56357, 0x034be894, 0x255ca98e, 0x1907da93, 0x2367e3cc, 0x6bc0}}},
    /* 15*16^16*G: */
    {{{0x059853ca, 0x2fef0a73, 0x319bf54d, 0x3a589ae7, 0x27161348, 0x29da88a3, 0x043826bc, 0x2f33b2da, 0x4269}},
     {{0x35b8d367, 0x2a563bd4, 0x1e5a8a3d, 0x0e50297e, 0x31a409fd, 0x2132a710, 0x016b723c, 0x0706a0b0, 0xed2b}}}
  },
  {
    /*  1*16^17*G: */
    {{{0x0134ab83, 0x0875d34a, 0x36433977, 0x06cfe6bd, 0x26586874, 0x05dc3625, 0x0b7da2bd, 0x0b1f4b78, 0x8567}},
     {{0x390313a6, 0x238c253d, 0x1298f44c, 0x1fc5ff31, 0x22c2e5e7, 0x10126fe9, 0x3b2eb637, 0x06e6d6d0, 0x7c48}}},
    /*  3*16^17*G: */
    {{{0x03ba9000, 0x37c1c8ea, 0x025e8b6f, 0x21cbe71a, 0x00143dc4, 0x21d81d61, 0x1d8c1684, 0x1d3e7ffc, 0xac38}},
     {{0x2f10cf0a, 0x368f1f65, 0x366e9fa4, 0x178d435f, 0x117f9308, 0x0b77a250, 0x1c069b86, 0x3a48c228, 0xaa65}}},
    /*  5*16^17*G: */
    {{{0x2d06dbd4, 0x2981bd9b, 0x0a20d081, 0x038fe15e, 0x23e729ec, 0x0501d7a6, 0x070139ad, 0x1739ea9a, 0x570d}},
     {{0x3d1ed495, 0x2996fb3a, 0x2460bed5, 0x20e8db71, 0x101bbbb6, 0x19b99c47, 0x202f605b, 0x14d25083, 0xa6ae}}},
    /*  7*16^17*G: */
    {{{0x092d230e, 0x0d307e48, 0x29339284, 0x3b8ca834, 0x366ef5da, 0x308a7b80, 0x28bb6f87, 0x3e1c0a09, 0x75b5}},
     {{0x151570b8, 0x0df2f7ef, 0x111f8fb0, 0x19e92c01, 0x1dfa8e02, 0x1e1d1553, 0x3852363d, 0x338878e9, 0x527c}}},
    /*  9*16^17*G: */
    {{{0x034fcc0e, 0x1edafdab, 0x3e3884c4, 0x1fc4290a, 0x1259c892, 0x16e0389f, 0x1dec2b0a, 0x23beb87b, 0x44fc}},
     {{0x319c420a, 0x33fc0c79, 0x0d0489d9, 0x03a5292f, 0x33d3d772, 0x099f9e20, 0x31367e49, 0x37a52ea6, 0xd2c7}}},
    /* 11*16^17*G: */
    {{{0x0bb69991, 0x169207f2, 0x3307175d, 0x3ecfe8b0, 0x02f535ff, 0x28598838, 0x27bc6866, 0x2e91eeb3, 0xdea2}},
     {{0x316fe2df, 0x019d0aa7, 0x21ed9bc7, 0x27736cd8, 0x37b9e722, 0x32ffb213, 0x028e4ac5, 0x2ff5b643, 0xae28}}},
    /* 13*16^17*G: */
    {{{0x114fc9cc, 0x30903409, 0x1a461658, 0x3402af0a, 0x38a83626, 0x073db312, 0x168d6efc, 0x3f2629b8, 0x3968}},
     {{0x1fad37dd, 0x064e5225, 0x388f3340, 0x05195dbf, 0x2d32c91a, 0x1e60b46a, 0x35928123, 0x2ef436d2, 0x789c}}},
    /* 15*16^17*G: */
    {{{0x2e0c85f1, 0x2bb08646, 0x03a3a250, 0x294b94d8, 0x3945d5a6, 0x0977c255, 0x06a2926b, 0x2441a638, 0x6896}},
     {{0x2dc1de21, 0x31d208cc, 0x0d503922, 0x10306768, 0x05d72d1f, 0x0c170761, 0x0979256f, 0x0fed2ce3, 0xaefd}}}
  },
  {
    /*  1*16^18*G: */
    {{{0x20c82a0a, 0x3f6566bd, 0x3668832f, 0x2489b183, 0x1413b10f, 0x1b27c646, 0x188a46b0, 0x2fe026c6, 0x0948}},
     {{0x18c8e589, 0x132dfe23, 0x17cd2bed, 0x137fc232, 0x03418c6d, 0x2dd31747, 0x36646dc6, 0x18a15b72, 0x53a5}}},
    /*  3*16^18*G: */
    {{{0x38c8ac7f, 0x0a0bf97e, 0x1e2aa527, 0x0490bb99, 0x16f84964, 0x0ce5b481, 0x22bbcb5c, 0x2cbef8e0, 0x9945}},
     {{0x29aea3b0, 0x1b650e85, 0x2dacdfa9, 0x0bde88fb, 0x28eff528, 0x36d13fec, 0x3282d607, 0x3b6092c3, 0x3eef}}},
    /*  5*16^18*G: */
    {{{0x169e353a, 0x3475e78e, 0x2bbe1f6e, 0x28110214, 0x07d5fe10, 0x3e0889c4, 0x070e6235, 0x131ac816, 0x2a31}},
     {{0x25746067, 0x09649b87, 0x32658bfc, 0x22952ab6, 0x2a1ba013, 0x18f91dae, 0x227ac1a4, 0x2b02fcd6, 0x15a4}}},
    /*  7*16^18*G: */
    {{{0x29b84966, 0x278bd27b, 0x17f3ff98, 0x13d041b7, 0x2b6c911b, 0x2dbebce9, 0x3fc2d498, 0x29402dc0, 0x5959}},
     {{0x07473a6a, 0x02998c86, 0x0fe24264, 0x00373023, 0x082a7091, 0x0c4a0837, 0x0a897f94, 0x399d07d7, 0x0370}}},
    /*  9*16^18*G: */
    {{{0x2bc6b173, 0x2c326e48, 0x2ed3feb3, 0x36188f1f, 0x1b5f9d7d, 0x183118c1, 0x22fe8e11, 0x0c4e4dc8, 0x9eeb}},
     {{0x1723a71d, 0x14e58836, 0x0e70c4b9, 0x29c6afb4, 0x3a1ae30e, 0x2aaff6ee, 0x2d58d952, 0x3c780443, 0xe121}}},
    /* 11*16^18*G: */
    {{{0x3ec805f3, 0x1dc910fd, 0x1d995915, 0x3903dd42, 0x2e97887d, 0x2ec8e201, 0x318f516e, 0x13f931fd, 0x39cc}},
     {{0x3a3c48d3, 0x06468304, 0x3c912e4d, 0x2e55cdcf, 0x02de7dbb, 0x399a4f3d, 0x2f8f3151, 0x11cb1691, 0xecb1}}},
    /* 13*16^18*G: */
    {{{0x0e22580e, 0x0f58bed7, 0x2d6f8879, 0x04ca25b4, 0x1bd4d2c7, 0x0bff7993, 0x0dc69689, 0x201d19bb, 0xf94c}},
     {{0x3127db82, 0x07948fd9, 0x2371d4e8, 0x21fb114c, 0x1a81f698, 0x12ffdaad, 0x1225a919, 0x1ff719e1, 0x5e9c}}},
    /* 15*16^18*G: */
    {{{0x10c4f21f, 0x2f902eb4, 0x103da7a6, 0x092a5653, 0x1999d250, 0x0081a36c, 0x1d162fcc, 0x2e1b1ab5, 0x8ccc}},
     {{0x329dfea0, 0x1fc49ba9, 0x264be28f, 0x24b72b20, 0x0758a54b, 0x2fbd5272, 0x11c43699, 0x2596189d, 0x57f8}}}
  },
  {
    /*  1*16^19*G: */
    {{{0x338fd8e8, 0x33b36067, 0x069752ac, 0x2c39137f, 0x2873a8f1, 0x19f383c0, 0x001c34f0, 0x339fd186, 0x6260}},
     {{0x32b4ae17, 0x06a13a56, 0x051c198c, 0x34a488e0, 0x2a1ef7ec, 0x024125dd, 0x1b571a7f, 0x2a0adbe9, 0xbc2d}}},
    /*  3*16^19*G: */
    {{{0x01136602, 0x2c2e9195, 0x19e3a5bb, 0x311bd203, 0x333b3d38, 0x1624dfc8, 0x2dfc33d0, 0x09ca0120, 0x87d1}},
     {{0x18af6aac, 0x3da0f107, 0x3d3bf7c4, 0x2a211d1b, 0x27745387, 0x289db3fd, 0x203de926, 0x0921c296, 0x71ce}}},
    /*  5*16^19*G: */
    {{{0x08c5a916, 0x2c8175cd, 0x35610f25, 0x17110354, 0x354aa13f, 0x2b318f6a, 0x1e9746b0, 0x1f4ff898, 0xfd5d}},
     {{0x3adb8bda, 0x052cdec1, 0x1cf6faab, 0x35ce052f, 0x07b52fe5, 0x10f299e7, 0x15b07d2b, 0x0fb43bad, 0x0dd8}}},
    /*  7*16^19*G: */
    {{{0x35f7529c, 0x17664258, 0x1bd51dd4, 0x1d96e62d, 0x34438138, 0x114f0cb4, 0x026122ba, 0x35042607, 0xde0d}},
     {{0x24cd88fe, 0x0f08300b, 0x09b77406, 0x224931a2, 0x3a357017, 0x042608b5, 0x2145f9b2, 0x1ba74428, 0xd70a}}},
    /*  9*16^19*G: */
    {{{0x38f76d11, 0x320bd234, 0x38515573, 0x044003ef, 0x0292a215, 0x16fbf0e7, 0x0f44e69c, 0x0822b693, 0xb26c}},
     {{0x23b7356b, 0x307002c7, 0x182624bd, 0x000c1967, 0x0d643305, 0x13a1f643, 0x1d33cf0c, 0x3e208252, 0x1f1c}}},
    /* 11*16^19*G: */
    {{{0x269e22db, 0x2538ec19, 0x39c8933f, 0x264ffd67, 0x0c294eac, 0x0ef4a406, 0x3f523a7e, 0x052e3f1f, 0xfceb}},
     {{0x1c2260a1, 0x3d5cb6c9, 0x24ebe4cb, 0x15439e4e, 0x1f0924ad, 0x22969d49, 0x2b8d1fcd, 0x1ace9035, 0x64aa}}},
    /* 13*16^19*G: */
    {{{0x238a2755, 0x3c2105e6, 0x149c5506, 0x1c869c59, 0x107faa53, 0x05d5dd2d, 0x15cac55c, 0x26988f33, 0x4e90}},
     {{0x23cca3de, 0x3de927d8, 0x229800ca, 0x3354e534, 0x3559dbb6, 0x091b7541, 0x235aecef, 0x36a1e333, 0xae56}}},
    /* 15*16^19*G: */
    {{{0x183ba64d, 0x20962566, 0x0c595a3a, 0x3983dde2, 0x0e40e2bd, 0x028517ae, 0x04c03bfb, 0x115708b8, 0xc367}},
     {{0x2a2181fd, 0x053323e5, 0x1778f146, 0x189aab28, 0x1964c742, 0x3839ba13, 0x36033080, 0x02b41a72, 0x3a52}}}
  },
  {
    /*  1*16^20*G: */
    {{{0x2037fa2d, 0x254f3234, 0x1bfdc432, 0x0fb23d5d, 0x3f410304, 0x0d21052e, 0x1d8d43d8, 0x1f782bf0, 0xe503}},
     {{0x1d755bda, 0x03977210, 0x0481f10e, 0x17d6c0fb, 0x190bddbd, 0x263427ee, 0x0d3b5f9f, 0x14d2eaa5, 0x4571}}},
    /*  3*16^20*G: */
    {{{0x177e7775, 0x222a29b8, 0x0ed95f63, 0x385564e2, 0x1291aeb5, 0x150eeb3d, 0x233cee58, 0x1a8ebfe5, 0x9d89}},
     {{0x3a056691, 0x3f3db4ea, 0x299253be, 0x26735fb8, 0x10927de8, 0x2593b5c9, 0x1bf0b94e, 0x2a790fd2, 0xdd91}}},
    /*  5*16^20*G: */
    {{{0x3c2a3293, 0x3f781378, 0x103476c5, 0x222e1bba, 0x02f4cd56, 0x2c295cca, 0x23792d0e, 0x2e3b9c45, 0x8327}},
     {{0x0e0df9bd, 0x2f215386, 0x2326a416, 0x2bf6ad3b, 0x39708496, 0x2cfa9989, 0x0a98e18b, 0x1f899bb8, 0x0499}}},
    /*  7*16^20*G: */
    {{{0x0562c042, 0x1086c9b1, 0x38dfb1a2, 0x0b48c8d2, 0x1a8ed609, 0x1998763e, 0x1b16897d, 0x0aaa8a9b, 0x5ae4}},
     {{0x0f79269c, 0x2417337e, 0x07cd8dbf, 0x3836e544, 0x389d4a94, 0x30777180, 0x3051eab5, 0x0e9f017f, 0x99d9}}},
    /*  9*16^20*G: */
    {{{0x1e85af61, 0x0d2204a1, 0x14ae766b, 0x23b5c8b7, 0x021b0f4e, 0x3ada3fdb, 0x1c8eb59a, 0x0eb909a8, 0x92c2}},
     {{0x036a2b09, 0x39c8d9a7, 0x2286fed4, 0x08eb60ad, 0x38d5792d, 0x085f571c, 0x11bb409f, 0x3e23c055, 0x414c}}},
    /* 11*16^20*G: */
    {{{0x07b5eba8, 0x38abc6cb, 0x118ea36c, 0x2afb71fe, 0x38df422d, 0x03d05dab, 0x3df1088d, 0x18231dab, 0xfee5}},
     {{0x0d0b9b5c, 0x3d4574da, 0x39054793, 0x203fd0af, 0x07c14ee3, 0x100be64a, 0x258afb11, 0x16644d3f, 0x3807}}},
    /* 13*16^20*G: */
    {{{0x3c63caf4, 0x078ee92c, 0x0f53d528, 0x23fceaca, 0x2a6afca2, 0x044ed318, 0x267e620a, 0x113ae4b9, 0x42e5}},
     {{0x169c29c8, 0x21ebb026, 0x3efc5f11, 0x29439eda, 0x015e7873, 0x3c88305d, 0x0c671f71, 0x15383e47, 0x9ff8}}},
    /* 15*16^20*G: */
    {{{0x1e0f09a1, 0x028af661, 0x14032838, 0x28427c6e, 0x300efef0, 0x25bb4a91, 0x32ce3839, 0x20ed9954, 0x7aed}},
     {{0x05857d73, 0x1176337a, 0x33f4a540, 0x22cbcc03, 0x032d8ed8, 0x2bf42ac4, 0x1ef7c7dd, 0x1517e68c, 0xf5b8}}}
  },
  {
    /*  1*16^21*G: */
    {{{0x24fce725, 0x1619a82b, 0x2a6c5b72, 0x3a36f471, 0x1771b4e7, 0x2a417a3c, 0x207adf5e, 0x1cac3d28, 0xe063}},
     {{0x0eee31dd, 0x09c0d3e5, 0x3104870b, 0x12129de1, 0x1a488cd7, 0x09eecab5, 0x18cfe12a, 0x225d2f38, 0x7a90}}},
    /*  3*16^21*G: */
    {{{0x1a328d6a, 0x2eaa0623, 0x1adc18bd, 0x135dcea5, 0x308fa7b2, 0x1a264616, 0x34e00a34, 0x3016e988, 0xc663}},
     {{0x3ec9b8c0, 0x0ec2edaa, 0x12bf9cc2, 0x21547a94, 0x171317dd, 0x2bf73c9d, 0x21c38d39, 0x3a6357dc, 0x3331}}},
    /*  5*16^21*G: */
    {{{0x3996de2f, 0x32472120, 0x0b25114b, 0x33b7cbb8, 0x0fe4e977, 0x2cc37ba8, 0x06a459ce, 0x09a0b7ee, 0xd3fc}},
     {{0x14526f8c, 0x31248907, 0x37abf168, 0x166d2637, 0x3781da4e, 0x2d1d5353, 0x30a18f68, 0x37e66917, 0xc4f0}}},
    /*  7*16^21*G: */
    {{{0x03e697ea, 0x31b12344, 0x05f83e85, 0x399e3ee6, 0x3fabd19c, 0x287fb268, 0x2c0237dc, 0x12d0ffac, 0xc17a}},
     {{0x1edc6c87, 0x3b8ee1f7, 0x39f02ab0, 0x38686d5f, 0x201fae96, 0x05e3dc65, 0x35954cae, 0x170b556a, 0x3935}}},
    /*  9*16^21*G: */
    {{{0x3163da1b, 0x0b4b0c08, 0x393a3118, 0x03b7b983, 0x011fde9a, 0x24d275ff, 0x390b468c, 0x22df2899, 0x8f61}},
     {{0x03bdd76e, 0x1fcc4844, 0x249b6e7c, 0x14319a8c, 0x2c5a4264, 0x2f69d35e, 0x3eb6eb5f, 0x0fc97c22, 0x7823}}},
    /* 11*16^21*G: */
    {{{0x0ec8ae90, 0x3a1643f8, 0x0bbc5dee, 0x2c9ae4ba, 0x03f1b8cf, 0x356e36b2, 0x21e6eb86, 0x303c56de, 0x9798}},
     {{0x252844d3, 0x2a6b0bab, 0x03188e27, 0x392596f4, 0x1c73bee2, 0x3b25253e, 0x02ed3dd2, 0x38aa9d69, 0xba40}}},
    /* 13*16^21*G: */
    {{{0x11d66b7f, 0x16865e3c, 0x187dc810, 0x29a49414, 0x1284757a, 0x3c6e42e2, 0x22d6747c, 0x1bb8fed6, 0xfdfa}},
     {{0x38e5178b, 0x2aa3e019, 0x3d78de9d, 0x11be7744, 0x1a18c4d8, 0x0307268f, 0x198db93c, 0x3cc78892, 0x4d9c}}},
    /* 15*16^21*G: */
    {{{0x1265bcf0, 0x201d5e12, 0x11c7d30b, 0x338ade10, 0x0f220e69, 0x3aa69187, 0x29e43add, 0x338e3788, 0xfd58}},
     {{0x2b996292, 0x0cf9ea73, 0x0f1cd1df, 0x0986ff8a, 0x05e4fb87, 0x20aae692, 0x3215bd53, 0x29794dd8, 0xffe0}}}
  },
  {
    /*  1*16^22*G: */
    {{{0x10559754, 0x02b5a423, 0x2a3f5854, 0x2c42f778, 0x0ce02204, 0x02efe770, 0x1d45358d, 0x1e9c5735, 0x213c}},
     {{0x34b458f2, 0x3fcb09d4, 0x36a7eedd, 0x12143d7c, 0x1ba190bb, 0x0eb41891, 0x06250701, 0x2b42d6b9, 0x4b6d}}},
    /*  3*16^22*G: */
    {{{0x1e05dccc, 0x0cb60046, 0x019a93e5, 0x0fe8fb53, 0x13d172ae, 0x1b825ae5, 0x1a030954, 0x3db85d4f, 0xb8ce}},
     {{0x0c6d5750, 0x0052833f, 0x26b68133, 0x1d5ff0da, 0x12bd99df, 0x3529d393, 0x09bbf6a4, 0x229829b3, 0x302b}}},
    /*  5*16^22*G: */
    {{{0x373bb31a, 0x16f7fb84, 0x3db97b48, 0x07dedad7, 0x3b5f4970, 0x282f78ba, 0x07385e02, 0x0cf9de6d, 0x03fb}},
     {{0x3d215c9e, 0x0d32f9a5, 0x07640d4e, 0x169f1db1, 0x3b572bc6, 0x30586aae, 0x2fe281e0, 0x36549523, 0xf36a}}},
    /*  7*16^22*G: */
    {{{0x1d9a4ab4, 0x16d457af, 0x15bb7c0a, 0x1f0db061, 0x0f7a3671, 0x05bded34, 0x03e1161f, 0x1f34427b, 0x4b17}},
     {{0x235ab6f7, 0x2ab77f91, 0x1741f558, 0x0df8957c, 0x226b486e, 0x23d9ca4d, 0x2fa65fda, 0x19ba6978, 0x3ec9}}},
    /*  9*16^22*G: */
    {{{0x301c23a4, 0x3d1beca6, 0x3a49cf56, 0x0a905611, 0x39cd75c2, 0x00e0a6e6, 0x27a06c2a, 0x00d481a8, 0x5e87}},
     {{0x10d986f9, 0x085e65ac, 0x24ccfda1, 0x05c761d2, 0x2c6e2da2, 0x1d5746b8, 0x09221e71, 0x1913bee7, 0x5b96}}},
    /* 11*16^22*G: */
    {{{0x007b0c66, 0x3cfcd748, 0x16c86fb1, 0x29ffb919, 0x2ceb7434, 0x08913d82, 0x1680a447, 0x30c064c3, 0xe545}},
     {{0x31f2d470, 0x21fd5f49, 0x35a239dd, 0x3960a386, 0x19bcbf97, 0x31bf68e5, 0x2955e7e5, 0x0d03a318, 0xe06a}}},
    /* 13*16^22*G: */
    {{{0x03648bba, 0x2960642e, 0x1c3c7444, 0x283c2c1a, 0x01b39882, 0x0fb8897c, 0x0f580a13, 0x10855e95, 0xb2a4}},
     {{0x00fb6452, 0x11bead28, 0x09c17bb2, 0x36154547, 0x3d7e31c0, 0x3ef25e3e, 0x366619e9, 0x17f0ada4, 0xfe4f}}},
    /* 15*16^22*G: */
    {{{0x2bab27d0, 0x3db748bb, 0x045103fc, 0x02d07e8b, 0x197007f7, 0x25c06463, 0x138651ba, 0x2383cf51, 0x1b90}},
     {{0x00d3d110, 0x07a19d79, 0x07e51b57, 0x2ef2a4d6, 0x3c4b9ab5, 0x15f24605, 0x26b5e6f3, 0x1897bb11, 0x9b6d}}}
  },
  {
    /*  1*16^23*G: */
    {{{0x08fbd53c, 0x0330e8ec, 0x1c62cddf, 0x20e31c2b, 0x019a87e2, 0x2e4d4a95, 0x0b34e8db, 0x09ca9ebd, 0x4e7c}},
     {{0x17dcaae6, 0x02ce5060, 0x3f7dd33e, 0x02e5852f, 0x2f681b53, 0x3f427db7, 0x10b18e16, 0x271d9b27, 0x1774}}},
    /*  3*16^23*G: */
    {{{0x2521b3ff, 0x38a61193, 0x1aa750ce, 0x0f01c5fa, 0x2e24a523, 0x1134afa6, 0x1455c75e, 0x138c0432, 0x0248}},
     {{0x0269da7e, 0x306b92e4, 0x23ac8bbc, 0x1c01b7a4, 0x2d0eebad, 0x30acf0ac, 0x3e30d07e, 0x34282a88, 0x9619}}},
    /*  5*16^23*G: */
    {{{0x004ba7b9, 0x25ade7ea, 0x0741751f, 0x35a91c0c, 0x2c954e20, 0x26dc359c, 0x2ce57ef7, 0x3149b3ed, 0x16c1}},
     {{0x1c5bd741, 0x1d6f8e94, 0x1c9a9cc4, 0x1d57006f, 0x0a94deec, 0x189d1672, 0x31439062, 0x1fdf0d00, 0xdb15}}},
    /*  7*16^23*G: */
    {{{0x236683fa, 0x20d921ea, 0x0ec0825e, 0x2086d4e0, 0x127b6695, 0x22739dd1, 0x131af87a, 0x0f35d4fe, 0x0397}},
     {{0x3f4a577f, 0x3d7ecadd, 0x3e981ded, 0x1e213863, 0x35a26cd7, 0x384ad8ca, 0x0a3a3643, 0x168b30c3, 0x38cf}}},
    /*  9*16^23*G: */
    {{{0x00bf6f06, 0x202ce667, 0x1043b571, 0x0f04cc89, 0x20576571, 0x3013d2c0, 0x0f1511c2, 0x26ee9cbb, 0xba6a}},
     {{0x381db551, 0x0cafbdc1, 0x0697aafe, 0x17453deb, 0x18bd8e9e, 0x082fcb95, 0x211b0320, 0x078e2cd2, 0x1377}}},
    /* 11*16^23*G: */
    {{{0x31231a43, 0x347be7c1, 0x1ad43b9f, 0x35453599, 0x1e442f44, 0x3b654193, 0x04dd2d8a, 0x2f3309f3, 0x35c5}},
     {{0x1620c8f6, 0x36dcb914, 0x23cf0ae7, 0x3de93301, 0x3a589d4c, 0x396082db, 0x346ce734, 0x1d5c8ee5, 0x0e36}}},
    /* 13*16^23*G: */
    {{{0x3dd40609, 0x3d02f15b, 0x181cd76b, 0x10642603, 0x08356ac7, 0x0bc4bf16, 0x186bca12, 0x27091715, 0xfd47}},
     {{0x2a64ca53, 0x378bc4d9, 0x21ca4739, 0x04ebb5c9, 0x1841fd91, 0x2b5e90f2, 0x0afeff2c, 0x33ed49a5, 0x3069}}},
    /* 15*16^23*G: */
    {{{0x2b799a7f, 0x36dc0bd4, 0x3b8e8424, 0x062db354, 0x2c7d544f, 0x363ae6bc, 0x0d864bde, 0x000a8eb3, 0x6c40}},
     {{0x13c81e32, 0x2d7320b3, 0x20483f68, 0x1eaf5320, 0x1ddcbdc0, 0x2e0da838, 0x235be690, 0x37054c2d, 0x95c2}}}
  },
  {
    /*  1*16^24*G: */
    {{{0x00fb27b6, 0x0909f8a1, 0x24305763, 0x1b8f6caf, 0x286aa5c7, 0x08e2b585, 0x38b1b10f, 0x138f6f9d, 0xfea7}},
     {{0x323cb96f, 0x0074f6df, 0x33f7b777, 0x1ad65ae5, 0x36af9312, 0x19d37b32, 0x313297cf, 0x1a36e6c2, 0x6e05}}},
    /*  3*16^24*G: */
    {{{0x3e889756, 0x37606ba6, 0x3004bb25, 0x1ed9265e, 0x1899f3f2, 0x3365ec9c, 0x1fea8226, 0x22f0cc84, 0x762e}},
     {{0x3ca6b774, 0x17896781, 0x084fa5e2, 0x1cb6cc52, 0x02e34719, 0x3313c526, 0x3e97c3c7, 0x250982bc, 0xc028}}},
    /*  5*16^24*G: */
    {{{0x0975d2ea, 0x1bdd7a5c, 0x014e8ea2, 0x14ab3e84, 0x08f4a91e, 0x26f6ec8c, 0x095348e1, 0x1f51f7d8, 0xdf07}},
     {{0x31936f95, 0x28f0b678, 0x3bdd277a, 0x07b16e13, 0x22527c8a, 0x21097262, 0x37f4424c, 0x1ea2003b, 0xf861}}},
    /*  7*16^24*G: */
    {{{0x3c4c92d7, 0x2e1247ee, 0x14391b45, 0x36d35bb9, 0x0b142935, 0x1f7aa0cd, 0x3da032e1, 0x1f5d62f4, 0x9f3e}},
     {{0x314906dd, 0x32eeff3e, 0x294e1186, 0x0a88c0f5, 0x2b150245, 0x18ac872e, 0x1466b588, 0x2107a9df, 0xecd2}}},
    /*  9*16^24*G: */
    {{{0x32a8c483, 0x2b835cca, 0x1040ac35, 0x12c32231, 0x39528117, 0x230f48bb, 0x0cf9edc3, 0x1e575ed7, 0xa0cc}},
     {{0x12cc6ba9, 0x0259d156, 0x36936055, 0x0d23c6f7, 0x31df786b, 0x1d3f25c8, 0x3873ee23, 0x0048be2c, 0xabc3}}},
    /* 11*16^24*G: */
    {{{0x05dd3aee, 0x1c3c6daf, 0x396d2f21, 0x054ea2a3, 0x2976ca13, 0x08aa6b1a, 0x3c7cce0e, 0x14294554, 0x6d1c}},
     {{0x3df597f7, 0x3b8d5393, 0x0ed53adf, 0x078c42aa, 0x07d47485, 0x09c8008a, 0x3dfdc977, 0x052381aa, 0xafff}}},
    /* 13*16^24*G: */
    {{{0x24a6d0bb, 0x1e32a6df, 0x1a1afdc6, 0x274c48bd, 0x26418f65, 0x069b62a2, 0x3f9f3f31, 0x075862e5, 0x5e5f}},
     {{0x1033eaf9, 0x1a0e11e4, 0x06f653a1, 0x1557cb94, 0x2721da72, 0x3daf3413, 0x3e6f7358, 0x140ac1a9, 0xd7b1}}},
    /* 15*16^24*G: */
    {{{0x0f005e3f, 0x36a6d791, 0x2c39bd2d, 0x3da38c6f, 0x01a1495a, 0x0f2e6b38, 0x2427fffd, 0x229acf05, 0xf813}},
     {{0x2f357eb7, 0x0b5f8080, 0x14be2134, 0x3b106f55, 0x25cb51f4, 0x005795ea, 0x0ebd9f9d, 0x23cefbed, 0xca75}}}
  },
  {
    /*  1*16^25*G: */
    {{{0x17bdde39, 0x0b00a910, 0x36043295, 0x11385e6d, 0x1968d315, 0x095c3566, 0x3cf0e10a, 0x1044fd9d, 0x76e6}},
     {{0x1901ac01, 0x12c5d4b4, 0x16d2032b, 0x0a8cf4ad, 0x01f0d35e, 0x019b5c1a, 0x295cf577, 0x37e37b93, 0xc90d}}},
    /*  3*16^25*G: */
    {{{0x0078ee8d, 0x3c142473, 0x06919442, 0x2fc83394, 0x1b4ff64e, 0x3dc98eaa, 0x1a9be25f, 0x15eb6167, 0xd08e}},
     {{0x2da63e86, 0x265fd370, 0x022ed9de, 0x0fbdf3e5, 0x3e6df412, 0x05cbb9d5, 0x088d72d6, 0x25e612ad, 0x852e}}},
    /*  5*16^25*G: */
    {{{0x029129ec, 0x164519c1, 0x24825481, 0x2b8eb3c7, 0x131d080c, 0x22fa03b3, 0x04d275f5, 0x30217935, 0x7da6}},
     {{0x2cd9ff0e, 0x2d42bb8a, 0x0ca586ae, 0x12302195, 0x1627bf04, 0x34081d24, 0x01857511, 0x051aee7d, 0xf498}}},
    /*  7*16^25*G: */
    {{{0x11654f22, 0x3e0f5255, 0x31aaee94, 0x3dfce508, 0x29d94fb2, 0x3a4006f9, 0x1be6e21b, 0x2433fd70, 0x90d0}},
     {{0x201a43e1, 0x3d77815d, 0x1a3f8740, 0x358d594f, 0x3f70336d, 0x3c08781a, 0x0f61a953, 0x26874aeb, 0xcd56}}},
    /*  9*16^25*G: */
    {{{0x076b19fa, 0x2dbbd947, 0x28819d71, 0x35b81b41, 0x21292ed9, 0x08b0c420, 0x1d1ecc73, 0x26161f3c, 0xda47}},
     {{0x326f5af7, 0x2a89bbac, 0x153fc206, 0x1ef44fa5, 0x16569ea6, 0x0da41df8, 0x0af01d17, 0x35de26f3, 0xebb1}}},
    /* 11*16^25*G: */
    {{{0x39135dbd, 0x364bed96, 0x1d8631ec, 0x3021ebce, 0x29897cf0, 0x1eabd60b, 0x1ee6ad81, 0x1d412a37, 0xe3e4}},
     {{0x0748045d, 0x241abcf9, 0x2c95da96, 0x2880bfd7, 0x383ffea5, 0x2320654a, 0x3c6c40b9, 0x16fe0272, 0x930a}}},
    /* 13*16^25*G: */
    {{{0x0dee455f, 0x2fc2e797, 0x0ce4075c, 0x19fff9ba, 0x0bdb4aff, 0x114ce3e0, 0x0a9b0a47, 0x195bfa1c, 0x7e8c}},
     {{0x171b9cba, 0x1cf7a660, 0x2f466271, 0x28b459d1, 0x03a53b4a, 0x3dd83d20, 0x0740f2a3, 0x318cb28c, 0xbddd}}},
    /* 15*16^25*G: */
    {{{0x2698b59e, 0x1de5ae6d, 0x13447a43, 0x0cd64962, 0x23c7260a, 0x2c0d6acf, 0x15eb15be, 0x107e246a, 0x3df8}},
     {{0x2b92baf5, 0x33e399e5, 0x14949f8b, 0x3f219ec8, 0x1cf3867b, 0x0aeba3c4, 0x090c1da0, 0x39b7e62c, 0xb38f}}}
  },
  {
    /*  1*16^26*G: */
    {{{0x2bcbb891, 0x2ac54090, 0x326cbee3, 0x1f3190f7, 0x3f8f9a8f, 0x206ea9d0, 0x2abe1e82, 0x315ac0ec, 0xc738}},
     {{0x299a84c3, 0x1f9cd765, 0x080cfe91, 0x0c53bbde, 0x3fbbbb82, 0x063cbab2, 0x2d2537f7, 0x2d5e2546, 0x893f}}},
    /*  3*16^26*G: */
    {{{0x0761d58d, 0x12eabcce, 0x0d60e2f3, 0x1326f902, 0x20df7aca, 0x09028d5c, 0x3614610a, 0x1849e08f, 0xb8c4}},
     {{0x1d1051a4, 0x0e3a82ea, 0x2107c5b6, 0x1d411e17, 0x33c5053f, 0x1163da5f, 0x0e37d14a, 0x365b145c, 0x8f9e}}},
    /*  5*16^26*G: */
    {{{0x050b0040, 0x36c2cc10, 0x0134adc2, 0x3d1f6e7c, 0x1a3671f3, 0x03264ffa, 0x271f7a35, 0x1ba7dc40, 0x08d5}},
     {{0x1b3fd0a1, 0x163899e9, 0x21782beb, 0x35f11c83, 0x39b285f6, 0x34542a35, 0x29aa21ff, 0x216baf42, 0xa121}}},
    /*  7*16^26*G: */
    {{{0x13573b7f, 0x15958f7c, 0x30b6270f, 0x268717b4, 0x265a3788, 0x083e5def, 0x3ce6341e, 0x3c8cb50b, 0xdc13}},
     {{0x0c1f2ba6, 0x0ab348a1, 0x3404b1c4, 0x11551c05, 0x290a7670, 0x10436a12, 0x2340c3c7, 0x2ea010a7, 0xc909}}},
    /*  9*16^26*G: */
    {{{0x07ae9ceb, 0x00bd642e, 0x0ef2d14b, 0x1b087a9c, 0x2119a822, 0x0655976c, 0x37f073af, 0x0b798077, 0x25c0}},
     {{0x0bc6e275, 0x1c24344d, 0x26587264, 0x319077c2, 0x2d11d537, 0x2138373e, 0x2383c0c8, 0x3ab4b204, 0x8a9f}}},
    /* 11*16^26*G: */
    {{{0x2c5a3c34, 0x3e0263db, 0x15949fe1, 0x33a0b00a, 0x2e3e58ae, 0x2e7d329e, 0x0e49ce8a, 0x2746cb3e, 0xfedd}},
     {{0x213d7714, 0x0ad52fd3, 0x1bf82976, 0x2bad51a6, 0x0f4b00ad, 0x3a14c4b2, 0x3b8e0b0b, 0x0930c614, 0xa52e}}},
    /* 13*16^26*G: */
    {{{0x2ab6a396, 0x2d395346, 0x11360769, 0x0086e468, 0x0488b373, 0x38b5fd7a, 0x2a48c2de, 0x0ca1af1b, 0x3e0e}},
     {{0x1980e27e, 0x3acc7923, 0x3468f6a2, 0x2c04107c, 0x053fc66a, 0x07f877ad, 0x337964f3, 0x205cbe8e, 0xca44}}},
    /* 15*16^26*G: */
    {{{0x341023ec, 0x2bcd6188, 0x3ecf570a, 0x11763ddb, 0x02b9af56, 0x0b808026, 0x32d28498, 0x2e4c2030, 0x344a}},
     {{0x1e1eeb87, 0x13e260a4, 0x03995d70, 0x13a5dabf, 0x114c5ffc, 0x23cb47a9, 0x0462a73f, 0x0ac10ac9, 0x6e1c}}}
  },
  {
    /*  1*16^27*G: */
    {{{0x08f6c14b, 0x1cba7d96, 0x29250143, 0x35cb97ce, 0x172877d1, 0x131d8df2, 0x25b81e26, 0x1899522d, 0xd895}},
     {{0x1d7d991f, 0x24d8fb5d, 0x3b067e17, 0x10a358ca, 0x0340eb03, 0x3b182063, 0x07eae728, 0x2a8e3caf, 0xfebf}}},
    /*  3*16^27*G: */
    {{{0x2127b756, 0x02ea1ffd, 0x3a097048, 0x10a2f92a, 0x20b41603, 0x0d8b6941, 0x1f12672d, 0x1e0bdc5b, 0x6d8c}},
     {{0x3f172571, 0x1547dd2a, 0x17cdcca6, 0x0ea9b68b, 0x134daf4e, 0x26a0b4db, 0x1b911145, 0x37c225bf, 0x99ae}}},
    /*  5*16^27*G: */
    {{{0x358cf17a, 0x37b869cd, 0x18823524, 0x3e1772e9, 0x0097f8f1, 0x166bbc6d, 0x37aca8d0, 0x2fb7656f, 0xebca}},
     {{0x1caa0ccd, 0x11b3717d, 0x0ace95c4, 0x3eb484b4, 0x032e6b10, 0x00286d9f, 0x2b9cb02c, 0x3383e3c8, 0x47d3}}},
    /*  7*16^27*G: */
    {{{0x2c855c5b, 0x33bb9456, 0x17c8afbb, 0x21588680, 0x17fc2811, 0x0c68da78, 0x0ce24453, 0x134b92f5, 0xe8df}},
     {{0x2e465650, 0x27579cb0, 0x21e4d7d5, 0x18ed57c7, 0x2f32c596, 0x136d3d67, 0x39b26444, 0x3f5c311f, 0x6c57}}},
    /*  9*16^27*G: */
    {{{0x12e7e454, 0x023d6f69, 0x30e6150d, 0x0cbbfbc3, 0x181662fe, 0x121808ea, 0x0a832912, 0x34f5c63b, 0x4068}},
     {{0x18ef191e, 0x1e6b3797, 0x3c373327, 0x23487b44, 0x1d38d198, 0x305165f6, 0x247aab9e, 0x14edc952, 0x8cd8}}},
    /* 11*16^27*G: */
    {{{0x06c5d939, 0x215eb7e1, 0x3a933de0, 0x1d68a1de, 0x0a027ea4, 0x2fccb983, 0x025e0b55, 0x03b36c76, 0x1255}},
     {{0x19e757c9, 0x0a9d3f15, 0x0d8d4319, 0x22dd07fb, 0x324a7283, 0x2390f05d, 0x2d7a7544, 0x20cd3e1c, 0x7b8f}}},
    /* 13*16^27*G: */
    {{{0x16c8a56f, 0x2342ab19, 0x0f374213, 0x024f150d, 0x3ad08f85, 0x2eded4eb, 0x185d4c69, 0x19c6b0ed, 0x944d}},
     {{0x1a7be289, 0x27d37197, 0x106517eb, 0x35305d37, 0x3ac61967, 0x10e4d84c, 0x01fff4c1, 0x1965ded4, 0xa710}}},
    /* 15*16^27*G: */
    {{{0x2e08f15a, 0x3bae2862, 0x012900ba, 0x1a795b72, 0x13c305fd, 0x2c0d956b, 0x19a0cfe6, 0x13a47342, 0x86a5}},
     {{0x01388308, 0x1493479f, 0x335254d3, 0x04a74496, 0x35686777, 0x0aa341b5, 0x384603a7, 0x18520de9, 0xcfee}}}
  },
  {
    /*  1*16^28*G: */
    {{{0x0f676e03, 0x24542959, 0x3e84edd4, 0x3ff1cda4, 0x1e8761ce, 0x3d90cd5c, 0x17518eb0, 0x2500caa5, 0xb8da}},
     {{0x0efdf6e7, 0x1223939d, 0x1ff3b511, 0x33161365, 0x2808b092, 0x267325d8, 0x1a1e4d7c, 0x37e91201, 0x2804}}},
    /*  3*16^28*G: */
    {{{0x06e1346b, 0x28661277, 0x05af1c5e, 0x2f9ec40e, 0x1152c05a, 0x31d87c53, 0x2d10be54, 0x1a3fc260, 0x0690}},
     {{0x17226c13, 0x2ed62953, 0x0c6026e7, 0x3da24e65, 0x06442aa4, 0x176caf42, 0x3de26da8, 0x38f8242f, 0xb863}}},
    /*  5*16^28*G: */
    {{{0x1ca1f6a1, 0x039a47f3, 0x08cff1a3, 0x232f450d, 0x286ce106, 0x1b7172c7, 0x19761528, 0x0d24f2c9, 0x898c}},
     {{0x164f647c, 0x12b7083c, 0x32bd79ca, 0x29f3e5e7, 0x2c6e93b2, 0x1150914a, 0x2a5549d8, 0x1661aad5, 0x75f7}}},
    /*  7*16^28*G: */
    {{{0x3d1e3998, 0x29a780f0, 0x3a04328a, 0x15b22e45, 0x2a274e5e, 0x0a675c08, 0x18bf01a5, 0x38bfb4a4, 0xb213}},
     {{0x325fb81e, 0x30b2f718, 0x3ded175e, 0x0d0596fa, 0x243bc3d5, 0x187afe0e, 0x13c12c3d, 0x23b083cb, 0x229f}}},
    /*  9*16^28*G: */
    {{{0x225be234, 0x02f87fb2, 0x1df35070, 0x20f8f9c3, 0x206e060e, 0x342e9a45, 0x3f93e5d1, 0x0eb605b1, 0x4b3b}},
     {{0x120e8362, 0x18edf80e, 0x3211b840, 0x39ff64b3, 0x0cc04c41, 0x17a5b7f6, 0x2bc9c787, 0x008ee176, 0x5eec}}},
    /* 11*16^28*G: */
    {{{0x2289f55e, 0x2598d29f, 0x2c76707b, 0x1dac3c38, 0x0965be29, 0x0946c09e, 0x04f96020, 0x222db76c, 0x9f7b}},
     {{0x3e1e4bde, 0x0f34ed97, 0x310a2b1b, 0x394db83a, 0x0fc71fc0, 0x051ad0a6, 0x010f7be3, 0x3de131c1, 0x32f9}}},
    /* 13*16^28*G: */
    {{{0x1dfe1d2b, 0x19527230, 0x16878e51, 0x24fd4279, 0x3b73a4c4, 0x332b7f4f, 0x048e3e76, 0x10fa72dd, 0xd58a}},
     {{0x0cd50922, 0x33c9e56e, 0x0bd6fbff, 0x366e8857, 0x28276b54, 0x1ca44ca0, 0x083cf10a, 0x219ae816, 0xfc17}}},
    /* 15*16^28*G: */
    {{{0x249c795e, 0x090546f8, 0x1ce805e1, 0x1101aaa6, 0x27ea4eed, 0x365a70f0, 0x18310cd6, 0x1c4e5c44, 0x21d2}},
     {{0x19208ece, 0x0004bb0e, 0x2dfb761b, 0x1c651292, 0x2bb4c3d6, 0x0d6e1548, 0x1acea177, 0x3e6d2c1d, 0x94c5}}}
  },
  {
    /*  1*16^29*G: */
    {{{0x23c0df5d, 0x06845de3, 0x156a792f, 0x067bfed4, 0x1d7fab20, 0x2b6ae51d, 0x3b33a7d8, 0x3a851107, 0xe80f}},
     {{0x2ac9ec78, 0x32d0a46d, 0x3322ea9f, 0x0557a02b, 0x0a94472d, 0x25da328f, 0x200771e8, 0x379fd8e3, 0xeed1}}},
    /*  3*16^29*G: */
    {{{0x17592d55, 0x300d67b3, 0x0e350192, 0x356e51d0, 0x3ce3b106, 0x3fbda58c, 0x1052608a, 0x31b6f128, 0x5d2e}},
     {{0x2f5183a7, 0x19b9743a, 0x11151742, 0x0a9ef36b, 0x0cd6950e, 0x1c43e89a, 0x245eb58f, 0x337e271b, 0x0a92}}},
    /*  5*16^29*G: */
    {{{0x3e8f9f5c, 0x247d2d27, 0x1880a519, 0x187c7856, 0x1f404d73, 0x32b8d085, 0x3f742fe2, 0x0770ec46, 0xac37}},
     {{0x325a503c, 0x1ea0ffcc, 0x2751e1d1, 0x254d163b, 0x14e73522, 0x04079cc9, 0x1a477ff2, 0x05b061c2, 0xc516}}},
    /*  7*16^29*G: */
    {{{0x19e33446, 0x12872354, 0x2af385df, 0x224ef114, 0x22a17a40, 0x2302f408, 0x1840c934, 0x000e853c, 0x8942}},
     {{0x26387689, 0x034e2803, 0x1e74f984, 0x3f5dcd9e, 0x3de4e06b, 0x2cb5b43b, 0x1077a4d8, 0x00e56569, 0xa9fd}}},
    /*  9*16^29*G: */
    {{{0x3913cb26, 0x35ca3256, 0x13bd6d03, 0x3ad06700, 0x105c9899, 0x36913fd5, 0x342a8a2c, 0x099acc28, 0x2770}},
     {{0x3348a7a2, 0x3f9c5ccf, 0x0815bebb, 0x103246f3, 0x32b324e9, 0x0b49341f, 0x0db1a555, 0x2f179e6c, 0xf649}}},
    /* 11*16^29*G: */
    {{{0x195e8247, 0x02aa8085, 0x286cd1af, 0x2ff71155, 0x38ba9097, 0x179b8073, 0x3ed2178e, 0x3434e0f2, 0x75e4}},
     {{0x19982d22, 0x288ff675, 0x29ad893c, 0x36ad6dba, 0x3726d47d, 0x3e5c3b1e, 0x10990741, 0x10a85d50, 0x1fce}}},
    /* 13*16^29*G: */
    {{{0x26333323, 0x11e7d136, 0x0f4abf47, 0x2eef071a, 0x04da849c, 0x08358166, 0x1bbf03f0, 0x2d8e0cd8, 0x3ed1}},
     {{0x35d61ba3, 0x2c4ff122, 0x378f7294, 0x2dca2842, 0x0f929ea9, 0x1f2625a2, 0x34ee75d9, 0x0b6922d6, 0xd84f}}},
    /* 15*16^29*G: */
    {{{0x333980bf, 0x09415f52, 0x0dd00baf, 0x28dc0b94, 0x08dd4368, 0x1bf5dc8d, 0x18181b84, 0x34bc1a9d, 0x70fd}},
     {{0x20b75785, 0x0bbaa33a, 0x1d74a561, 0x040d60e1, 0x2e596b0a, 0x29043447, 0x18696957, 0x32b03435, 0x5edf}}}
  },
  {
    /*  1*16^30*G: */
    {{{0x04e16070, 0x3701eef3, 0x2fd6915d, 0x286080c7, 0x167543f2, 0x29239475, 0x1704313b, 0x1a5ef7f3, 0xa301}},
     {{0x1e177ea1, 0x30346810, 0x0a11a130, 0x0d76fdf0, 0x140f9b17, 0x2027e897, 0x3e4f5081, 0x3e473ed9, 0x7370}}},
    /*  3*16^30*G: */
    {{{0x138011fc, 0x1c049c00, 0x17285626, 0x165a99eb, 0x200a4d83, 0x2c4cc208, 0x1eb11156, 0x04e8c205, 0x6e83}},
     {{0x3f15ab7d, 0x2b2da7e8, 0x1c51f9a6, 0x2be456ba, 0x1ac30426, 0x04b6c807, 0x0f204c1a, 0x2062f709, 0xc147}}},
    /*  5*16^30*G: */
    {{{0x100e6ba7, 0x0e9d26e3, 0x0916f7f5, 0x0dbb16d1, 0x19e1b43d, 0x0780e293, 0x0851f2bd, 0x2a4265e1, 0xf952}},
     {{0x0175e4c1, 0x36ebbb94, 0x062a2b98, 0x15c59ed3, 0x3fa0f655, 0x0dda8b89, 0x3cebf861, 0x0e96c22a, 0xd8a9}}},
    /*  7*16^30*G: */
    {{{0x03aa0e93, 0x2401968a, 0x2fb1f626, 0x0b8e50eb, 0x1e893a8f, 0x00c68676, 0x3fee7504, 0x1b578c74, 0x9401}},
     {{0x07addac2, 0x23bb49a2, 0x257b07a3, 0x210dceea, 0x2e6fd7f4, 0x1574d53b, 0x14d96403, 0x0cbb9711, 0x6750}}},
    /*  9*16^30*G: */
    {{{0x0266b17b, 0x03d218b8, 0x262bb32b, 0x0d5a2880, 0x1f09c202, 0x25e211aa, 0x3b2891bb, 0x345d3567, 0xef22}},
     {{0x39dac83e, 0x0a9b810d, 0x1c341b73, 0x39c9dbdc, 0x34a1073e, 0x27330eb8, 0x24c7568f, 0x21325eac, 0xbc57}}},
    /* 11*16^30*G: */
    {{{0x12d382a0, 0x0c4c056a, 0x2ecd9ae2, 0x2372ef38, 0x2df927f2, 0x2b31e02c, 0x3892d39c, 0x3bf3933a, 0xb5f7}},
     {{0x25b4b532, 0x28bc2aee, 0x1acf8c5b, 0x3ec25b4a, 0x0bddd371, 0x255f1b83, 0x3f2353c0, 0x1516d470, 0x6843}}},
    /* 13*16^30*G: */
    {{{0x012cffa5, 0x39a49191, 0x28cc5c47, 0x3b508219, 0x14624389, 0x1d5363ef, 0x31076408, 0x30f4acb9, 0x1cdd}},
     {{0x1521954e, 0x379b6273, 0x336b528a, 0x0726109a, 0x02b08ac4, 0x2c49afe5, 0x1f8a63fd, 0x1a832cbc, 0x1e47}}},
    /* 15*16^30*G: */
    {{{0x34a9f22f, 0x0d7f90e4, 0x17a8e2ad, 0x02067148, 0x0835b0cc, 0x3e2e2e52, 0x0e939f21, 0x2cd67c97, 0x2acc}},
     {{0x375c4927, 0x2dd772ce, 0x1ba550b7, 0x12f5efb1, 0x30edf115, 0x04e8dfb7, 0x2d2e5192, 0x293a5622, 0xd518}}}
  },
  {
    /*  1*16^31*G: */
    {{{0x3fb04ed4, 0x2deb18f8, 0x1307fffa, 0x330cc2c4, 0x278de208, 0x3e741449, 0x2b936463, 0x216ce275, 0x90ad}},
     {{0x0b6ef150, 0x24753523, 0x182894d9, 0x2bbeaf85, 0x3222b839, 0x372f6509, 0x38261aff, 0x1e8d8828, 0x0e50}}},
    /*  3*16^31*G: */
    {{{0x30b7b678, 0x09d76cce, 0x0f638166, 0x0f10c46f, 0x2b6c76f1, 0x21af2909, 0x0231ba19, 0x125ccd39, 0x186e}},
     {{0x38d91fc1, 0x1e81dbcb, 0x09535dca, 0x01dc8951, 0x37e67e11, 0x3f209702, 0x3bd84aa7, 0x18392601, 0xc0d4}}},
    /*  5*16^31*G: */
    {{{0x33421fb8, 0x3c1b972e, 0x35a55d0c, 0x125c7cbb, 0x37241298, 0x01acd30e, 0x1bf62e7e, 0x2360d3db, 0x061c}},
     {{0x0e3ccd80, 0x257bd9a1, 0x26fcdd29, 0x19c4d2ce, 0x05eb5c80, 0x0e496438, 0x3b4b7ba9, 0x1ab66400, 0x6dfc}}},
    /*  7*16^31*G: */
    {{{0x2f6b35a4, 0x0492f862, 0x327fb487, 0x27cde9aa, 0x3a68ad88, 0x18c901cc, 0x2e513b73, 0x2d8e8823, 0xf6a6}},
     {{0x01f422a6, 0x2badbfb2, 0x1ee1862c, 0x355d5b9d, 0x20186f19, 0x34dc13d5, 0x1138b1ca, 0x322a000b, 0x3df7}}},
    /*  9*16^31*G: */
    {{{0x26954c11, 0x25a08fa2, 0x160d018b, 0x2a290f05, 0x0778ff7f, 0x346c3c54, 0x2c376220, 0x3f0a30a1, 0x87a2}},
     {{0x272a8b45, 0x15b8ccb8, 0x278124b7, 0x1224cfca, 0x127532cc, 0x06523683, 0x2ecef97b, 0x1462d16a, 0x33ad}}},
    /* 11*16^31*G: */
    {{{0x22706ab6, 0x391d1cab, 0x2e53c0da, 0x02cd0774, 0x384cfe3c, 0x15bbf2f0, 0x081a6845, 0x0b811b9e, 0xe147}},
     {{0x1d58de05, 0x1ba1a85a, 0x13cd2753, 0x16275551, 0x0621f8aa, 0x1a465e32, 0x18fc683f, 0x24aa91f1, 0x82cd}}},
    /* 13*16^31*G: */
    {{{0x07a84fb6, 0x2feb9508, 0x3a15021e, 0x08da1d43, 0x08b9ebc4, 0x2d358079, 0x0aef5de8, 0x24b2013e, 0x1caf}},
     {{0x27149109, 0x1ac60640, 0x22ce6761, 0x07305a5a, 0x101622ec, 0x2993e3fc, 0x2e53a481, 0x2e16b25d, 0xbc24}}},
    /* 15*16^31*G: */
    {{{0x0a955911, 0x1da33f85, 0x0ded52db, 0x1f85a898, 0x17839710, 0x27bfa6cf, 0x1650d258, 0x3f5a6bc2, 0x705b}},
     {{0x3fd200e4, 0x2edf1a4f, 0x242e72d8, 0x1fced48a, 0x0051fa29, 0x18f607d5, 0x3f990a7e, 0x2904c2dc, 0xe14a}}}
  },
  {
    /*  1*16^32*G: */
    {{{0x1ec4c0da, 0x2ded1132, 0x23ea3351, 0x23159e1c, 0x1f162ee8, 0x2706b660, 0x35f33923, 0x2e74bd8e, 0x8f68}},
     {{0x101fff82, 0x08f2fde5, 0x1510bfdf, 0x3a8b3fa5, 0x3e215dbb, 0x36430ada, 0x23986de1, 0x27cb6e81, 0x662a}}},
    /*  3*16^32*G: */
    {{{0x123809fa, 0x238ae3b7, 0x1d954be1, 0x21172cd4, 0x051f08fd, 0x24cd8fc9, 0x09f228ba, 0x076f8b94, 0x3838}},
     {{0x331fed52, 0x35c1d460, 0x2d8f24db, 0x207f32cc, 0x0eb1cc36, 0x10169548, 0x117dcb09, 0x0b4283ee, 0xe4a3}}},
    /*  5*16^32*G: */
    {{{0x17c2a310, 0x3a909922, 0x01226303, 0x21aba950, 0x0699a1f1, 0x086e0aa9, 0x32ae6f69, 0x09c9390d, 0x4926}},
     {{0x1e27ded0, 0x3106da05, 0x35ff8ce0, 0x058d84a9, 0x14303b6d, 0x33e95a5c, 0x3abf95a2, 0x39dcef29, 0x1337}}},
    /*  7*16^32*G: */
    {{{0x0ebd2d31, 0x0e12c1e7, 0x306db8d1, 0x330695bf, 0x37e2f84d, 0x094ecf91, 0x00c90d5e, 0x15a30689, 0xe306}},
     {{0x12546e44, 0x24ad020e, 0x23738266, 0x2f2010af, 0x3d0db6ff, 0x3cac41fd, 0x34260888, 0x1bf8de24, 0x0eac}}},
    /*  9*16^32*G: */
    {{{0x363136b0, 0x14c30e78, 0x2b41dd9c, 0x3afe366a, 0x3bd63374, 0x2c39d88f, 0x0cefc271, 0x0403890a, 0x3b9e}},
     {{0x2cdbbc8a, 0x14fb05bd, 0x2d31f819, 0x2b8a28ce, 0x075b26a2, 0x14cfae3d, 0x2bb71df1, 0x26054b45, 0xfafb}}},
    /* 11*16^32*G: */
    {{{0x2f485d3f, 0x1823c11c, 0x107beee9, 0x3281da20, 0x1edef717, 0x1b2a03d7, 0x2c9a92b7, 0x2b525c4a, 0xbb0a}},
     {{0x3ca2f975, 0x1e4e4940, 0x1670bffe, 0x1696be8c, 0x17da3489, 0x34807dca, 0x354798ec, 0x2714f160, 0xea69}}},
    /* 13*16^32*G: */
    {{{0x36718dc9, 0x2bbb4ce8, 0x01123de4, 0x3962d36c, 0x3e0113e1, 0x23ac65eb, 0x2fcc0d4e, 0x02b2393b, 0x7909}},
     {{0x1cfae7c5, 0x18cc8ac4, 0x3a9008b9, 0x0dabedc2, 0x1aaa56dd, 0x205b2f36, 0x05b8f13d, 0x1c8ae464, 0xeaab}}},
    /* 15*16^32*G: */
    {{{0x3f60c7d1, 0x09a5a531, 0x1775ad2a, 0x35c779f3, 0x09ba668d, 0x0f6ef395, 0x17b551c0, 0x206b7a7e, 0xe77c}},
     {{0x02d72449, 0x3b1607ca, 0x02986d34, 0x051c3dc7, 0x28154363, 0x30ecc8fa, 0x01321c5f, 0x051e3bbe, 0x3acf}}}
  },
  {
    /*  1*16^33*G: */
    {{{0x13231e11, 0x1a1bf541, 0x3681e3e6, 0x123a1940, 0x0c36091f, 0x267fe466, 0x385d65ff, 0x3ec05dab, 0xe4f3}},
     {{0x2feb73bc, 0x08b0e15d, 0x151d1c98, 0x31f9d3b2, 0x02b7286c, 0x069b43a8, 0x34f1c166, 0x18ceb43b, 0x1e63}}},
    /*  3*16^33*G: */
    {{{0x2bf05bd6, 0x0e67c139, 0x12a99465, 0x3d5b80c8, 0x070deca2, 0x0bd47fad, 0x04fe9083, 0x0c906fb9, 0x900c}},
     {{0x300d358b, 0x394ab4ef, 0x04efb15d, 0x2614d60f, 0x0b2439d6, 0x31c8115c, 0x1f0f5f95, 0x3e7a3a2c, 0x6c31}}},
    /*  5*16^33*G: */
    {{{0x1f105c50, 0x29f0a332, 0x31385257, 0x3837bbde, 0x0233cd82, 0x2330d00f, 0x190aad62, 0x00d8aac1, 0x5a8d}},
     {{0x38a4cde9, 0x326c8060, 0x2d013c35, 0x017da299, 0x03ff74a6, 0x29adc905, 0x0e536936, 0x3aac44f5, 0xc059}}},
    /*  7*16^33*G: */
    {{{0x32d64feb, 0x11f862e6, 0x292292c6, 0x1cbe2964, 0x0ba4e837, 0x3ce95ddb, 0x2f60a48e, 0x1340c48c, 0xd93f}},
     {{0x34698359, 0x2c3ef564, 0x2c90da37, 0x3810c2fb, 0x1c8c4d93, 0x1cc47153, 0x32733a23, 0x15575172, 0x7925}}},
    /*  9*16^33*G: */
    {{{0x039fbc84, 0x08881335, 0x057a0167, 0x1c18a458, 0x2ac65b7e, 0x138af198, 0x328441b1, 0x1a71b8db, 0x2f07}},
     {{0x1c201bec, 0x3ee40b78, 0x04dd5d73, 0x29e6da93, 0x0e2149cc, 0x37c01e64, 0x3bdddfa5, 0x3cdc935c, 0xb434}}},
    /* 11*16^33*G: */
    {{{0x06a758ea, 0x14dfab32, 0x27f19c4d, 0x0620c624, 0x016e3991, 0x1a256855, 0x20309958, 0x19e01567, 0xfe7e}},
     {{0x1b7ab649, 0x13c8b657, 0x03120d1e, 0x2005c1d1, 0x09251f3b, 0x02385a61, 0x1dcb988c, 0x1a59e8a0, 0x38aa}}},
    /* 13*16^33*G: */
    {{{0x0cfffefa, 0x39c5589a, 0x0651afad, 0x060113dc, 0x03af8510, 0x3dbe4543, 0x03127d6d, 0x3d729d4e, 0x91ba}},
     {{0x1f7f6faf, 0x1f4dbcd3, 0x2fd303dc, 0x2fbcc439, 0x1d3d92f4, 0x25a7c49f, 0x3bcebe5d, 0x33c464d1, 0x04e5}}},
    /* 15*16^33*G: */
    {{{0x0d33c546, 0x3f0245fa, 0x05edaf32, 0x15d7ecca, 0x35ddd782, 0x314dcf83, 0x378a7cb2, 0x104872cf, 0x4458}},
     {{0x000b4fd4, 0x029b461c, 0x32ca7366, 0x0bc28f3e, 0x1ada2085, 0x097ab8e4, 0x0753a772, 0x24ddfcfe, 0x308d}}}
  },
  {
    /*  1*16^34*G: */
    {{{0x20eae29e, 0x1bedbab8, 0x14e1d071, 0x00d3cbc3, 0x1a4266c7, 0x1854de91, 0x3f331eb9, 0x3ea6c63a, 0x8c00}},
     {{0x2702414b, 0x1f4a9319, 0x1e36c54e, 0x3eb6bea0, 0x36c974c2, 0x30d0e8dc, 0x121a1a9d, 0x1c99ffa9, 0xefa4}}},
    /*  3*16^34*G: */
    {{{0x2bfd913d, 0x0fe5580f, 0x254c9eac, 0x29a039bb, 0x2a8d2050, 0x01e82130, 0x3ddf874d, 0x0aa9fa41, 0x3636}},
     {{0x052e243d, 0x113e6bab, 0x2b2faafc, 0x0c2ec435, 0x1a2a82d8, 0x18910dc3, 0x0afd5341, 0x1e19db2e, 0x48f2}}},
    /*  5*16^34*G: */
    {{{0x2d132896, 0x32aeafe6, 0x3bc6c967, 0x2c78eead, 0x19200dfc, 0x16b658b7, 0x21e02f29, 0x25db7cca, 0x4487}},
     {{0x2f685248, 0x23006c4a, 0x276aa7a4, 0x2d035698, 0x161a3306, 0x26a41dd1, 0x1afe1efc, 0x16183445, 0x27bd}}},
    /*  7*16^34*G: */
    {{{0x3fa2670c, 0x02055bda, 0x06273e6e, 0x003e0ae8, 0x35032474, 0x2a72aa0c, 0x383788b6, 0x0eb0a2f2, 0x4a4d}},
     {{0x16c1764d, 0x022e7ff7, 0x329beed8, 0x0c16532f, 0x302b9d49, 0x1dc4777b, 0x05a4f17e, 0x2e470061, 0x70ab}}},
    /*  9*16^34*G: */
    {{{0x0cb24aa7, 0x365abf89, 0x1345c530, 0x0c42318e, 0x38fe1890, 0x39bf627f, 0x11802c3a, 0x0b4642ba, 0x5f7b}},
     {{0x0a693d7d, 0x35e01d0d, 0x3c81d0c6, 0x237adc24, 0x267c47ce, 0x0fe028f3, 0x1f2b330a, 0x0d80313f, 0x0770}}},
    /* 11*16^34*G: */
    {{{0x2f7fb8bd, 0x0646f17c, 0x3e4090a4, 0x31192857, 0x0886d87b, 0x30939b65, 0x190d02ae, 0x1d144ce7, 0x5139}},
     {{0x03908c0f, 0x0252b0b6, 0x3f98d5a8, 0x3f0cb4f8, 0x015c47fa, 0x23fbf6ba, 0x03bf34b8, 0x050f91d9, 0xfcd7}}},
    /* 13*16^34*G: */
    {{{0x2e36ca73, 0x0add2457, 0x3bbf3ede, 0x321934da, 0x014887ea, 0x0a444afc, 0x3dfb8aa4, 0x05b58afe, 0xcf83}},
     {{0x2ec25534, 0x2d248650, 0x08d710f5, 0x25856636, 0x1cca681c, 0x11142243, 0x19d73e38, 0x2d637ad7, 0x09fe}}},
    /* 15*16^34*G: */
    {{{0x3752f97d, 0x3224df5a, 0x33476613, 0x0bbef1d7, 0x0fa6165a, 0x274a19a3, 0x3b49de53, 0x37a69312, 0x8610}},
     {{0x1f1b1af2, 0x015f7350, 0x05543e08, 0x2ad367d5, 0x33f99e57, 0x33666c94, 0x30bbc937, 0x25e80ad8, 0xd319}}}
  },
  {
    /*  1*16^35*G: */
    {{{0x20cb3e41, 0x25ff77f1, 0x08b92c09, 0x0f4213cc, 0x298ed314, 0x033b02a7, 0x0829f3e1, 0x1b39a775, 0xe7a2}},
     {{0x0f2cfd51, 0x3a2a5087, 0x20e83e20, 0x29acb010, 0x2fbb18d0, 0x2c01a86a, 0x3984b471, 0x238c03e9, 0x2a75}}},
    /*  3*16^35*G: */
    {{{0x3aee42db, 0x03e7f4af, 0x330714a7, 0x2eef16d1, 0x2cbfc1d9, 0x2dbb6e47, 0x19150fc7, 0x09f9f66d, 0xcc34}},
     {{0x15d87bdb, 0x188a7004, 0x272422dc, 0x3972eb63, 0x21520010, 0x38ff4fec, 0x1c6a1885, 0x26106948, 0xea24}}},
    /*  5*16^35*G: */
    {{{0x3ed4a086, 0x3d0d9b19, 0x29c410ef, 0x35d70563, 0x0b5cf4b1, 0x0f1617ef, 0x0445dec8, 0x016eb366, 0x948f}},
     {{0x1e2bca4b, 0x0a86003e, 0x03fa2d1a, 0x08ca29c7, 0x1139411c, 0x11429980, 0x22a3382f, 0x2a27fed6, 0x864c}}},
    /*  7*16^35*G: */
    {{{0x37542c21, 0x032fa9b2, 0x2a64c15c, 0x067d34a3, 0x1d6d43ae, 0x1bf11514, 0x19ac9065, 0x0658a4a4, 0x2584}},
     {{0x272bfabf, 0x2faf8c65, 0x0c2ad7b3, 0x38e861b9, 0x3513d5f3, 0x176a9331, 0x3244801e, 0x16c7c736, 0xfcb3}}},
    /*  9*16^35*G: */
    {{{0x0c1ecbf8, 0x0f1187d0, 0x2eed7ca4, 0x227c37a6, 0x28421f64, 0x25d53307, 0x3c52522a, 0x337104dc, 0x7e12}},
     {{0x30bed615, 0x3516e336, 0x3e1d9f59, 0x1a7d8763, 0x0d1259c9, 0x3e536af9, 0x1c837143, 0x13e22223, 0x7128}}},
    /* 11*16^35*G: */
    {{{0x14557d86, 0x1f999470, 0x2667ff41, 0x3fbb11e3, 0x05a6cf1c, 0x2e4729e8, 0x342a6772, 0x30bfca8d, 0x4b8e}},
     {{0x35167eb9, 0x3766c646, 0x3c3f692b, 0x357cbbc3, 0x27ac5f28, 0x101cb794, 0x157ab14a, 0x30ffc130, 0xfde6}}},
    /* 13*16^35*G: */
    {{{0x0780763c, 0x0ae0b4ed, 0x265691d5, 0x229b57a4, 0x3ac07e5f, 0x10db71a5, 0x23a42532, 0x3041cce5, 0xfcd5}},
     {{0x38e851cb, 0x1539d080, 0x16463a4b, 0x066c8b9c, 0x32e38cb1, 0x0836cd7d, 0x22c463b7, 0x2af8b954, 0x18dd}}},
    /* 15*16^35*G: */
    {{{0x1d8ef686, 0x338ef8c1, 0x2272e66b, 0x23923d00, 0x266e53f6, 0x22976be0, 0x3cbe5223, 0x0b3b9610, 0x900f}},
     {{0x2121a8cf, 0x1ce9259f, 0x09156d50, 0x1b37fd0f, 0x09d11059, 0x31546c4d, 0x0425ad61, 0x30557b18, 0x732a}}}
  },
  {
    /*  1*16^36*G: */
    {{{0x1e6b80ef, 0x33ca7acf, 0x179424f3, 0x32f2e59f, 0x3cbdc571, 0x1503088e, 0x22ec8d23, 0x2783b8d9, 0xb645}},
     {{0x1a71ba45, 0x0c2fc2d8, 0x0e35b2ff, 0x2ceb9b52, 0x261db3c4, 0x2b7c5b95, 0x3e06de1d, 0x21db41bc, 0x067c}}},
    /*  3*16^36*G: */
    {{{0x319888e9, 0x0e73c9e4, 0x2448a8b4, 0x04ae9afc, 0x2681673d, 0x1834c0a5, 0x3a6e2dde, 0x3a9dceb0, 0x1f90}},
     {{0x2f113b79, 0x1bf7f25f, 0x19522e65, 0x0dd47fb9, 0x2b96a821, 0x054f49c7, 0x2a10e958, 0x0d9f0576, 0x89be}}},
    /*  5*16^36*G: */
    {{{0x3562222c, 0x217bedbc, 0x1e6f2c60, 0x00d11e64, 0x0b52bade, 0x00aeb4cd, 0x3e0ad6e7, 0x39537b7f, 0x13a4}},
     {{0x28200145, 0x32c59a32, 0x1c904c08, 0x3e715deb, 0x209a52d4, 0x2b0be075, 0x2e813b2c, 0x1f539605, 0xc9d6}}},
    /*  7*16^36*G: */
    {{{0x343b46bb, 0x0df93703, 0x2c925254, 0x3b4e98fe, 0x055dbd12, 0x01f01761, 0x0aadd1d4, 0x07afc8cf, 0x6199}},
     {{0x0c20a848, 0x123d6407, 0x12ecd8ef, 0x2a1ca729, 0x3badf11c, 0x3ce1c59b, 0x1e492952, 0x38c23cff, 0x01c5}}},
    /*  9*16^36*G: */
    {{{0x121add3b, 0x396f8f77, 0x1727d8f7, 0x26a513d1, 0x1626118b, 0x0e736c34, 0x3d387490, 0x2ba92de1, 0xea27}},
     {{0x368ce7dd, 0x2d78a476, 0x24e1be71, 0x2c84b5a3, 0x1c2f6278, 0x0f3ac8c9, 0x217de572, 0x3c79b90a, 0xc70f}}},
    /* 11*16^36*G: */
    {{{0x211ff757, 0x3a2be2ed, 0x04c226e6, 0x133a5d07, 0x22b6da9b, 0x0043e2db, 0x3fd54ba9, 0x144d5adf, 0x5946}},
     {{0x094d031a, 0x2299bb2a, 0x3bffe3b2, 0x06ef1edf, 0x0406f996, 0x00e34057, 0x32750042, 0x0d833977, 0x3611}}},
    /* 13*16^36*G: */
    {{{0x236160b5, 0x1d89628d, 0x0e7ebc06, 0x314fc91c, 0x091ec0cc, 0x0ebde5c0, 0x33290e84, 0x1b8e457d, 0x16b2}},
     {{0x18a1dc0e, 0x11897efd, 0x0ba3ef81, 0x0d8eab1c, 0x3654d4e1, 0x190d4918, 0x2ef8bb63, 0x159698c0, 0x060f}}},
    /* 15*16^36*G: */
    {{{0x37b32db8, 0x25934a24, 0x247791f3, 0x07b5d27d, 0x2cea85c9, 0x2850f210, 0x19f931be, 0x14a57115, 0x024b}},
     {{0x2a64f760, 0x25153eaa, 0x05b81a95, 0x2ada0448, 0x1e5be862, 0x38a08731, 0x3309c7b6, 0x3be3d6ff, 0x609f}}}
  },
  {
    /*  1*16^37*G: */
    {{{0x096943e8, 0x3b683d6d, 0x273c5a5d, 0x1bc7f19f, 0x0f06231d, 0x08d2a846, 0x3b840793, 0x20320a02, 0xd68a}},
     {{0x2b133120, 0x25321099, 0x045295a2, 0x039ee3de, 0x30e28b5b, 0x2c7e45de, 0x186d00c4, 0x2a7ffd2d, 0xdb8b}}},
    /*  3*16^37*G: */
    {{{0x0ca1c4f9, 0x16d0aa86, 0x2b7e2823, 0x13bf8d32, 0x1f16f44f, 0x02e0f698, 0x1728c4c4, 0x3de3c8af, 0x7815}},
     {{0x3778bc15, 0x2ac7a8da, 0x177d1e19, 0x2d0b7985, 0x18c35d5c, 0x24f3cc51, 0x1af6a7dd, 0x007a334e, 0xc1c6}}},
    /*  5*16^37*G: */
    {{{0x2e8c8530, 0x349b870f, 0x38f4d8e6, 0x0b7da07b, 0x2a6c6d51, 0x1df19005, 0x040176e3, 0x1cf3683b, 0xc392}},
     {{0x398446c7, 0x100c3c3d, 0x2eed715c, 0x3b7f2f68, 0x03199850, 0x074e5107, 0x33c8e9d0, 0x2f9095d0, 0x8c41}}},
    /*  7*16^37*G: */
    {{{0x237a26c1, 0x07c902ec, 0x0dbf6a53, 0x1b1b9630, 0x103b2516, 0x0890c707, 0x011b0275, 0x1d11fd61, 0xda31}},
     {{0x2cf74d6f, 0x1460dbb3, 0x3a81525f, 0x1a0db175, 0x19d8b7d3, 0x21059f09, 0x18c69d23, 0x25ee1fd7, 0x753b}}},
    /*  9*16^37*G: */
    {{{0x3739dc49, 0x0ad8a2a4, 0x2f55603d, 0x24e4b699, 0x3f231a23, 0x12b1422f, 0x30e6c106, 0x39b2c0ab, 0x6a4b}},
     {{0x32edd5cf, 0x39a8ae77, 0x14a4a4d3, 0x1f8ad32c, 0x3a8058ab, 0x059b8d83, 0x107597dc, 0x23ea8aa2, 0xf15d}}},
    /* 11*16^37*G: */
    {{{0x06987fac, 0x22fa2831, 0x0a86f679, 0x3243e190, 0x098a3c8b, 0x260980fb, 0x27f1344e, 0x31a7c4eb, 0x01f7}},
     {{0x19174c68, 0x3e479ce0, 0x1f6bc263, 0x1fd77886, 0x1ab6f9cb, 0x040db8ca, 0x1a22de5b, 0x330fcdbf, 0x9d4e}}},
    /* 13*16^37*G: */
    {{{0x36daba4d, 0x34ce86f5, 0x03196261, 0x197ec388, 0x3a2bcb9c, 0x018bb763, 0x3d381cb7, 0x25005d87, 0x557e}},
     {{0x37a52316, 0x04dd286e, 0x243590a5, 0x3a6e3d7e, 0x0cbc86c5, 0x0d73e857, 0x3a7e046d, 0x23ce9807, 0x7a7e}}},
    /* 15*16^37*G: */
    {{{0x29f5341a, 0x0e3d4bfc, 0x29636b80, 0x31e8cb19, 0x3101419c, 0x27503a9e, 0x085a93b2, 0x36a08666, 0x3ada}},
     {{0x2586c6cc, 0x1456024d, 0x05e8fbcb, 0x35b4b96d, 0x2b1017e9, 0x38d6fcda, 0x1369f552, 0x0788a266, 0xbfea}}}
  },
  {
    /*  1*16^38*G: */
    {{{0x028d3d5d, 0x0256603f, 0x3449cea4, 0x04abae5c, 0x3a30b096, 0x3009c241, 0x0804252d, 0x3b5f7d97, 0x324a}},
     {{0x16ab7c84, 0x19c892be, 0x23328439, 0x084ec31f, 0x2c1f4f19, 0x03030d6b, 0x21f2ff13, 0x0d95dd2d, 0x648a}}},
    /*  3*16^38*G: */
    {{{0x2fd53ed3, 0x17245d60, 0x1a56ccef, 0x0fdd3ee7, 0x1f7c4916, 0x3d82e4c7, 0x372ad5b8, 0x02f56659, 0x2084}},
     {{0x1a7a7132, 0x1c50ff94, 0x0e708998, 0x21f11ce5, 0x3afac254, 0x2f51da9a, 0x18243487, 0x0d25f3b0, 0xf299}}},
    /*  5*16^38*G: */
    {{{0x08a35b35, 0x2f4b2ed6, 0x00a121ed, 0x2d762297, 0x08ebfd1a, 0x0f40a796, 0x339bbbd1, 0x2ffd83ac, 0xe6b6}},
     {{0x1c1007bd, 0x15ca4f6e, 0x3e999c7c, 0x0edb274e, 0x1961ddfe, 0x3d0f8e0d, 0x0d2f3266, 0x3caf4cc0, 0x1a5f}}},
    /*  7*16^38*G: */
    {{{0x00360dd3, 0x353be34b, 0x050e2090, 0x2a2a0db6, 0x0ce3bb47, 0x02e021b8, 0x099b288b, 0x05dd16f9, 0xe053}},
     {{0x3c24f87b, 0x0abb3644, 0x0103dc2b, 0x2e61f7a6, 0x36a01461, 0x02560ad6, 0x12f39cd8, 0x0edc6976, 0xdc1c}}},
    /*  9*16^38*G: */
    {{{0x1098dfea, 0x3051998b, 0x2a678797, 0x372cf24b, 0x3a5e57fa, 0x23974aa0, 0x06c59e01, 0x0ece9de2, 0xa815}},
     {{0x2e6d892f, 0x2926a77d, 0x2daf4158, 0x2d783dd0, 0x053e03b1, 0x236e715e, 0x060fc53d, 0x0e591874, 0x2a47}}},
    /* 11*16^38*G: */
    {{{0x0bcecfa5, 0x29f9de92, 0x316bb020, 0x0358b686, 0x0eda3b2a, 0x11a5718e, 0x0addadeb, 0x30ecc3fb, 0x4f05}},
     {{0x15d37b53, 0x3b34092a, 0x01b48cd2, 0x1fb90c7c, 0x1534b944, 0x18c8d856, 0x1426fadd, 0x267a980f, 0x53a4}}},
    /* 13*16^38*G: */
    {{{0x084b96aa, 0x1879d964, 0x22abcce4, 0x0a618d54, 0x3b980ed0, 0x101786a8, 0x3a91be26, 0x26ae67d9, 0xd930}},
     {{0x02b28a86, 0x09b13cdf, 0x3cfe978f, 0x2db27eeb, 0x34cb5fd3, 0x043c1989, 0x2c557d7e, 0x26caa6d3, 0x6ef9}}},
    /* 15*16^38*G: */
    {{{0x1f8fcf0e, 0x3dee3416, 0x3c4a6fac, 0x16dbff79, 0x2a3411d6, 0x30d11b7a, 0x22d35ba9, 0x1f284e15, 0x7d58}},
     {{0x18bc9459, 0x00706827, 0x323780a5, 0x18e402b4, 0x3d6ad0c4, 0x0d002db3, 0x04c61272, 0x1700e20c, 0xa729}}}
  },
  {
    /*  1*16^39*G: */
    {{{0x3d054c96, 0x3a2f4dcf, 0x0d1ca888, 0x31050eea, 0x3ee5dcee, 0x077f6f97, 0x1e61f6d5, 0x30524673, 0x4df9}},
     {{0x0ad10d5d, 0x0baeb01b, 0x28849019, 0x3541b370, 0x1d85d4b5, 0x25d308e8, 0x18728050, 0x3b14424b, 0x0035}}},
    /*  3*16^39*G: */
    {{{0x1def001d, 0x13c89769, 0x09ba27ef, 0x3e6ef5a6, 0x23b64b21, 0x02f47027, 0x22caf20e, 0x28cb6c9f, 0xa549}},
     {{0x30624783, 0x3576c69f, 0x2c9705ad, 0x05078a98, 0x259456eb, 0x330c3b62, 0x166cbdf4, 0x1e9e41b6, 0x799b}}},
    /*  5*16^39*G: */
    {{{0x052ed4cb, 0x16bbc797, 0x009ec5a0, 0x1537becf, 0x132e6ec9, 0x022f660d, 0x3ecd123f, 0x23cc3681, 0x7e79}},
     {{0x14bb9462, 0x15c5981e, 0x39f37a12, 0x1cd5c6ff, 0x32f057b1, 0x2a55277b, 0x1ac83041, 0x33312893, 0xd23d}}},
    /*  7*16^39*G: */
    {{{0x13630834, 0x37ce83ef, 0x3dac067f, 0x18fc4a18, 0x0c810884, 0x2e7a5aea, 0x14783ad5, 0x28800c54, 0x224f}},
     {{0x047a2272, 0x34f11cdf, 0x0a50f75c, 0x18a493b0, 0x1d09f53d, 0x2dc3e8e4, 0x2da5c3c4, 0x138caecf, 0xbbe5}}},
    /*  9*16^39*G: */
    {{{0x183c19d7, 0x19d92745, 0x02cf57bb, 0x2ed7916b, 0x228ef2bb, 0x28973390, 0x239e4129, 0x28331802, 0xc2d4}},
     {{0x0507928d, 0x0bca2e0b, 0x3345c977, 0x2012a0c5, 0x01260d26, 0x20ed7dfd, 0x06294d41, 0x283e7020, 0x65ad}}},
    /* 11*16^39*G: */
    {{{0x3c940c9a, 0x13202b52, 0x2f423308, 0x33cf384e, 0x0ddc2113, 0x161789d1, 0x1f3190e5, 0x0a9fb0c1, 0x2ec2}},
     {{0x051e7a4d, 0x34653f66, 0x1a35bdac, 0x101460f6, 0x1c7feb12, 0x3893d40a, 0x379684c2, 0x291a378c, 0x8b1d}}},
    /* 13*16^39*G: */
    {{{0x1d683eeb, 0x29c3b97f, 0x08d3133a, 0x0dbace28, 0x04b8f33e, 0x2bd94942, 0x28cecab1, 0x1a5ce3e6, 0xafc6}},
     {{0x30cd4509, 0x078a72ac, 0x1eddfdc9, 0x02ead549, 0x239c1657, 0x1671ff28, 0x22752bc3, 0x0865db74, 0x002c}}},
    /* 15*16^39*G: */
    {{{0x376f4293, 0x28807e1e, 0x13c5139e, 0x3a5e2d59, 0x0b282e10, 0x2f233cdc, 0x03309121, 0x1ed6a7cd, 0xd255}},
     {{0x1282740a, 0x36c61e89, 0x2405a5f1, 0x12da0e37, 0x0ad21fe3, 0x20bc1bad, 0x027f0126, 0x2cd0d579, 0xa787}}}
  },
  {
    /*  1*16^40*G: */
    {{{0x2c1f98cd, 0x2ff26722, 0x17f0308c, 0x0d224153, 0x06602152, 0x362a7073, 0x34870fae, 0x066a1291, 0x9c39}},
     {{0x14fc599d, 0x39f9780f, 0x064c8e6b, 0x14c9bddb, 0x20e64190, 0x3c112fc9, 0x1dd57584, 0x13c3d293, 0xddb8}}},
    /*  3*16^40*G: */
    {{{0x0fb64db3, 0x1ee6354e, 0x1dd53841, 0x3b79328e, 0x13b8d6a7, 0x2ee0fef9, 0x1ccb740b, 0x08e48a6f, 0xc114}},
     {{0x3c0259be, 0x08c33a7f, 0x14567d1e, 0x1d602413, 0x178bd1a8, 0x3b3793fa, 0x06fc2a5c, 0x3db716d2, 0x1237}}},
    /*  5*16^40*G: */
    {{{0x03081e46, 0x3b7b60d0, 0x14559ea1, 0x14886315, 0x2634713a, 0x3670b064, 0x37224082, 0x12fe0c69, 0x6c5b}},
     {{0x0bfbcd70, 0x347e72e0, 0x2c22a62e, 0x3433e09a, 0x2be47841, 0x11e18f38, 0x2d42fb23, 0x04dc5249, 0xcb05}}},
    /*  7*16^40*G: */
    {{{0x064dcd4b, 0x32b96bb1, 0x111c124d, 0x0c31f566, 0x310a450c, 0x1c19972a, 0x0ade4b56, 0x2a1599c3, 0xe1e9}},
     {{0x3b041f2c, 0x342d897a, 0x0a16b292, 0x113466ab, 0x2577927f, 0x310d666c, 0x1c531b7a, 0x02a55115, 0x562b}}},
    /*  9*16^40*G: */
    {{{0x2badd73c, 0x0161dbf8, 0x2a64b7d0, 0x36737640, 0x1c14208f, 0x29d390bb, 0x1b099778, 0x0695eb44, 0x51b2}},
     {{0x2b36d8d1, 0x3df52b87, 0x0c734ba6, 0x0804c3ca, 0x2c1cfa6c, 0x281fc074, 0x3d3e5d54, 0x0c040007, 0x0079}}},
    /* 11*16^40*G: */
    {{{0x3b09f34b, 0x35d742dc, 0x0cc66ce6, 0x221cf982, 0x339d61e5, 0x2d8a5bcf, 0x0b79861a, 0x3ce98ec7, 0x9701}},
     {{0x00df5793, 0x33721433, 0x3dcc794a, 0x012f0e5f, 0x16833771, 0x00c6d4c5, 0x30ed15d7, 0x12eee32b, 0x3dd4}}},
    /* 13*16^40*G: */
    {{{0x3f1e2f46, 0x1739888e, 0x32778301, 0x1c3dc7a1, 0x163c5752, 0x164b8103, 0x266cc445, 0x2d074b27, 0xa036}},
     {{0x1effb349, 0x1cc789a5, 0x3f0b1f4f, 0x2038a0b3, 0x1eb08d06, 0x07daa91e, 0x16b3d7df, 0x246800fa, 0xc3bf}}},
    /* 15*16^40*G: */
    {{{0x0c4cea08, 0x3362e40e, 0x20ea21db, 0x12d62e83, 0x00465265, 0x298454d0, 0x28c506f4, 0x3eb6ea93, 0x6a85}},
     {{0x1862f4f3, 0x0677b396, 0x3d721b6a, 0x09c692d0, 0x3e6230b4, 0x24cf0523, 0x0659d531, 0x11812eb9, 0x00b6}}}
  },
  {
    /*  1*16^41*G: */
    {{{0x20a959e5, 0x2884e084, 0x391d4cc5, 0x38524ea2, 0x0e06bb91, 0x017ca076, 0x12fdf8de, 0x05c2c774, 0x6057}},
     {{0x2385a2a8, 0x2266fa4c, 0x2e24c65e, 0x1454af0f, 0x1df26246, 0x268b6bdc, 0x24807add, 0x3c2c9a9a, 0x9a1a}}},
    /*  3*16^41*G: */
    {{{0x171c032b, 0x3536858a, 0x3afdc980, 0x1ad9a285, 0x0766c5ff, 0x046d7f7f, 0x002603dd, 0x2a3f35b8, 0x71eb}},
     {{0x1668359f, 0x1ead6a38, 0x34b4755e, 0x24c6b45d, 0x0cbb7f71, 0x18145bd5, 0x1d39def6, 0x049892d8, 0xd2ff}}},
    /*  5*16^41*G: */
    {{{0x2a03a61c, 0x01b91d14, 0x1070574d, 0x1e1a3d1a, 0x2a9dd050, 0x05d10aea, 0x09d232ca, 0x30c16cc9, 0x855e}},
     {{0x065dfc07, 0x37f1baab, 0x17e44965, 0x0cbdd3a8, 0x02fb4ed3, 0x0f2ffe6d, 0x01c17f54, 0x174bb17c, 0x0dd8}}},
    /*  7*16^41*G: */
    {{{0x1f32d706, 0x00302920, 0x06a0678b, 0x0633291d, 0x15bfa206, 0x034a68c2, 0x3fbf1f15, 0x121aaeac, 0x3ce4}},
     {{0x3c7fd9e4, 0x02dcd8df, 0x161e89f4, 0x345590f3, 0x094906ed, 0x3f411ac4, 0x3785288e, 0x10236ab8, 0xe775}}},
    /*  9*16^41*G: */
    {{{0x391cd3fb, 0x36d032ed, 0x329be686, 0x0a8cff65, 0x0844eb4a, 0x380c863e, 0x237faf02, 0x31450fd3, 0x11cc}},
     {{0x15160d86, 0x24dc5ae9, 0x0dd3472a, 0x02c7bf4b, 0x0cc239fa, 0x2389124e, 0x311deb52, 0x1acaa40a, 0x4aa5}}},
    /* 11*16^41*G: */
    {{{0x218f7552, 0x21ee4465, 0x0054fac3, 0x1044e2e6, 0x2382ddbd, 0x25ddd3e0, 0x09c6f43b, 0x2ec5f945, 0x0250}},
     {{0x3510b14d, 0x3c212588, 0x33d6f1e3, 0x001bcf0c, 0x29d817da, 0x35f7dd7f, 0x28082342, 0x0c3f26ef, 0x7319}}},
    /* 13*16^41*G: */
    {{{0x1f725d12, 0x1744fa4e, 0x0b5f4750, 0x1190aef7, 0x022fbfd9, 0x28e73828, 0x27fd3ab4, 0x27222cd1, 0x1a74}},
     {{0x23ac56e4, 0x04d94534, 0x190daa70, 0x1c821a62, 0x2f3d8f60, 0x22f9d70a, 0x00e2cf45, 0x34655cfb, 0x7e91}}},
    /* 15*16^41*G: */
    {{{0x29fae458, 0x18412394, 0x26ec97fd, 0x0297109d, 0x3b7b328b, 0x3455a977, 0x0218c109, 0x1a16f83e, 0xc750}},
     {{0x1757b598, 0x005a1065, 0x35951a2b, 0x1772940c, 0x32c7b40a, 0x0bd05319, 0x21e05fb5, 0x257e33e4, 0xead7}}}
  },
  {
    /*  1*16^42*G: */
    {{{0x2cb94266, 0x069a5cfb, 0x3d4df12b, 0x33bc3ee9, 0x0da31880, 0x10e69146, 0x08411421, 0x37e388e8, 0xa576}},
     {{0x21b28ec8, 0x3a2f846b, 0x114d9f3e, 0x0b8429fd, 0x0cd82c43, 0x2e5ebf96, 0x240b2c92, 0x2fc839d9, 0x40a6}}},
    /*  3*16^42*G: */
    {{{0x0d9ed6c1, 0x1a2bad63, 0x3d593d6b, 0x139d16f0, 0x1edd0ec2, 0x3f061dc1, 0x0f53e80b, 0x0cdb72dd, 0x0328}},
     {{0x38fafeee, 0x3b1baf9b, 0x1cb494ad, 0x16fd37c9, 0x0d7c8c26, 0x35650e88, 0x19f28c46, 0x260e04bf, 0x71a8}}},
    /*  5*16^42*G: */
    {{{0x3235983a, 0x066a6a34, 0x13bceb29, 0x22840dc0, 0x3e1531e3, 0x0e49b5c3, 0x11c54dc6, 0x13aba2e4, 0xce4f}},
     {{0x0d3cdecf, 0x33f5ac64, 0x2bf740ae, 0x1b1948a3, 0x30754352, 0x37809279, 0x0fbbb3ea, 0x3e5cf0e4, 0xf3c9}}},
    /*  7*16^42*G: */
    {{{0x15b0e6c9, 0x1b6aad99, 0x06e4c89a, 0x17fe73de, 0x38bcbddb, 0x0a3ecdb7, 0x0622278e, 0x2fe952e6, 0x4dbe}},
     {{0x1eb2cc25, 0x2529e155, 0x0504efae, 0x24c46caf, 0x2229f358, 0x2989b9b8, 0x13aedf45, 0x39ec0f24, 0x10fe}}},
    /*  9*16^42*G: */
    {{{0x25857295, 0x13806846, 0x3433f016, 0x32391fc0, 0x1ca12069, 0x38463f28, 0x05c218b2, 0x0902ffbd, 0xa42a}},
     {{0x0a7eb9c1, 0x1acddffb, 0x15193955, 0x28708b34, 0x1da4c427, 0x1ac8ac93, 0x05d4567a, 0x2cfc9840, 0x3aa0}}},
    /* 11*16^42*G: */
    {{{0x2fcdc098, 0x0883fd55, 0x2e468032, 0x02b803da, 0x0499c155, 0x3c7e1b03, 0x322267a7, 0x0acbe5be, 0x34e1}},
     {{0x2a7474e2, 0x132c6b79, 0x19883f66, 0x37d44c3c, 0x3972db04, 0x132f2105, 0x1d322d97, 0x30b775ed, 0xa64a}}},
    /* 13*16^42*G: */
    {{{0x0f173b92, 0x335bad7a, 0x29fb7611, 0x1f9cbd05, 0x0d65683b, 0x0c68863d, 0x391f29be, 0x3490366e, 0x10f4}},
     {{0x233146c2, 0x240801b5, 0x086adb7c, 0x2edda745, 0x3908ba90, 0x2c96968c, 0x353ad211, 0x0b654245, 0x850e}}},
    /* 15*16^42*G: */
    {{{0x28d84958, 0x39bf4766, 0x0acc5cae, 0x0477ac5b, 0x00cc866a, 0x066e5db5, 0x277e749f, 0x3a02da6d, 0xe846}},
     {{0x3882cf9f, 0x031191ed, 0x1e0c1a64, 0x1468cd9c, 0x18b76fad, 0x2f64411e, 0x07e2541d, 0x2e3f2253, 0xa29c}}}
  },
  {
    /*  1*16^43*G: */
    {{{0x3e58ad71, 0x3dd8e226, 0x39a3a208, 0x0c347d73, 0x1e8c38bb, 0x17fa58a7, 0x2c3e30a0, 0x29e30a37, 0x7778}},
     {{0x3d9f43ac, 0x2d44ff07, 0x324ac563, 0x2ce1047f, 0x3f580087, 0x26384bcb, 0x1b22ff70, 0x1b66ad69, 0x3462}}},
    /*  3*16^43*G: */
    {{{0x3319c869, 0x3df1bab8, 0x21eb2702, 0x2a7e575d, 0x0cacdc18, 0x20e408bf, 0x33fc8d01, 0x01176605, 0x3018}},
     {{0x12b856f0, 0x3031db27, 0x23d9a7bf, 0x0aa13292, 0x222e3bca, 0x1890c835, 0x3b7b6f86, 0x315e0940, 0xac5f}}},
    /*  5*16^43*G: */
    {{{0x25ed29b5, 0x319a61be, 0x12add1b4, 0x20c2d81c, 0x23c885f5, 0x2d9f6e69, 0x17ef343a, 0x206d87b9, 0x3228}},
     {{0x3cd15ad2, 0x3d3c49b9, 0x0ee7604e, 0x20ebaae5, 0x1531e1ca, 0x02c677d0, 0x0344eb11, 0x00a105e8, 0x1677}}},
    /*  7*16^43*G: */
    {{{0x06c96100, 0x2fea101e, 0x2e9c8e63, 0x18c046a9, 0x33dbcca1, 0x0f766cb7, 0x31b9ffb4, 0x11ceb03e, 0x3f38}},
     {{0x32624707, 0x078ab06f, 0x375f1bcf, 0x15c71f02, 0x079ce566, 0x131118bc, 0x00395253, 0x27157d75, 0x70c6}}},
    /*  9*16^43*G: */
    {{{0x3d22d2ac, 0x0d31bb1b, 0x1caace02, 0x377f849b, 0x05df2f10, 0x0f03825e, 0x3a76dcb4, 0x04f17f49, 0x2881}},
     {{0x0f42a268, 0x207ad57e, 0x148c8fd0, 0x30f51285, 0x176137dd, 0x1ddc9832, 0x3c5c8f20, 0x3ac0563e, 0xa1a7}}},
    /* 11*16^43*G: */
    {{{0x245f8ea8, 0x12ea0374, 0x24d2900d, 0x1c9238e5, 0x119fe5d1, 0x3d36575c, 0x23a2a553, 0x28803211, 0xf963}},
     {{0x19bc99eb, 0x2f157ec1, 0x18b60824, 0x2e3c8d67, 0x3427208b, 0x1c88c07f, 0x383c0a3b, 0x2509a31f, 0x9c85}}},
    /* 13*16^43*G: */
    {{{0x2606a315, 0x386a20c4, 0x26963ad9, 0x1c981cbc, 0x0e097e40, 0x362ca964, 0x0d9a7f98, 0x08933fdc, 0xa5d9}},
     {{0x1e3b68d1, 0x0d584cd6, 0x111a7c9d, 0x13434d1f, 0x180de9ed, 0x0c1aaf5e, 0x0da5b343, 0x22c00ec8, 0x8732}}},
    /* 15*16^43*G: */
    {{{0x06231493, 0x336ded50, 0x0cc4d469, 0x1046a0c3, 0x25e6a496, 0x13907403, 0x3c3604eb, 0x260b86dc, 0xf1fe}},
     {{0x358848c1, 0x25aa6699, 0x25ff0d01, 0x1cfecd1b, 0x3d99d3f1, 0x34f0817d, 0x24ddc216, 0x067abb66, 0x2e20}}}
  },
  {
    /*  1*16^44*G: */
    {{{0x06d903ac, 0x027b6a70, 0x1ad7e5cb, 0x3e589d39, 0x3afd2ed5, 0x0a7f4c39, 0x3a844637, 0x2557b98d, 0x0928}},
     {{0x1bcd091f, 0x14603a4d, 0x0a8d83fc, 0x0f49bbea, 0x3a95eeac, 0x1e284c24, 0x342a827b, 0x08400f4f, 0xc256}}},
    /*  3*16^44*G: */
    {{{0x3874b839, 0x0444a1d5, 0x13d2b418, 0x10456ce5, 0x30b6aebe, 0x37c37ec8, 0x1e5a8053, 0x2e07f038, 0x3e03}},
     {{0x3c0594ba, 0x03073959, 0x1ab5b8da, 0x39717c3f, 0x198f667d, 0x3d981d5c, 0x07f42c44, 0x3858f7fc, 0xd13a}}},
    /*  5*16^44*G: */
    {{{0x0357a513, 0x28fde39a, 0x1b3023f3, 0x146f44d1, 0x2922c5f1, 0x3e8a0ea8, 0x0492cd62, 0x302de8bd, 0xe662}},
     {{0x2017d07e, 0x24a88072, 0x1538d891, 0x00d73589, 0x21a419d8, 0x2b882284, 0x2452305d, 0x064f3984, 0xab0b}}},
    /*  7*16^44*G: */
    {{{0x1f37d242, 0x2657dfbf, 0x39c14b04, 0x27fb2981, 0x23587dc2, 0x218b1f2f, 0x0f6cb843, 0x202c7253, 0x40bf}},
     {{0x26405088, 0x347609e6, 0x2bd35583, 0x0c87ae90, 0x26fe1274, 0x0ffa6c6c, 0x2aaf04f5, 0x374d7615, 0xb579}}},
    /*  9*16^44*G: */
    {{{0x195a3558, 0x2bcacd91, 0x234a7f2b, 0x01c7e178, 0x1b59f6ac, 0x3e5e04e3, 0x1ca70806, 0x3fa5d807, 0x3d14}},
     {{0x2443df4c, 0x1ab6ceb1, 0x3c1d727c, 0x3828b851, 0x356e1482, 0x26a4c76f, 0x281ef8f2, 0x2f75ba11, 0x16c6}}},
    /* 11*16^44*G: */
    {{{0x02b1fc24, 0x37a7d6b6, 0x23f7570e, 0x0a36071f, 0x12486525, 0x06b134b2, 0x265251cc, 0x29503a0b, 0xdd6f}},
     {{0x0e9b74ca, 0x290c7118, 0x17322304, 0x04379afb, 0x257e77ec, 0x1bc7afc5, 0x3186fe36, 0x0adfac74, 0x67e6}}},
    /* 13*16^44*G: */
    {{{0x3dd08e02, 0x07aa4564, 0x1adf0288, 0x2151edff, 0x3d1e8010, 0x1a5266a8, 0x15d780f8, 0x0b6a0b79, 0x13fa}},
     {{0x3cb03410, 0x29550770, 0x1a42b97d, 0x112beec6, 0x3432c7e6, 0x0d5881ae, 0x1da72313, 0x0e2c1155, 0x1363}}},
    /* 15*16^44*G: */
    {{{0x144ee41a, 0x308ceae6, 0x37d69a6a, 0x26d5b74e, 0x06828287, 0x3042d9cb, 0x30a443f7, 0x121474f1, 0xd06c}},
     {{0x0b295e6f, 0x3c7e13a6, 0x162ee252, 0x1ee10d18, 0x3630919b, 0x02b353d3, 0x0d0adbbb, 0x3f530161, 0x5815}}}
  },
  {
    /*  1*16^45*G: */
    {{{0x23d82751, 0x1eab9d45, 0x3ad35452, 0x116d2a41, 0x23b28556, 0x0193ce83, 0x1b109399, 0x3fbcfb1b, 0x85d0}},
     {{0x0eb1f962, 0x0b08de89, 0x07733158, 0x21d47a5a, 0x2cf5663e, 0x3525b960, 0x38c0be29, 0x192104e8, 0x1f03}}},
    /*  3*16^45*G: */
    {{{0x2cde4cf3, 0x26554187, 0x38a066ab, 0x10394d51, 0x1d9ae793, 0x30b49b45, 0x022c3be7, 0x2ad2b045, 0x384d}},
     {{0x252d0566, 0x1f1e5ac8, 0x351ba73b, 0x10c28ce5, 0x34c6f01f, 0x13b5b68a, 0x1ca43bfb, 0x316f346e, 0xd6e3}}},
    /*  5*16^45*G: */
    {{{0x1e5238c2, 0x22bcfa48, 0x00ecb8b9, 0x0d57d70e, 0x02ed4840, 0x05842d3a, 0x015aa41b, 0x3b03adf5, 0x14f0}},
     {{0x12f07922, 0x3a1a8d1e, 0x304939d6, 0x17003600, 0x02747fd2, 0x3f1cf8e1, 0x35d80921, 0x354f7520, 0xab12}}},
    /*  7*16^45*G: */
    {{{0x1543e94d, 0x3d8d4bbf, 0x2f98e188, 0x04c0a9d5, 0x1a0ddadd, 0x30d19e29, 0x0287ec41, 0x3ceede0b, 0xeb42}},
     {{0x05924d89, 0x01567791, 0x20d6d424, 0x3611a379, 0x0dfb774c, 0x03755cbf, 0x1d92dc9a, 0x1b41d3c9, 0x234a}}},
    /*  9*16^45*G: */
    {{{0x3e19aaed, 0x0c9396d5, 0x06673270, 0x26eb37a3, 0x06a92045, 0x3b00bdb8, 0x020d9a9e, 0x0e32945a, 0x1cf1}},
     {{0x292f400e, 0x04dba975, 0x3c77ffbc, 0x27bbe3fb, 0x2dde1747, 0x0dca99ad, 0x063865f4, 0x36bcc5c7, 0xd6ff}}},
    /* 11*16^45*G: */
    {{{0x36a8aa39, 0x3db03a7e, 0x278fac55, 0x2998ded2, 0x1990d937, 0x16825a12, 0x0d412c87, 0x21af97d0, 0xb586}},
     {{0x2b493c1f, 0x3f1e4d74, 0x2db347b8, 0x2f6be639, 0x00a91dab, 0x11e35153, 0x38c2c149, 0x3550c931, 0x5632}}},
    /* 13*16^45*G: */
    {{{0x303b4cc5, 0x3a47af8e, 0x21c77c2e, 0x0a0c6e96, 0x33a80257, 0x16f13f9f, 0x3cc2b67b, 0x276c1ae2, 0x5fc1}},
     {{0x25b57c28, 0x0ece7ee1, 0x0087ec4a, 0x1dbd40f3, 0x3a5ef492, 0x084e3e68, 0x0c7c66ee, 0x21303b26, 0xec8e}}},
    /* 15*16^45*G: */
    {{{0x0cb38cb5, 0x2d2e15f5, 0x1388948b, 0x02dff7d3, 0x3eea1be1, 0x2a2903f4, 0x1e289deb, 0x2dc350bb, 0xb88f}},
     {{0x1965f3d7, 0x1efe9d59, 0x3af8c719, 0x13cf8489, 0x35a8e24d, 0x12ee652c, 0x23280603, 0x0dab51ba, 0xd6c7}}}
  },
  {
    /*  1*16^46*G: */
    {{{0x0526087e, 0x3d501209, 0x2da20308, 0x3edb6220, 0x18b85dfd, 0x26d8105e, 0x2ce97c1c, 0x0373a5fb, 0xff2b}},
     {{0x30c29907, 0x32547807, 0x10e2ceb2, 0x2dfb5bee, 0x107936c7, 0x13137153, 0x0ba188af, 0x04ffbd49, 0x493d}}},
    /*  3*16^46*G: */
    {{{0x39d681f9, 0x164153f9, 0x08feb9fc, 0x3383bbeb, 0x2c94b066, 0x1ffc9780, 0x3230888b, 0x3f7c9dd7, 0xc745}},
     {{0x3bbb1247, 0x00c5cd0d, 0x27d45c76, 0x36f4cd71, 0x2818678c, 0x04e531c3, 0x1e5e78a7, 0x08bcbdae, 0x5902}}},
    /*  5*16^46*G: */
    {{{0x35cd0ea3, 0x38133bb4, 0x0cac4815, 0x111e3a08, 0x32e7f2b3, 0x16797ad9, 0x1050b27a, 0x1e7cea5d, 0xabb2}},
     {{0x3c307bce, 0x1c24c4cd, 0x202f3b64, 0x25da4167, 0x078ed47c, 0x12f8300c, 0x3970d9fb, 0x040eefc5, 0x5dee}}},
    /*  7*16^46*G: */
    {{{0x1bc9ee3e, 0x30b8bcfc, 0x3e7382c5, 0x27e86a58, 0x27ed11ea, 0x2baa9d09, 0x0682827f, 0x0542d67f, 0x3f81}},
     {{0x199aae06, 0x33ab6c31, 0x0da81603, 0x08ecb73f, 0x39566276, 0x06facf11, 0x3a82d467, 0x229a3f6f, 0x19c8}}},
    /*  9*16^46*G: */
    {{{0x38e4a007, 0x05c6fbeb, 0x0bb358b6, 0x3b3bb3c2, 0x16c7ec15, 0x12e8cea9, 0x02de6959, 0x04cb7402, 0x5cf8}},
     {{0x1068b883, 0x398fc242, 0x39c7fe8c, 0x251be5b1, 0x0c3df6c8, 0x35056212, 0x1fa0df4a, 0x3b970358, 0xb45a}}},
    /* 11*16^46*G: */
    {{{0x26c2d4a7, 0x255bf9ec, 0x3cfffb10, 0x30dbe4ce, 0x004ed21b, 0x38ce5cf1, 0x3a494653, 0x3f934352, 0xb6d5}},
     {{0x3ae86371, 0x063739f8, 0x35e3cc81, 0x16df939b, 0x3ffd8e74, 0x33e48277, 0x3d6c14df, 0x1ce84eae, 0x47f3}}},
    /* 13*16^46*G: */
    {{{0x3c66dd33, 0x024cd88b, 0x1dc76dc5, 0x23ef23fc, 0x29b022ea, 0x2c6c5400, 0x3588706b, 0x2ef019b3, 0x61c8}},
     {{0x36f10bfa, 0x0eeea7ce, 0x2820c8ca, 0x1441bab0, 0x05d3fb6a, 0x1a6652e6, 0x0f703446, 0x2788e795, 0x9359}}},
    /* 15*16^46*G: */
    {{{0x1d6b2ff8, 0x2016df33, 0x286c8fa9, 0x18cdb05c, 0x03bdf187, 0x27d4dcfb, 0x2785187c, 0x0ae95d09, 0x94e3}},
     {{0x2ce1af3e, 0x37521554, 0x26bfe13a, 0x0ebc1094, 0x2d9e8cb3, 0x07922198, 0x204e192f, 0x1122d0f6, 0x0d1b}}}
  },
  {
    /*  1*16^47*G: */
    {{{0x3856e241, 0x203978b3, 0x0d6dd287, 0x3c7b8523, 0x1b212b57, 0x0acb98c0, 0x080ea9ed, 0x2ef92c7a, 0x827f}},
     {{0x2ec293ec, 0x1816da2e, 0x2903166d, 0x3de98c61, 0x1d12687f, 0x3bcb19f4, 0x27b0b71b, 0x27248f1c, 0xc60f}}},
    /*  3*16^47*G: */
    {{{0x3bb80fa7, 0x0d12172c, 0x30413886, 0x29f69aed, 0x20819f3a, 0x0681af4c, 0x0c2fbc0d, 0x38c7d8c2, 0x0857}},
     {{0x09366b2d, 0x3660847c, 0x0d7016ab, 0x0b8dc10f, 0x0b714717, 0x1f327477, 0x0172092d, 0x24d08eb8, 0xf643}}},
    /*  5*16^47*G: */
    {{{0x09c70e63, 0x1740b0e8, 0x353d496f, 0x2ee2de39, 0x0a672e9c, 0x171955d9, 0x16004354, 0x333a95af, 0x28aa}},
     {{0x3057da4e, 0x27c0e20b, 0x04da1e8b, 0x3f167391, 0x28ebb7f5, 0x22599f1d, 0x20e1567a, 0x0c8bbe06, 0x2b69}}},
    /*  7*16^47*G: */
    {{{0x33e674b5, 0x007714bd, 0x3060aac6, 0x363da739, 0x2b8a4f92, 0x36cb26f3, 0x1a66145d, 0x2d896815, 0xa2f3}},
     {{0x0e937941, 0x024e3238, 0x033fa53b, 0x08be8c5f, 0x2a7c4b92, 0x112a43cc, 0x068ae800, 0x28565853, 0x620e}}},
    /*  9*16^47*G: */
    {{{0x191eb056, 0x1d8058c7, 0x2cfd386c, 0x00bbf6e3, 0x3515f5a0, 0x22d71a8f, 0x259231d9, 0x20f27aab, 0x3c4f}},
     {{0x205cecab, 0x109624f6, 0x1cf6b877, 0x20ad5120, 0x32788019, 0x3595cf0e, 0x28b6a33a, 0x2401d452, 0x9447}}},
    /* 11*16^47*G: */
    {{{0x3d86dfa9, 0x24187f6e, 0x1b993a71, 0x0e2d2902, 0x103baadc, 0x30780fa0, 0x167d4e29, 0x384a22a6, 0xaff8}},
     {{0x01d12681, 0x1c40f0db, 0x019f9c70, 0x045b6a51, 0x0f53f4f9, 0x0faea87f, 0x37c3fd3d, 0x12ecc84d, 0x8d8b}}},
    /* 13*16^47*G: */
    {{{0x189ba9c1, 0x23c9cdae, 0x09d338e2, 0x03df2968, 0x0ee579e4, 0x16098abb, 0x000b3e84, 0x1e114a37, 0xd3fb}},
     {{0x2b51b267, 0x186e237f, 0x011ade00, 0x073b7570, 0x370fe634, 0x32815d62, 0x2b4e7ca7, 0x350d3be9, 0xf894}}},
    /* 15*16^47*G: */
    {{{0x0f2bb909, 0x36a5b074, 0x3598d999, 0x24409f14, 0x187d7f63, 0x1ca620e4, 0x1aa88ff4, 0x0c0382b2, 0x4ec9}},
     {{0x24cf4071, 0x2228e0fe, 0x1ac3827b, 0x0b85a083, 0x0c49bad5, 0x03711461, 0x304dc5c8, 0x2841af86, 0x782b}}}
  },
  {
    /*  1*16^48*G: */
    {{{0x2120e2b3, 0x3ced63e8, 0x347f9aa7, 0x163f739f, 0x26e5217a, 0x392b8d33, 0x1bdbae7b, 0x127c87d4, 0xeaa6}},
     {{0x3a5ad93d, 0x11e94c16, 0x13f7e59d, 0x29ae597c, 0x39aa5a01, 0x2a03e261, 0x3b03ac69, 0x1e7b56ee, 0xbe32}}},
    /*  3*16^48*G: */
    {{{0x3f2e070d, 0x160ff4e8, 0x12a6a98f, 0x2aadc731, 0x1047e229, 0x1cc70ee1, 0x34abff48, 0x297a410b, 0x4b72}},
     {{0x296dd780, 0x112ea0bb, 0x2948c3de, 0x2d197774, 0x0f3c10b0, 0x1deecdb4, 0x2e1cf602, 0x0753875a, 0x599e}}},
    /*  5*16^48*G: */
    {{{0x0a02591c, 0x2739ff61, 0x05125a1e, 0x3d526596, 0x21fd613e, 0x1afefad7, 0x1c8e285a, 0x24ff194e, 0xa9fc}},
     {{0x29bec2dc, 0x242b77bd, 0x3cf72537, 0x22231057, 0x1165e5ca, 0x1305e86a, 0x387173e8, 0x39ce7714, 0x9c2c}}},
    /*  7*16^48*G: */
    {{{0x2d968b59, 0x0401b838, 0x3cbbc2e1, 0x28a2eb84, 0x1b027709, 0x35eb0482, 0x39f0a6a7, 0x005f069b, 0xc940}},
     {{0x0de572fb, 0x3bf5d902, 0x390c9c8f, 0x210b2d90, 0x35742ce2, 0x2286fe96, 0x3862013b, 0x08940326, 0x39d9}}},
    /*  9*16^48*G: */
    {{{0x326b3332, 0x0a1cccd5, 0x3ee5de6a, 0x00e2341c, 0x0bf8e031, 0x1e4e97dc, 0x10024ec6, 0x2ee75fbb, 0x1f84}},
     {{0x14e8d52e, 0x1510a28c, 0x36dc3a25, 0x2f338b50, 0x39edf0c2, 0x1f09fdd6, 0x29ecc254, 0x1b41caf2, 0xee72}}},
    /* 11*16^48*G: */
    {{{0x0defa98e, 0x336a952b, 0x1ac27995, 0x12111a04, 0x11e9c772, 0x2055ece6, 0x1fcd06ca, 0x38224251, 0x0f13}},
     {{0x3e286767, 0x0229dda6, 0x2ceaccdc, 0x1f9c1785, 0x3362db28, 0x0fe2c29e, 0x27c5035e, 0x087c5d93, 0xadd5}}},
    /* 13*16^48*G: */
    {{{0x29f59b6b, 0x178700ef, 0x1888e2fa, 0x2ce318f0, 0x1826d3e9, 0x0a2874b5, 0x1ec7db37, 0x24695477, 0xdde1}},
     {{0x26cb1410, 0x1ab658a4, 0x3154fecf, 0x15ce2ef9, 0x12e14e8b, 0x1d5f5871, 0x275cbe0a, 0x3ede00a0, 0x5b2b}}},
    /* 15*16^48*G: */
    {{{0x09c6b699, 0x1a3157f7, 0x3e46871b, 0x1bd5cd5a, 0x341682a8, 0x1b5efe5e, 0x36f7a5a1, 0x004bbb60, 0x5fab}},
     {{0x01c6c3aa, 0x05cc854b, 0x2883519b, 0x2ac45ffa, 0x162f7b90, 0x2ed044c3, 0x3d144e9e, 0x3e9c28f0, 0x2d9b}}}
  },
  {
    /*  1*16^49*G: */
    {{{0x1a34d24f, 0x388d8cb7, 0x1a137401, 0x2db63c32, 0x342ee541, 0x077db7b3, 0x3169d939, 0x0b50f173, 0xe4a4}},
     {{0x1eba9414, 0x29fdc4c7, 0x0d8e4f13, 0x21bbb7ea, 0x0ad34ce8, 0x326733ee, 0x1c73526f, 0x24b9c5b4, 0x4d9f}}},
    /*  3*16^49*G: */
    {{{0x3bea0c68, 0x321042bc, 0x37b392b5, 0x10c048d9, 0x396faf09, 0x26f23a34, 0x2a3a2494, 0x258d3855, 0x3e41}},
     {{0x1a45edb6, 0x32edbfdc, 0x03cda1ab, 0x2846518c, 0x0693062f, 0x0f2ff8dc, 0x321f7f37, 0x31676492, 0x0123}}},
    /*  5*16^49*G: */
    {{{0x139824d7, 0x3dd748f2, 0x11c9897a, 0x2ded930d, 0x3f0b576e, 0x128f98bd, 0x17508eed, 0x0e3d5157, 0x8d94}},
     {{0x1366489f, 0x28013d22, 0x26b063d8, 0x2e78ae0c, 0x36ef6f8f, 0x182f4c6a, 0x26c2a2ca, 0x381cd3fb, 0x3261}}},
    /*  7*16^49*G: */
    {{{0x18d713de, 0x39201c6a, 0x028e6208, 0x1830bedd, 0x25454393, 0x2a44a8bf, 0x254420d4, 0x0931563b, 0xb725}},
     {{0x1b8350e9, 0x1bff9496, 0x04a5fcb7, 0x20b49bf9, 0x16941504, 0x0b460ba7, 0x03e45104, 0x2ce6a28a, 0x4c51}}},
    /*  9*16^49*G: */
    {{{0x3e3b2cb4, 0x331b0a4f, 0x37210402, 0x127cd6fc, 0x21149e30, 0x31db8e04, 0x112519ad, 0x17d6885b, 0x3de4}},
     {{0x307eb02f, 0x1878ceb0, 0x287044cf, 0x0f8a3996, 0x3c910682, 0x022a92a5, 0x2addc50e, 0x21661017, 0xba2a}}},
    /* 11*16^49*G: */
    {{{0x2ce4e5bf, 0x08d1d9bd, 0x09005b17, 0x19f2a1a8, 0x0906ae9b, 0x0ff38dd2, 0x1be87c1e, 0x3c71a256, 0x8511}},
     {{0x01789c08, 0x3f24a513, 0x05365262, 0x2a1e226f, 0x2a00232d, 0x377dfb1a, 0x0d4874c1, 0x3d73e46f, 0xecdf}}},
    /* 13*16^49*G: */
    {{{0x3d3258ab, 0x06d59a28, 0x2bc14dc3, 0x3490a062, 0x14ab5957, 0x2871cbb8, 0x360222cf, 0x014ba073, 0x8c5a}},
     {{0x022d0f8f, 0x15f8214c, 0x0d944ade, 0x36ba3e70, 0x0c08c246, 0x2a031e41, 0x3bda1079, 0x36d2ed10, 0x6811}}},
    /* 15*16^49*G: */
    {{{0x3f91bcee, 0x1630a82a, 0x20c0d841, 0x33c763c7, 0x2bf137f5, 0x18f3b155, 0x13560bdc, 0x3e05b7af, 0xcef7}},
     {{0x01966b33, 0x2ed36a7e, 0x172f6ac6, 0x0f92c0a8, 0x1d245fa6, 0x0ecce700, 0x08701246, 0x1320d8dd, 0x67e7}}}
  },
  {
    /*  1*16^50*G: */
    {{{0x0300bf19, 0x1c5cee75, 0x08fea494, 0x2d4d5daa, 0x352b6b92, 0x183eb6ac, 0x0bdd9541, 0x03fbcd83, 0x1ec8}},
     {{0x0107cefd, 0x1c737073, 0x295a07b6, 0x11b9dfd8, 0x2bbf5e01, 0x2925629e, 0x1340d2f3, 0x3a4dd5ad, 0xaeef}}},
    /*  3*16^50*G: */
    {{{0x12fea1f9, 0x2c5f2ef1, 0x00452b94, 0x3fc2d423, 0x106531c4, 0x3f76ad9c, 0x1f2e83bc, 0x22029574, 0xa6dc}},
     {{0x3bc345e9, 0x2c705391, 0x268f7e63, 0x1ee276df, 0x2cbc5005, 0x1a0e845a, 0x367c3038, 0x2a151f70, 0x7ef1}}},
    /*  5*16^50*G: */
    {{{0x06d6c9b3, 0x235030fc, 0x0865637c, 0x1b133a1d, 0x2481ba8c, 0x308a71e2, 0x245992bd, 0x2a4ffa90, 0xfe6b}},
     {{0x2948bdfb, 0x30b1e23e, 0x1c2e9b00, 0x203c6fc1, 0x013b56d9, 0x2d06cd15, 0x39872b6b, 0x0635d014, 0x7ee9}}},
    /*  7*16^50*G: */
    {{{0x0cf95151, 0x08bc41cc, 0x02c4b644, 0x19201b91, 0x08ded1b9, 0x03230b70, 0x098bfb02, 0x38bc51bf, 0x15d5}},
     {{0x2ff8ecf2, 0x20a81f30, 0x1d8c0f94, 0x0813ee5f, 0x1023f9bb, 0x038425e2, 0x3d4ec7f9, 0x0b8c6457, 0xa5b7}}},
    /*  9*16^50*G: */
    {{{0x296a5658, 0x35e042e4, 0x1ef65643, 0x052c9490, 0x2e29be38, 0x1f80249e, 0x0447ad8c, 0x3a1c95a2, 0x84c0}},
     {{0x181b80d1, 0x3659ca6f, 0x34f1fd22, 0x2986a607, 0x13725ed3, 0x1f8c6419, 0x022c4a08, 0x20e03058, 0x2659}}},
    /* 11*16^50*G: */
    {{{0x14dc6a0f, 0x1d6ed722, 0x2fe15753, 0x10d06450, 0x0077c274, 0x09939e8b, 0x3731d565, 0x2c71c6a4, 0xfed6}},
     {{0x176fc7e0, 0x32e35cb6, 0x23fc409c, 0x1d3564c2, 0x13ae2313, 0x24606b93, 0x3ff0a847, 0x2af9ac3f, 0x8de2}}},
    /* 13*16^50*G: */
    {{{0x18e29355, 0x2ce217c4, 0x1720d86d, 0x0723a4ce, 0x23b9d82f, 0x3be18100, 0x3cbc70fc, 0x137664b4, 0x2a6a}},
     {{0x35cc2872, 0x014f803e, 0x0c4c76c0, 0x24168e99, 0x28f90dfe, 0x3f720789, 0x27e0c760, 0x37ee9f12, 0x8677}}},
    /* 15*16^50*G: */
    {{{0x2148dabf, 0x3e7ea23f, 0x09d78eb1, 0x2b74ae4d, 0x3ae735c1, 0x193b08d7, 0x27546d97, 0x24c09b24, 0xe42d}},
     {{0x011e1361, 0x1dcb1d5a, 0x1e77eb9d, 0x1c9d5c06, 0x33853032, 0x0e33aff7, 0x184b0d8b, 0x218b1b8b, 0x6413}}}
  },
  {
    /*  1*16^51*G: */
    {{{0x366642be, 0x376d64a0, 0x158ba889, 0x0d241c5f, 0x0dfa8bce, 0x002bd1a0, 0x30c2f91b, 0x1de30119, 0x146a}},
     {{0x3d83efd0, 0x02ca5d20, 0x37e5ed1d, 0x2aa5c74b, 0x14b2870a, 0x1a609fe7, 0x0028add6, 0x383b0cd5, 0xb318}}},
    /*  3*16^51*G: */
    {{{0x27315443, 0x364e1ce0, 0x2e867299, 0x1e6ef552, 0x2142a13d, 0x32266082, 0x0935ff42, 0x1b010198, 0xfc69}},
     {{0x17d28960, 0x1243582d, 0x09bd1b17, 0x1ffd2184, 0x1677b548, 0x0387375a, 0x35892bbf, 0x09fafe0e, 0xe0ce}}},
    /*  5*16^51*G: */
    {{{0x16fdb4eb, 0x06ecbd70, 0x22e6a79d, 0x28f75e71, 0x3eb0928f, 0x15a8d58a, 0x3f2ad1ae, 0x3c887fd3, 0x974a}},
     {{0x29f6f484, 0x10270f7e, 0x3ffc2348, 0x0715ca8e, 0x0090ed11, 0x0790f40b, 0x003ca64d, 0x0e1f54d4, 0x5552}}},
    /*  7*16^51*G: */
    {{{0x1d5aeee3, 0x0e412b6d, 0x258c8137, 0x0a12f0d9, 0x1270c5e8, 0x086ce99a, 0x2398b091, 0x2d66d277, 0x5baa}},
     {{0x30f69717, 0x0b4a6bed, 0x3d31eed8, 0x1777276a, 0x3fdaf721, 0x28021987, 0x37e856e5, 0x1fd85f03, 0x8a57}}},
    /*  9*16^51*G: */
    {{{0x35726890, 0x146c7913, 0x0837d158, 0x24097fab, 0x110a0ee5, 0x0cbf3afe, 0x1c43d010, 0x17e9fad2, 0xfb68}},
     {{0x3835783a, 0x01baa3ce, 0x10e79b26, 0x29b2c4ba, 0x24ba094f, 0x3285b661, 0x25e2e869, 0x37c8b263, 0xd750}}},
    /* 11*16^51*G: */
    {{{0x28bca48a, 0x1192fc4e, 0x03df62f5, 0x2d357d3a, 0x07f71d78, 0x09ee470a, 0x2995a0ab, 0x23fd9678, 0x5de5}},
     {{0x12fd41cd, 0x21e53a03, 0x20f8aa95, 0x396f6713, 0x2d3c843f, 0x2988f094, 0x19b55309, 0x0ecf600d, 0x685a}}},
    /* 13*16^51*G: */
    {{{0x25ef63b6, 0x378e0d13, 0x31b182eb, 0x2d34059c, 0x0fc1c85a, 0x2dff68ed, 0x218bfaf1, 0x09737ab5, 0x6f18}},
     {{0x05c655f3, 0x0b211b3d, 0x27f94541, 0x22569900, 0x3334553c, 0x108135e0, 0x1911b98f, 0x1f9f7564, 0xff09}}},
    /* 15*16^51*G: */
    {{{0x34a63f3b, 0x2d411fb7, 0x178f9727, 0x080ec066, 0x36c76583, 0x1c457d79, 0x2a376b58, 0x2e257dd8, 0xc5ec}},
     {{0x05005024, 0x14fcdd1a, 0x230bee5b, 0x3ad97b97, 0x1233ec8b, 0x290163fe, 0x081f374e, 0x0946065e, 0x2225}}}
  },
  {
    /*  1*16^52*G: */
    {{{0x3180eef9, 0x35daa1e4, 0x228b9776, 0x00048826, 0x207b128d, 0x2b3aec6a, 0x2e5f07e3, 0x303d8748, 0xfa50}},
     {{0x3f4f2811, 0x233635f4, 0x17a213b3, 0x1a0ca4e9, 0x01a68a5e, 0x334a1c8a, 0x3eba9b72, 0x31a488e5, 0x6b84}}},
    /*  3*16^52*G: */
    {{{0x11da5e12, 0x07b838ce, 0x1cacb297, 0x31829005, 0x1ca2b6a9, 0x0ca7e4e8, 0x1e31bcda, 0x0b8f10de, 0xf750}},
     {{0x0385f4eb, 0x292e717a, 0x325cebc7, 0x21b4cbbd, 0x1672047b, 0x1c25170f, 0x0fafd599, 0x3d7b759f, 0x3c57}}},
    /*  5*16^52*G: */
    {{{0x10b7d105, 0x01d24cc4, 0x0e57c9f2, 0x329712e5, 0x3455b3f4, 0x13d98938, 0x25862a3a, 0x1e3e60eb, 0x12fe}},
     {{0x1f794a60, 0x162b1bee, 0x2ee90b84, 0x3b389975, 0x27cb771d, 0x2d6a8666, 0x2bcf7786, 0x3c68ce35, 0x2062}}},
    /*  7*16^52*G: */
    {{{0x1e0c5d05, 0x188760ce, 0x2572daff, 0x039b142a, 0x084b1a48, 0x12ec40a0, 0x3473d58c, 0x30c4d1f7, 0x76aa}},
     {{0x11ece63e, 0x159866dd, 0x15e6ee35, 0x048973c0, 0x02625f4b, 0x3ccb20c8, 0x070efabe, 0x1dbbc357, 0xef55}}},
    /*  9*16^52*G: */
    {{{0x3c53c086, 0x389bd217, 0x09a1aec9, 0x2d570d27, 0x288104c6, 0x1830c517, 0x05ccc87e, 0x3f96ef97, 0xa663}},
     {{0x25016201, 0x1a7140ca, 0x3994fc0e, 0x07b3295c, 0x023dc399, 0x2c40b226, 0x11fbf5d1, 0x265fdac8, 0xb541}}},
    /* 11*16^52*G: */
    {{{0x0b758574, 0x2b6007b5, 0x34f9c6e9, 0x0c99a250, 0x22bdf3d8, 0x328409eb, 0x2cd825b7, 0x149e8081, 0xde95}},
     {{0x3b67232a, 0x2df7c7f3, 0x15a2deb4, 0x39a84145, 0x169ed7ba, 0x077211fc, 0x3d14e4e2, 0x3815ab24, 0x4cd3}}},
    /* 13*16^52*G: */
    {{{0x3d85474f, 0x1de6e2af, 0x1634668d, 0x13128ae2, 0x385aea89, 0x3732f911, 0x32addbfe, 0x2f3819b4, 0x8da6}},
     {{0x3d7b4ef7, 0x3f7e71f4, 0x1dbdd7a5, 0x073164c1, 0x1dfff10b, 0x377d741c, 0x2d4ff84f, 0x1b1abcc7, 0x13fc}}},
    /* 15*16^52*G: */
    {{{0x3dd042ea, 0x2d750959, 0x18eafd06, 0x3e89a991, 0x3c93beeb, 0x3599278c, 0x3ba39b1b, 0x2b31f3ec, 0x7329}},
     {{0x2f5c94a1, 0x36a33fb0, 0x1fab4f0a, 0x1225dcc7, 0x2b68ee18, 0x2139e53e, 0x36f14892, 0x124d506d, 0x9272}}}
  },
  {
    /*  1*16^53*G: */
    {{{0x1f067ec2, 0x394f4cad, 0x1bba5220, 0x0a22ad75, 0x08e8421a, 0x16fdadf6, 0x21a11b1a, 0x1874329c, 0xda1d}},
     {{0x1ad836f1, 0x157ee83c, 0x279b48a6, 0x29ce2674, 0x091e2966, 0x01d98587, 0x1306c79c, 0x3d569f26, 0x8157}}},
    /*  3*16^53*G: */
    {{{0x3a95a8db, 0x1761dccb, 0x39d36f61, 0x0fb03111, 0x1b1723b8, 0x25991a64, 0x3dd0419e, 0x036918c0, 0xe3e9}},
     {{0x1b0d1cf9, 0x005b3dfc, 0x0984d3d1, 0x2c7be5f3, 0x02e76afb, 0x3eaa431c, 0x0178bb00, 0x0ef0015b, 0xfbe5}}},
    /*  5*16^53*G: */
    {{{0x112ee214, 0x1eabf590, 0x19315401, 0x0a93a5e5, 0x00c01c78, 0x19437f57, 0x3d775a8b, 0x3fb1ccb8, 0x9f4f}},
     {{0x1085f37a, 0x3bd10889, 0x3c880283, 0x066da4c2, 0x35c69d97, 0x259a0bf5, 0x22f2e60e, 0x38b84c63, 0x639c}}},
    /*  7*16^53*G: */
    {{{0x1f61a0a5, 0x22da0514, 0x3c14e3ef, 0x0494f86c, 0x040b2c4b, 0x0682907d, 0x34ac1b17, 0x188b5044, 0x431f}},
     {{0x38cef899, 0x1adedff9, 0x15657724, 0x2eaa810d, 0x23aa7241, 0x3799465c, 0x2438f6d6, 0x0c9ff9ea, 0xa298}}},
    /*  9*16^53*G: */
    {{{0x27748503, 0x2b099f55, 0x31328e7c, 0x1b8391dc, 0x0a12ac0e, 0x18bbce7e, 0x38fb86cb, 0x2eb77b39, 0x993d}},
     {{0x3eb0cee2, 0x2e9cd84d, 0x38adaa49, 0x3e1efda6, 0x21f51a17, 0x3de11e1e, 0x1eeeb785, 0x2a7ba15a, 0xa521}}},
    /* 11*16^53*G: */
    {{{0x26d23d80, 0x37a889d6, 0x2474d478, 0x02f447c9, 0x0962c0e1, 0x250c72e4, 0x15ea5a33, 0x1eae81ab, 0x75f1}},
     {{0x280dd57e, 0x21aa16c0, 0x34ea5909, 0x0bfefb6e, 0x1b629237, 0x31f42fc6, 0x39a80c7f, 0x18bf8558, 0xa07a}}},
    /* 13*16^53*G: */
    {{{0x21ad3413, 0x38ae6db5, 0x327d684a, 0x2e700100, 0x387b7a8d, 0x257d2172, 0x1f4a0a6e, 0x15578476, 0x6678}},
     {{0x3ebca672, 0x09204081, 0x2dc66601, 0x338b454e, 0x0bdf9ea6, 0x099b649f, 0x0f646925, 0x368f789e, 0x510d}}},
    /* 15*16^53*G: */
    {{{0x06cc8563, 0x3002bd6c, 0x3e101eaa, 0x0937d6ff, 0x16368892, 0x320af606, 0x27748ada, 0x128d8b36, 0xebdc}},
     {{0x2394ccfa, 0x26c5ef3a, 0x1204f924, 0x3101e492, 0x1d4f07be, 0x3b8d79b3, 0x2d35f9b1, 0x0c513a15, 0x659a}}}
  },
  {
    /*  1*16^54*G: */
    {{{0x0d064e13, 0x29cec184, 0x06f1e062, 0x0c477811, 0x3d416615, 0x17fe63a3, 0x30690721, 0x20bfc325, 0xa8e2}},
     {{0x11f4cc0c, 0x3bdf1cc4, 0x0dd6bd6c, 0x19e68f94, 0x2515888b, 0x2dfcf16c, 0x01c09abf, 0x0d56e36e, 0x7f97}}},
    /*  3*16^54*G: */
    {{{0x3a3979b5, 0x0a8666c2, 0x27e829e2, 0x0a23e379, 0x240e50ba, 0x0dfc2c7b, 0x1e26327f, 0x01f1736b, 0xae22}},
     {{0x0450fa6f, 0x23cf359a, 0x3d4f8896, 0x2a1edf4d, 0x2d7060fc, 0x3249148e, 0x39f71ad4, 0x3f944301, 0xea91}}},
    /*  5*16^54*G: */
    {{{0x0efca824, 0x10406440, 0x22164fae, 0x2f8313fa, 0x185461e0, 0x31504019, 0x2ace59ce, 0x3b432b5c, 0xcb8d}},
     {{0x0f227361, 0x0502f416, 0x3931742f, 0x2b47f7f1, 0x2ccbc496, 0x05b121e8, 0x188c85b3, 0x0023dd03, 0x33a5}}},
    /*  7*16^54*G: */
    {{{0x3bcbd327, 0x1046d368, 0x1e4aaee9, 0x13821488, 0x276ed6b0, 0x2524035f, 0x1836708e, 0x0eca62bc, 0xb0c5}},
     {{0x2d7be436, 0x185af128, 0x0636a0f1, 0x0a88831d, 0x26b2afd8, 0x3da9806d, 0x17ea1638, 0x25d007ef, 0xee2a}}},
    /*  9*16^54*G: */
    {{{0x17b836a1, 0x39bbed8e, 0x3679ef7d, 0x019017fd, 0x37f526c8, 0x2218bb39, 0x1b920d4d, 0x29cfcca7, 0x6f6b}},
     {{0x06832b84, 0x36f7cbec, 0x0e1ff934, 0x264314a2, 0x3ee9c0d8, 0x02e29016, 0x3c18e3db, 0x2285ffd7, 0xdc77}}},
    /* 11*16^54*G: */
    {{{0x1eb39ede, 0x2bb8d082, 0x30612d42, 0x02200cb5, 0x02436031, 0x3fd19f84, 0x22af4bbc, 0x069f71d0, 0x7d47}},
     {{0x2bf6607e, 0x326f3652, 0x022a8fd0, 0x2573df47, 0x3c86fa77, 0x2088c7bf, 0x2856507b, 0x1ec67ce9, 0x004a}}},
    /* 13*16^54*G: */
    {{{0x165eb1c1, 0x15b52789, 0x1ae5c5aa, 0x335d59f3, 0x02f0967f, 0x03f30c66, 0x33fac707, 0x1458fe6d, 0xf002}},
     {{0x2dde2ae0, 0x369f5c11, 0x2cd11e57, 0x1dbfd735, 0x26afed85, 0x1ad29768, 0x120df4c6, 0x2a7a220f, 0x054e}}},
    /* 15*16^54*G: */
    {{{0x1ac32c64, 0x33cd424f, 0x0ae4bf84, 0x0dbf80fb, 0x07715e0e, 0x013a543d, 0x123aa0f7, 0x0500007b, 0xac12}},
     {{0x1eb1a867, 0x204ab6eb, 0x253f0898, 0x16974e96, 0x0499a3ed, 0x02da55cc, 0x38baf187, 0x2f32eb0c, 0xce8e}}}
  },
  {
    /*  1*16^55*G: */
    {{{0x0319497c, 0x0bce0b7a, 0x12508c02, 0x166c7e94, 0x13cab15d, 0x2795b9a4, 0x285872d3, 0x14ee7268, 0x174a}},
     {{0x079afa73, 0x0f684eb0, 0x0b985438, 0x1ace8763, 0x07f9e664, 0x10557cb1, 0x09c1657b, 0x370deaff, 0xccc9}}},
    /*  3*16^55*G: */
    {{{0x354b8367, 0x25201cf5, 0x3d506bfe, 0x1d6ddf59, 0x036a5db7, 0x2a975161, 0x2526e40c, 0x0252b911, 0x5e5a}},
     {{0x11ce85ca, 0x14ca6a76, 0x1e5ffa44, 0x1aaa7bcf, 0x2a4b7a79, 0x2407c55c, 0x15e05c2c, 0x3e32691e, 0xae8a}}},
    /*  5*16^55*G: */
    {{{0x17b10d9d, 0x06615e4e, 0x11f8fcaf, 0x294bc627, 0x0cb82de6, 0x332e0cc4, 0x02e859de, 0x382b6e5c, 0x00d4}},
     {{0x3140dced, 0x20840121, 0x0e2d923e, 0x1626325e, 0x2287f70b, 0x0be1190c, 0x3640947d, 0x0066060d, 0x87b8}}},
    /*  7*16^55*G: */
    {{{0x1c9caee8, 0x02046982, 0x1a270bb2, 0x0b88116c, 0x04a66763, 0x1e866bbb, 0x374c0f6f, 0x1484da3b, 0x0366}},
     {{0x3772b711, 0x2a7b1a8e, 0x295ba7f0, 0x32ea624c, 0x26944501, 0x27f1a06e, 0x3ded9994, 0x30cacaa4, 0x1f18}}},
    /*  9*16^55*G: */
    {{{0x1446c85c, 0x0ffe5d46, 0x201c0635, 0x0df78239, 0x36c6eade, 0x19db114f, 0x38f1faa0, 0x24415bf6, 0x0e58}},
     {{0x2148972e, 0x3db1df9c, 0x0cddadd5, 0x2408d3a0, 0x081898f4, 0x1d062ebd, 0x27bda0ec, 0x1217c47e, 0xe39a}}},
    /* 11*16^55*G: */
    {{{0x022e1259, 0x3c62b7cf, 0x281362af, 0x05ce6901, 0x07777193, 0x33d7ea80, 0x1463f2b6, 0x049b49bc, 0xa740}},
     {{0x334a5f43, 0x3ddc5c90, 0x31d6dad5, 0x21979d4e, 0x3c7ee517, 0x17c5d299, 0x0f1ff1b0, 0x3feebc65, 0x05a9}}},
    /* 13*16^55*G: */
    {{{0x0b08f1fe, 0x22285e8f, 0x3a087bfd, 0x339fb9c2, 0x02d177d7, 0x1015d976, 0x074e4a65, 0x2e085b65, 0x87e4}},
     {{0x2ed5e2ec, 0x17dd2b26, 0x2786d9d7, 0x0bc8f6f5, 0x38c2cc6e, 0x35fe3a8b, 0x348cecd7, 0x0eb01d98, 0xf74e}}},
    /* 15*16^55*G: */
    {{{0x21c4d15c, 0x2a1c039a, 0x3c0e74b9, 0x17a9efc1, 0x254a4410, 0x308b0304, 0x279a5a92, 0x06d18ffa, 0x35ea}},
     {{0x3f3fe1ea, 0x324e6ebd, 0x065095ed, 0x18cea80c, 0x0d3b185d, 0x23e97f5d, 0x2d2cd788, 0x245946e7, 0xad21}}}
  },
  {
    /*  1*16^56*G: */
    {{{0x1475b7ba, 0x213f7fc2, 0x0918b3d8, 0x0e79cc39, 0x018cdbe0, 0x395fb7d4, 0x3785c3d3, 0x25a60650, 0x9593}},
     {{0x3524f2fd, 0x26e2afe1, 0x0709385e, 0x194fd932, 0x1cd6849c, 0x00e1a92e, 0x331dd8ba, 0x154a2230, 0x2e7e}}},
    /*  3*16^56*G: */
    {{{0x0fd69985, 0x02717764, 0x1df72aea, 0x0c2732db, 0x0ccf149f, 0x3da437ef, 0x32f7e788, 0x1d9d73ad, 0x0ae9}},
     {{0x1409a003, 0x2723ad04, 0x2ee1aff8, 0x2e67505e, 0x1a54c5d0, 0x237fb814, 0x08d14e9b, 0x265cfdb9, 0x9121}}},
    /*  5*16^56*G: */
    {{{0x19262b90, 0x37064f7f, 0x23cc29a9, 0x08f1307f, 0x025d1fb7, 0x197c5de0, 0x1612ec9b, 0x218a96b0, 0x2b15}},
     {{0x083d7557, 0x24665b99, 0x19489a49, 0x14d25c3e, 0x0749066f, 0x0c354b6a, 0x233faa7a, 0x014f6a82, 0x2eb0}}},
    /*  7*16^56*G: */
    {{{0x28e7be40, 0x0fe5c532, 0x1040ee59, 0x34b22524, 0x24769af2, 0x2570585b, 0x2ee677ee, 0x3abb46a5, 0x6af9}},
     {{0x2e387e1c, 0x2905b809, 0x0f59569f, 0x38fd99a8, 0x07dc8145, 0x27a90a0d, 0x06649670, 0x0a845a40, 0xb381}}},
    /*  9*16^56*G: */
    {{{0x3482801e, 0x09adbe83, 0x1bd4155d, 0x1e53e2f1, 0x38d6f940, 0x2aad0932, 0x0144eeb3, 0x1a3b8111, 0x5966}},
     {{0x04870c37, 0x11dc523c, 0x3d3535ad, 0x2db072d8, 0x31304e8d, 0x23e5821d, 0x2ef5f1ec, 0x282a16ee, 0x949a}}},
    /* 11*16^56*G: */
    {{{0x032c19fd, 0x1326cb9f, 0x18028c3e, 0x32ae3a41, 0x170b5b4a, 0x3d345ead, 0x050762fd, 0x346206d4, 0xbe84}},
     {{0x32f1281f, 0x1da5294d, 0x250dc376, 0x1569fd57, 0x08399479, 0x3997d20c, 0x050944d1, 0x1832ccb7, 0xeff9}}},
    /* 13*16^56*G: */
    {{{0x16c69482, 0x346dd7f5, 0x32fa167b, 0x3aad5004, 0x32bc88cb, 0x15c9d32b, 0x17ee541f, 0x280c5303, 0x9867}},
     {{0x2f792cd7, 0x1bc18451, 0x15628a91, 0x189173d4, 0x3a99639e, 0x24b556c6, 0x0834f9c7, 0x18568ec4, 0xd02e}}},
    /* 15*16^56*G: */
    {{{0x1d557aa1, 0x2288e764, 0x101fc297, 0x0764bfb3, 0x19d6abdf, 0x1fcba802, 0x0815a592, 0x3c915036, 0xa866}},
     {{0x01430634, 0x2606eed3, 0x0611a4b7, 0x3ada719f, 0x30e13961, 0x0f63e976, 0x22b44d79, 0x0e7daa00, 0xb587}}}
  },
  {
    /*  1*16^57*G: */
    {{{0x1d82b151, 0x2d44d032, 0x21fba2db, 0x28290f55, 0x109a8fcc, 0x168454ec, 0x01e56d64, 0x0e942b90, 0xd2a6}},
     {{0x1cf89405, 0x105085d3, 0x084ca52d, 0x03dd42bd, 0x148220a7, 0x2bb962ca, 0x3fcb7565, 0x21bed910, 0xe82d}}},
    /*  3*16^57*G: */
    {{{0x2e4b3ba0, 0x2167d8d7, 0x18bf1f17, 0x0aafbd7c, 0x3f245f5c, 0x385c3cc6, 0x3fb73bef, 0x04414887, 0x4108}},
     {{0x17525595, 0x21a58770, 0x1a064554, 0x0d926159, 0x2b849813, 0x2996b875, 0x35668f2c, 0x3cda5dbf, 0xdc37}}},
    /*  5*16^57*G: */
    {{{0x13d98ded, 0x18a726e2, 0x38a02184, 0x37c8a0ce, 0x31d65edb, 0x3c8a6414, 0x0c0c8c8c, 0x2884285b, 0x63a2}},
     {{0x20d1cfc2, 0x06465f53, 0x1c7873a5, 0x2afda802, 0x2d94461f, 0x140cc953, 0x2c76fd06, 0x10b8b9ff, 0x882b}}},
    /*  7*16^57*G: */
    {{{0x38045445, 0x2a186942, 0x01e8d7ee, 0x3fdcdc64, 0x17bef080, 0x04b8b975, 0x167ca3df, 0x20575127, 0x0c15}},
     {{0x0054a206, 0x053e1f55, 0x258cea32, 0x0c15390d, 0x23cd28ba, 0x24f0ed99, 0x14115d0a, 0x35828eba, 0x2f30}}},
    /*  9*16^57*G: */
    {{{0x03857faf, 0x3a448e73, 0x29619701, 0x0bf2b787, 0x28ef7f88, 0x1eea3d20, 0x28a9c0d5, 0x3adae26b, 0xc757}},
     {{0x20584ca4, 0x07676c32, 0x01894c10, 0x1f4c4344, 0x3ec61b62, 0x0da7c822, 0x3ff36257, 0x1673f348, 0xf03a}}},
    /* 11*16^57*G: */
    {{{0x1459225d, 0x3934613d, 0x18858d10, 0x3ebddf8b, 0x1c02a244, 0x17502646, 0x3a0d0f81, 0x18ebab6b, 0xfa80}},
     {{0x3ece1507, 0x28adf8ed, 0x007c59c3, 0x0adb0db4, 0x0c425c0a, 0x37888209, 0x0c069160, 0x07e415f0, 0x0ba7}}},
    /* 13*16^57*G: */
    {{{0x16f0d044, 0x19e7fa50, 0x09e61a79, 0x2ea7f524, 0x2ee0a5aa, 0x3da73e18, 0x257a89e2, 0x28f16740, 0x658c}},
     {{0x37cb872d, 0x3747ccbb, 0x018ce89a, 0x2859d8f1, 0x3bd37655, 0x197589c4, 0x225460f1, 0x304ddeba, 0xae5c}}},
    /* 15*16^57*G: */
    {{{0x3696756d, 0x2d6b255c, 0x2561417a, 0x1abc5815, 0x3f305c67, 0x30660d74, 0x1f2bace4, 0x12d2abe4, 0x31c9}},
     {{0x1e08ae78, 0x2f117a37, 0x2ad1070a, 0x2bb7f2b9, 0x34160683, 0x2e2d66ab, 0x283a9bf4, 0x2212d55b, 0xf80f}}}
  },
  {
    /*  1*16^58*G: */
    {{{0x1617e073, 0x10dbe6d1, 0x039317b3, 0x2b2f6f4e, 0x0fdc866b, 0x39e25b5f, 0x31eb890e, 0x1f88cd51, 0x6458}},
     {{0x1faf6589, 0x20a6797a, 0x33aeab35, 0x2e428e44, 0x0299a185, 0x1b75911f, 0x102e2ae9, 0x33756fda, 0xd99f}}},
    /*  3*16^58*G: */
    {{{0x0e103dd6, 0x37dc51c8, 0x0004859a, 0x1181301f, 0x12a17ac3, 0x084f3f16, 0x203f836a, 0x1ef55690, 0xbc47}},
     {{0x16f7c343, 0x0e420b63, 0x23b44ac6, 0x0a4d5cb1, 0x1ea6395d, 0x2b154b1b, 0x0dd526cb, 0x07890a6a, 0xe31e}}},
    /*  5*16^58*G: */
    {{{0x144eab31, 0x34370ec3, 0x0e634907, 0x316bc501, 0x3bf8e80a, 0x0ed08c99, 0x3b838030, 0x2d3f969a, 0x589d}},
     {{0x11361f6a, 0x106baf9d, 0x148f8db9, 0x18439548, 0x3d90f31f, 0x1c188092, 0x2a2a4f60, 0x11170422, 0x6255}}},
    /*  7*16^58*G: */
    {{{0x1a0c2c41, 0x2fe585ca, 0x20336c67, 0x20c70715, 0x2edb7c42, 0x286182b5, 0x22fa2ea8, 0x2ccdf45b, 0x1339}},
     {{0x29f1bc2b, 0x217c152e, 0x1e923a41, 0x0489fe1f, 0x13a3406b, 0x0c903f44, 0x3ae5ba7a, 0x0a58d8b1, 0x9f9b}}},
    /*  9*16^58*G: */
    {{{0x18fc47af, 0x1c12c7e1, 0x2c0cdec3, 0x377fb20c, 0x01b568a8, 0x00ca6d40, 0x3cf17cc5, 0x2ee844d8, 0x7ff3}},
     {{0x39ba43a7, 0x3e185933, 0x18bac297, 0x294ec6b4, 0x33446b17, 0x32246dd1, 0x0a629a0b, 0x29eba006, 0x1f6b}}},
    /* 11*16^58*G: */
    {{{0x15213775, 0x06135802, 0x3d42a990, 0x2d0a4ec8, 0x2c7f6100, 0x07a4e57f, 0x360bb614, 0x1c118f3a, 0x8ec6}},
     {{0x3841ffff, 0x38043cf9, 0x0cf51e90, 0x36a6282f, 0x2dee0e71, 0x190d0573, 0x25be306e, 0x299be836, 0x8f58}}},
    /* 13*16^58*G: */
    {{{0x3452abbb, 0x32cffe34, 0x2b95c2e3, 0x1aa9cbf8, 0x15d495ae, 0x2eb0ffb6, 0x301bb89d, 0x186d1079, 0x83de}},
     {{0x054eb66e, 0x28145dac, 0x3ce42918, 0x2717cdae, 0x0e1563d7, 0x3edabe31, 0x0609fa6b, 0x38cd28d3, 0x32f0}}},
    /* 15*16^58*G: */
    {{{0x359276f1, 0x25a2309b, 0x2a17b15e, 0x2b896ca4, 0x3cd86833, 0x2ed7003d, 0x0c1db1a8, 0x18e263d4, 0x3d76}},
     {{0x059cbcb3, 0x0792996e, 0x1b197860, 0x08660806, 0x18333ef3, 0x1db8d36b, 0x07ddb609, 0x1a5cde86, 0xd376}}}
  },
  {
    /*  1*16^59*G: */
    {{{0x1d45e458, 0x1635b21b, 0x250e7fd3, 0x02a9b3a8, 0x09de042f, 0x151b4f95, 0x0d885b3a, 0x2f783939, 0x8481}},
     {{0x1779057e, 0x3592c6d6, 0x3262e556, 0x029e710a, 0x2cb2ca90, 0x096fce73, 0x004dd84a, 0x1ee32e95, 0x38ee}}},
    /*  3*16^59*G: */
    {{{0x152da17d, 0x18283e90, 0x0d0646b1, 0x3704f6c2, 0x200bc811, 0x139ac17f, 0x18c5f089, 0x3b4783d4, 0x3bea}},
     {{0x2cc768d2, 0x39c12617, 0x1fec416c, 0x3379dee3, 0x00e1b554, 0x12a2fafa, 0x37acdfef, 0x35fd56bf, 0xc3b0}}},
    /*  5*16^59*G: */
    {{{0x3a4edcc5, 0x0d3e85f6, 0x20311b72, 0x138c8850, 0x275997e7, 0x0b7f00e4, 0x09d61875, 0x36e832f7, 0x6e73}},
     {{0x159da0e4, 0x2cc7df37, 0x00679037, 0x229df69c, 0x02869327, 0x11542222, 0x2cc48bea, 0x307f127b, 0xee0a}}},
    /*  7*16^59*G: */
    {{{0x0a80b979, 0x02713109, 0x29abb314, 0x243d7e8c, 0x07c31004, 0x1f65faa9, 0x1b592762, 0x37624df9, 0x7706}},
     {{0x0126cfde, 0x133d2041, 0x17efe321, 0x3e828d3f, 0x2a9c7117, 0x2375e647, 0x3b714777, 0x2a609f56, 0x8a02}}},
    /*  9*16^59*G: */
    {{{0x326fe285, 0x336e712d, 0x13ef127d, 0x16eb0a50, 0x39e06aa4, 0x3cf1e907, 0x3c0f80d2, 0x08b164a6, 0x16d4}},
     {{0x0155b441, 0x0f83ff9b, 0x3364d423, 0x0fc3044d, 0x3531b1e9, 0x2df9a698, 0x22641a8a, 0x223e9478, 0x0df8}}},
    /* 11*16^59*G: */
    {{{0x3acfa513, 0x38c42f2a, 0x260e3aea, 0x0901e7e6, 0x356a9c4e, 0x28d11d43, 0x36d63aa5, 0x0391fbb1, 0x1fcc}},
     {{0x107afc9c, 0x141d6e90, 0x09839187, 0x3b7b7459, 0x39f9b44b, 0x38e1d50c, 0x35478b48, 0x30681078, 0x165d}}},
    /* 13*16^59*G: */
    {{{0x3edc69b2, 0x0689c1f3, 0x26b77172, 0x0298226c, 0x0aa386a5, 0x190c10d7, 0x0b8a1730, 0x241ceb5b, 0xc12b}},
     {{0x20dd41dd, 0x0caba6c0, 0x127b2a00, 0x3b876f8f, 0x094976b8, 0x1cb7227e, 0x0cdf1d97, 0x310ff94d, 0x3173}}},
    /* 15*16^59*G: */
    {{{0x3961fe4d, 0x2dbd6177, 0x3107197a, 0x05221be2, 0x2ca73e8a, 0x0fa4c4c4, 0x27a8fa3f, 0x2fe1770c, 0xd059}},
     {{0x2ae823c2, 0x264d6c19, 0x0dab64cb, 0x0e22e87d, 0x0955b4fd, 0x01d97721, 0x3525e3fe, 0x1e983022, 0x4510}}}
  },
  {
    /*  1*16^60*G: */
    {{{0x2caf666b, 0x3358c0fd, 0x0b1ce30b, 0x3f3fb4f1, 0x17f4637f, 0x1a5e6ba0, 0x102aa62b, 0x1295e9e0, 0x1346}},
     {{0x3f6ecc27, 0x3d256a41, 0x10942e13, 0x3cc02a07, 0x0cb0ca48, 0x390cd14f, 0x14580ef7, 0x05640118, 0x69be}}},
    /*  3*16^60*G: */
    {{{0x0eca5f51, 0x085ac826, 0x0fc9aebf, 0x3a85c6e5, 0x05b5cfdd, 0x3b5acafc, 0x2e6962c6, 0x35453767, 0xdde9}},
     {{0x10c638f7, 0x2b5a69cf, 0x289571f9, 0x3fbafa37, 0x3f8f0950, 0x07cd2c29, 0x28111d89, 0x1a44cf38, 0xb84e}}},
    /*  5*16^60*G: */
    {{{0x199c88e4, 0x3e41ac16, 0x0ad46ec2, 0x3b544f88, 0x204b179a, 0x3d01bac4, 0x193736e9, 0x188408da, 0xfd1a}},
     {{0x195bc8df, 0x27232459, 0x1cc00f29, 0x1adc7525, 0x177782dc, 0x0f01a552, 0x0c20bfb1, 0x1ed52e72, 0x1ac9}}},
    /*  7*16^60*G: */
    {{{0x1f8018ce, 0x35456d6d, 0x1892d68b, 0x0b695ce3, 0x086dc7cf, 0x3ff393cb, 0x296b9f13, 0x214c7630, 0x4ee4}},
     {{0x1e48381f, 0x30d6986c, 0x0e806013, 0x01d25c6d, 0x07c5e671, 0x2d102343, 0x3f8b5fc7, 0x27b52042, 0xb68f}}},
    /*  9*16^60*G: */
    {{{0x31473678, 0x0a14ba47, 0x14392f70, 0x2815e542, 0x38c070cb, 0x38c53156, 0x000dbff5, 0x33270d31, 0xfd76}},
     {{0x0d144f4f, 0x38593baa, 0x001c8437, 0x18a3bb85, 0x032cd660, 0x3b829cf4, 0x143dae0f, 0x1950de1c, 0xf204}}},
    /* 11*16^60*G: */
    {{{0x0d7a2193, 0x3c02dc52, 0x197546ed, 0x1a47913c, 0x34ea212c, 0x1b3a09d2, 0x3b40219e, 0x2ae8cc48, 0x85a2}},
     {{0x30cdcf3a, 0x3c320f52, 0x03b12427, 0x31b6b7e7, 0x0c029fe1, 0x31820b47, 0x30516d82, 0x2615faca, 0x9c12}}},
    /* 13*16^60*G: */
    {{{0x377568b0, 0x16c0c16c, 0x1e03b053, 0x2ba37406, 0x03650f35, 0x2db5b15e, 0x3fe74440, 0x36ff1cf3, 0xd25d}},
     {{0x1f39929c, 0x0284e49b, 0x23c3f006, 0x089ce207, 0x27d92b83, 0x2bbdd337, 0x048938be, 0x3fdd64fe, 0x7a3a}}},
    /* 15*16^60*G: */
    {{{0x271d7c13, 0x17f94462, 0x20ffa385, 0x06ad7dfe, 0x2ac80564, 0x01fa6a5e, 0x14a7255f, 0x0d4c50fa, 0x4581}},
     {{0x3aff63cf, 0x18e2f154, 0x2bd96b99, 0x08019550, 0x1d69c970, 0x3d43c5df, 0x39ad8b57, 0x163b0525, 0x9f58}}}
  },
  {
    /*  1*16^61*G: */
    {{{0x2d83f366, 0x2b68e834, 0x2f28588c, 0x36733b78, 0x1dc97a0c, 0x3d0c2f30, 0x3fe2e9ae, 0x277d6dc4, 0xbc4a}},
     {{0x181f33c1, 0x1d635999, 0x2547b16d, 0x3a2a7efe, 0x3798caa6, 0x24deb7d2, 0x05c06383, 0x20729b9e, 0x0d3a}}},
    /*  3*16^61*G: */
    {{{0x3712be3c, 0x01a8b8cb, 0x2146a66b, 0x257c63b6, 0x00153472, 0x1c976eac, 0x1b378d3c, 0x0d2764cc, 0x39d7}},
     {{0x1c6ff65c, 0x30c067d0, 0x0a41644c, 0x17bde97b, 0x2812e8ef, 0x09d55319, 0x33bf7fb1, 0x26d3d5bb, 0x8f92}}},
    /*  5*16^61*G: */
    {{{0x1f77f22b, 0x2ab93ef3, 0x0f82e035, 0x265c8e65, 0x15af26c6, 0x0735b0a6, 0x01dd09e5, 0x2985fdf7, 0xf0cb}},
     {{0x1909a03c, 0x3f238b1d, 0x0a095661, 0x3c631fa4, 0x16d04004, 0x0c9b0d94, 0x1df989ef, 0x2ad0c4fe, 0x1a25}}},
    /*  7*16^61*G: */
    {{{0x06509c12, 0x22b37353, 0x3d1f4765, 0x1aff88d6, 0x3268ed8d, 0x05c3a361, 0x154d321d, 0x1eae76c8, 0x381d}},
     {{0x2eb46102, 0x1190aa38, 0x0e6eaf75, 0x160a161b, 0x2581e720, 0x34915ce9, 0x23da9eb5, 0x2ad6dff6, 0xa47a}}},
    /*  9*16^61*G: */
    {{{0x384fe955, 0x36ced358, 0x063bce48, 0x2655a968, 0x0c8a53f6, 0x0edcf9a5, 0x387e6479, 0x3c1519ea, 0xa703}},
     {{0x161344bd, 0x09acbbef, 0x197277fa, 0x27858a71, 0x19199b53, 0x29e4b5ac, 0x047adc0e, 0x3e4d68ac, 0xd500}}},
    /* 11*16^61*G: */
    {{{0x06eace58, 0x126595b0, 0x2f3211d3, 0x1f9158e8, 0x13a03f1b, 0x1ab435c1, 0x150d746c, 0x2cf16ab5, 0x73c6}},
     {{0x2af8654e, 0x05c2a45c, 0x3b8d2917, 0x1aa1e36e, 0x2d91c6aa, 0x242644d9, 0x24f741ba, 0x2d291cce, 0x3a2f}}},
    /* 13*16^61*G: */
    {{{0x00181d5e, 0x12ce22fc, 0x15aaf205, 0x1c6cea6e, 0x0eddb8de, 0x0034e870, 0x147fda1d, 0x3cf9d41b, 0xc627}},
     {{0x369f886d, 0x09e40298, 0x1cbe2c39, 0x3dac0152, 0x21f7d68e, 0x1a5804e2, 0x02a63b2d, 0x2775c791, 0xd78f}}},
    /* 15*16^61*G: */
    {{{0x37828b16, 0x138a367e, 0x0a4847f3, 0x11e563ca, 0x06de53a0, 0x17d029bc, 0x3d233fa2, 0x3eaf83b7, 0xbb88}},
     {{0x0aea5df7, 0x1451ce88, 0x3a1e969c, 0x12a05d38, 0x159163ec, 0x37165804, 0x1e8dd345, 0x1dacc13d, 0xb736}}}
  },
  {
    /*  1*16^62*G: */
    {{{0x25324caa, 0x152acc3f, 0x29472a39, 0x12d978c2, 0x12a32e69, 0x3631d251, 0x18bc0d23, 0x2a5efe0a, 0x8c28}},
     {{0x0bef9482, 0x39c771cf, 0x11cb9459, 0x39e13c11, 0x3cc0eb7a, 0x3fb7cc7d, 0x05193378, 0x0118e8cc, 0x40a3}}},
    /*  3*16^62*G: */
    {{{0x0754dd40, 0x18fa1c55, 0x03466cf8, 0x10898c7f, 0x32f6e9a2, 0x12107f35, 0x0dfcf45b, 0x091c0cb0, 0x9729}},
     {{0x2aa36143, 0x212d24bc, 0x1acaf493, 0x36ba1495, 0x14df3690, 0x171d772f, 0x3ea1dcd1, 0x28910997, 0x91d1}}},
    /*  5*16^62*G: */
    {{{0x0c2ca7ff, 0x30b60bae, 0x1df021a3, 0x00d91765, 0x2f27af18, 0x1e46b568, 0x2796e050, 0x1fe5d602, 0x8963}},
     {{0x30493e68, 0x3b505785, 0x242eab7b, 0x1ef1a8e3, 0x357489f8, 0x2e73c550, 0x08424d57, 0x38492322, 0x2d1f}}},
    /*  7*16^62*G: */
    {{{0x0ca8dd7f, 0x061b58e8, 0x2a1381a6, 0x31ca00d5, 0x1357421b, 0x327680f5, 0x25e092fd, 0x0e39c6f8, 0x3081}},
     {{0x0a92c7f2, 0x1057c91e, 0x34ad915e, 0x05959190, 0x008e18c8, 0x27b11745, 0x0fc925e3, 0x38b4a20a, 0x28d1}}},
    /*  9*16^62*G: */
    {{{0x066a3fb1, 0x037315a2, 0x192e206c, 0x30024a06, 0x36862f6e, 0x15d43216, 0x1eb65d1e, 0x313a0a9b, 0x575f}},
     {{0x102655ad, 0x26e3a42a, 0x2a3af2f0, 0x0ced5cf1, 0x0e87daed, 0x076f0a5e, 0x2fca2d67, 0x36e410a9, 0x6f6e}}},
    /* 11*16^62*G: */
    {{{0x390117df, 0x06daa291, 0x22010292, 0x094eeef3, 0x2a2a8fda, 0x3c9be07b, 0x2ab7a227, 0x240dad93, 0xa5ec}},
     {{0x386462fe, 0x204a04cf, 0x214a363d, 0x21187c15, 0x1fa0f71c, 0x25e60eb4, 0x140400c5, 0x319897b0, 0xb79d}}},
    /* 13*16^62*G: */
    {{{0x172ad712, 0x2c3e5d70, 0x21047290, 0x0e632c37, 0x2349b95a, 0x39e5d851, 0x10b0949d, 0x37fa44cc, 0xa153}},
     {{0x0d48fdd2, 0x2297d94e, 0x2f0b329c, 0x014fca16, 0x31b89abd, 0x0c6357c7, 0x05b2fc48, 0x36104fec, 0xfd94}}},
    /* 15*16^62*G: */
    {{{0x11cf5b3a, 0x0c30dc04, 0x1b5a7810, 0x10cea0ef, 0x2dc824c4, 0x30d34223, 0x14615935, 0x06b1abde, 0x9a54}},
     {{0x36a44ae4, 0x0fd55d7c, 0x21ea52d6, 0x123fb894, 0x0f475f55, 0x386bcda2, 0x06ab7caf, 0x123072c4, 0xb661}}}
  },
  {
    /*  1*16^63*G: */
    {{{0x1faccae0, 0x2312e844, 0x24bb3374, 0x22cd4316, 0x071fd23c, 0x3653393c, 0x127a8c1d, 0x259984e5, 0x08ea}},
     {{0x0e62b945, 0x16bcd28c, 0x0f0f8e95, 0x2de0efa7, 0x15c5d735, 0x39f033ee, 0x22782e24, 0x3eaef23b, 0x620e}}},
    /*  3*16^63*G: */
    {{{0x26a06f5e, 0x06902d65, 0x2a083702, 0x1064945b, 0x23b716a3, 0x2c350849, 0x0253ac37, 0x093efa85, 0x383b}},
     {{0x13c6e772, 0x227d1e1b, 0x38c2b040, 0x3dab9d2e, 0x2a5a19e8, 0x3d59b553, 0x1ba2044c, 0x1c1ab13b, 0x54cf}}},
    /*  5*16^63*G: */
    {{{0x0638a136, 0x1e5d7075, 0x2838195c, 0x034738cd, 0x0d790c2b, 0x39671ad8, 0x2ed6d789, 0x0cb40f80, 0xe684}},
     {{0x0c6c2584, 0x2bf46042, 0x3357336a, 0x0278faf6, 0x01e6472e, 0x0a9cc0e8, 0x35a6624d, 0x3904e638, 0xca5b}}},
    /*  7*16^63*G: */
    {{{0x16e8c10c, 0x33a1f110, 0x11bd6807, 0x1ca617ce, 0x306e7fb4, 0x3ef7b39c, 0x25c2a0ee, 0x355678bf, 0x395d}},
     {{0x05fe638e, 0x30f5b64c, 0x066922cb, 0x24270137, 0x3a4e274c, 0x04fa1ebf, 0x12ac5d04, 0x37352d16, 0xfd62}}},
    /*  9*16^63*G: */
    {{{0x0d6c14ef, 0x059936c8, 0x2f93c8f5, 0x163f1d41, 0x22648008, 0x3bb56fbb, 0x25dcb9f6, 0x12b70d54, 0x7a51}},
     {{0x0b3fbd13, 0x2b4f861c, 0x2a6e24f7, 0x2fabbdca, 0x0f5c3729, 0x1fc2e532, 0x2e4d8e89, 0x347fb454, 0x56ed}}},
    /* 11*16^63*G: */
    {{{0x0f6d65eb, 0x2a518f41, 0x04021524, 0x26441dd5, 0x108f235a, 0x23bcefd2, 0x1d90d8ea, 0x3f5610c9, 0x1ee1}},
     {{0x1d22941c, 0x380dae49, 0x23582b11, 0x0cbd3a61, 0x02fcfaca, 0x2ae7f13d, 0x2c73c1cf, 0x0a246f75, 0xbb69}}},
    /* 13*16^63*G: */
    {{{0x0e36cb44, 0x3c6543bc, 0x1ca20191, 0x1fa2db23, 0x03357d61, 0x163f4362, 0x3aaa8bc0, 0x158d34e3, 0x1551}},
     {{0x1f495a68, 0x0a6bd194, 0x020c1e53, 0x30dc5d7c, 0x23205da8, 0x038fc2d1, 0x35215e37, 0x3ff1d555, 0xab4f}}},
    /* 15*16^63*G: */
    {{{0x3427bacc, 0x07e51841, 0x12d62e15, 0x1ccc5937, 0x0dc4aa9e, 0x163ac256, 0x35201363, 0x2f1911af, 0x3bc6}},
     {{0x2ad6fda6, 0x130cff57, 0x28beb471, 0x06dd6948, 0x16c02bd7, 0x18bb889b, 0x2c305cdb, 0x17301c5d, 0x8e30}}}
  },
    }
#endif
};

// 4 byte prefix + 40 byte data (segwit)
// 1 byte prefix + 64 byte data (cashaddr)
#define MAX_ADDR_RAW_SIZE 65
// bottle neck is cashaddr
// segwit is at most 90 characters plus NUL separator
// cashaddr: human readable prefix + 1 separator + 104 data + 8 checksum + 1 NUL
// we choose 130 as maximum (including NUL character)
#define MAX_ADDR_SIZE 130
// 4 byte prefix + 32 byte privkey + 1 byte compressed marker
#define MAX_WIF_RAW_SIZE (4 + 32 + 1)
// (4 + 32 + 1 + 4 [checksum]) * 8 / log2(58) plus NUL.
#define MAX_WIF_SIZE (57)

void point_copy(const curve_point *cp1, curve_point *cp2);

void point_set_infinity(curve_point *p);

int point_is_infinity(const curve_point *p);

int point_is_equal(const curve_point *p, const curve_point *q);

void point_double(const ecdsa_curve *curve, curve_point *cp);

int point_is_negative_of(const curve_point *p, const curve_point *q);

void point_add(const ecdsa_curve *curve, const curve_point *cp1,
               curve_point *cp2);

void conditional_negate(uint32_t cond, bignum256 *a, const bignum256 *prime);

typedef struct jacobian_curve_point {
  bignum256 x, y, z;
} jacobian_curve_point;

static void generate_k_random(bignum256 *k, const bignum256 *prime);

void curve_to_jacobian(const curve_point *p, jacobian_curve_point *jp,
                       const bignum256 *prime);

 void jacobian_to_curve(const jacobian_curve_point *jp, curve_point *p,
                        const bignum256 *prime);

void point_jacobian_add(const curve_point *p1, jacobian_curve_point *p2,
                                                const ecdsa_curve *curve);

void point_jacobian_double(jacobian_curve_point *p, const ecdsa_curve *curve);

void point_multiply(const ecdsa_curve *curve, const bignum256 *k,
                    const curve_point *p, curve_point *res);

void scalar_multiply(const ecdsa_curve *curve, const bignum256 *k,
                     curve_point *res);

int ecdsa_validate_pubkey(const ecdsa_curve *curve, const curve_point *pub);

void uncompress_coords(const ecdsa_curve *curve, uint8_t odd,
                       const bignum256 *x, bignum256 *y);

 int ecdsa_read_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
                       curve_point *pub);

 int ecdh_multiply(const ecdsa_curve *curve, const uint8_t *priv_key,
                   const uint8_t *pub_key, uint8_t *session_key);

 int ecdsa_sign_digest(const ecdsa_curve *curve, const uint8_t *priv_key,
                       const uint8_t *digest, uint8_t *sig, uint8_t *pby,
                       int (*is_canonical)(uint8_t by, uint8_t sig[64]));

 void ecdsa_get_public_key33(const ecdsa_curve *curve, const uint8_t *priv_key,
                             uint8_t *pub_key);

 void ecdsa_get_public_key65(const ecdsa_curve *curve, const uint8_t *priv_key,
                             uint8_t *pub_key);

int ecdsa_uncompress_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
 uint8_t *uncompressed);

void compress_coords(const curve_point *cp, uint8_t *compressed);

int ecdsa_recover_pub_from_sig(const ecdsa_curve *curve, uint8_t *pub_key,
                               const uint8_t *sig, const uint8_t *digest,
                               int recid);

 int ecdsa_verify_digest(const ecdsa_curve *curve, const uint8_t *pub_key,
                         const uint8_t *sig, const uint8_t *digest);

int ecdsa_sig_to_der(const uint8_t *sig, uint8_t *der);

// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#if defined(INSIDE_ENCLAVE)

#define PUBLIC_KEY_SIZE 512

class CryptoRSA
{
  private:
    mbedtls_ctr_drbg_context m_ctr_drbg_contex;
    mbedtls_entropy_context m_entropy_context;
    mbedtls_pk_context m_pk_context;
    uint8_t m_public_key[512];
    bool m_initialized;

    // Public key of another enclave.
    uint8_t m_other_enclave_pubkey[PUBLIC_KEY_SIZE];

  public:
    CryptoRSA();
    ~CryptoRSA();

    /**
     * Get this enclave's own public key
     */
    void retrieve_public_key(uint8_t pem_public_key[512]);

    /**
     * Encrypt encrypts the given data using the given public key.
     * Used to encrypt data using the public key of another enclave.
     */
    bool Encrypt(
        const uint8_t* pem_public_key,
        const uint8_t* data,
        size_t size,
        uint8_t* encrypted_data,
        size_t* encrypted_data_size);

    /**
     * decrypt decrypts the given data using current enclave's private key.
     * Used to receive encrypted data from another enclave.
     */
    bool decrypt(
        const uint8_t* encrypted_data,
        size_t encrypted_data_size,
        uint8_t* data,
        size_t* data_size);

    /**
     * get_rsa_modulus_from_pem returns the RSA modulus in big endian format
     * from the public key PEM data. This is needed to verify the MRSIGNER
     * of the other enclave, which ensures that the other enclave has been
     * signed by the right key. MRSIGNER is the SHA256 hash of the modulus
     * in little endian.
     */
    bool get_rsa_modulus_from_pem(
        const char* pem_data,
        size_t pem_size,
        uint8_t** modulus,
        size_t* modulus_size);

    // Public key of another enclave.
    uint8_t* get_the_other_enclave_public_key()
    {
        return m_other_enclave_pubkey;
    }

    /**
     * Compute the sha256 hash of given data.
     */
    int Sha256(const uint8_t* data, size_t data_size, uint8_t sha256[32]);

  private:
    /**
     * Crypto demonstrates use of mbedtls within the enclave to generate keys
     * and perform encryption. In this sample, each enclave instance generates
     * an ephemeral 2048-bit RSA key pair and shares the public key with the
     * other instance. The other enclave instance then replies with data
     * encrypted to the provided public key.
     */

    /** init_mbedtls initializes the crypto module.
     */
    bool init_mbedtls(void);

    void cleanup_mbedtls(void);
};

#endif

bool set_json_offsets(char **json_str, size_t *size);

uint8_t *sign_json_payload(char *json_str, size_t size, uint8_t *priv_key);

bool valid_json_sig(char *json_str, size_t size, StrMap* p_json);

int calc_challenge_hash(uint8_t *nonce_buf, uint8_t *pub_key_buf, uint8_t *challenge_hash);

#if defined(INSIDE_ENCLAVE)

uint8_t *pem_pub_to_mr_signer(uint8_t *pub_pem_buf, size_t pub_pem_len, uint8_t *mr_signer_out);

#endif

bool verify_api_message(char *msg_buf, size_t msg_len, uint8_t* pub_pem_buf=0, size_t pub_pem_len=0);
    
char *api_message(
    const char *call,
    char *params_buf, size_t params_len,
    uint8_t *secp256k1_priv_b32, 
    unsigned int demo=0,
    uint8_t *target_info_buf=0, size_t target_info_size=0,
    const char *reply_mode="long_poll");
    

/*
    web.h - BSD LICENSE - Andreas Fredriksson

ABOUT:
    This is a web server intended for debugging tools inside a
    program with a continously running main loop. It's intended to be used when
    all you need is something tiny and performance isn't a key concern.
    NOTE: this is a single header port of Andreas Fredrikss
    Webby(https://github.com/deplinenoise/webby).

    Features
    - Single header library to be easy to embed into your code.
    - No dynamic memory allocations -- server memory is completely fixed
    - No threading, all I/O and serving happens on the calling thread
    - Supports socket keep-alives
    - Supports the 100-Continue scheme for file uploading
    - Basic support for WebSockets is available.

    Because request/response I/O is synchronous on the calling thread, performance
    will suffer when you are serving data. For the use-cases wby is intended for,
    this is fine. You can still run wby in a background thread at your
    discretion if this is a problem.

DEFINES:
    WBY_IMPLEMENTATION
        Generates the implementation of the library into the included file.
        If not provided the library is in header only mode and can be included
        in other headers or source files without problems. But only ONE file
        should hold the implementation.

    WBY_STATIC
        The generated implementation will stay private inside implementation
        file and all internal symbols and functions will only be visible inside
        that file.

    WBY_ASSERT
    WBY_USE_ASSERT
        If you define WBY_USE_ASSERT without defining ASSERT web.h
        will use assert.h and asssert(). Otherwise it will use your assert
        method. If you do not define WBY_USE_ASSERT no additional checks
        will be added. This is the only C standard library function used
        by web.

    WBY_UINT_PTR
        If your compiler is C99 you do not need to define this.
        Otherwise, web will try default assignments for them
        and validate them at compile time. If they are incorrect, you will
        get compile errors and will need to define them yourself.

        You can define this to 'size_t' if you use the standard library,
        otherwise it needs to be able to hold the maximum addressable memory
        space. If you do not define this it will default to unsigned long.


LICENSE: (BSD)
    Copyright (c) 2016, Andreas Fredriksson, Micha Mettke
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
    ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

CONTRIBUTORS:
    Andreas Fredriksson (implementation)
    Micha Mettke (single header conversion)

USAGE:
    Request handling
        When you configure the server, you give it a function pointer to your
        dispatcher. The dispatcher is called by wby when a request has been fully
        read into memory and is ready for processing. The socket the request came in on
        has then been switched to blocking mode, and you're free to read any request
        data using `wby_read()` (if present, check `content_length`) and then write
        your response.
        There are two ways to generate a response; explicit size or chunked.

    When you know the size of the data
        When you know in advance how big the response is going to be, you should pass
        that size in bytes to `wby_response_begin()` (it will be sent as the
        Content-Length header). You then call `wby_write()` to push that data out, and
        finally `wby_response_end()` to finalize the response and prepare the socket
        for a new request.

    When the response size is dynamic
        Sometimes you want to generate an arbitrary amount of text in the response, and
        you don't know how much that will be. Rather than buffering everything in RAM,
        you can use chunked encoding. First call `wby_response_begin()` as normal, but
        pass it -1 for the content length. This triggers sending the
        `Transfer-Encoding: chunked` header. You then call `wby_write()` as desired
        until the response is complete. When you're done, call `wby_response_end()` to finish up.

EXAMPLES:
    for a actual working example please look inside tests/wby_test.c */
#if 0
/* request and websocket handling callback */
static int dispatch(struct wby_con *connection, void *pArg);
static int websocket_connect(struct wby_con *conn, void *pArg);
static void websocket_connected(struct wby_con *con, void *pArg);
static int websocket_frame(struct wby_con *conn, const struct wby_frame *frame, void *pArg);
static void websocket_closed(struct wby_con *connection, void *pArg);

int main(int argc, const char * argv[])
{
    /* setup config */
    struct wby_config config;
    memset(config, 0, sizeof(config));
    config.address = "127.0.0.1";
    config.port = 8888;
    config.connection_max = 8;
    config.request_buffer_size = 2048;
    config.io_buffer_size = 8192;
    config.dispatch = dispatch;
    config.ws_connect = websocket_connect;
    config.ws_connected = websocket_connected;
    config.ws_frame = websocket_frame;
    config.ws_closed = websocket_closed;

    /* compute and allocate needed memory and start server */
    struct wby_server server;
    size_t needed_memory;
    wby_server_init(&server, &config, &needed_memory);
    void *memory = calloc(needed_memory, 1);
    wby_server_start(&server, memory);
    while (1) {
        wby_server_update(&server);

    }
    wby_server_stop(&server);
    free(memory);
}
#endif
 /* ===============================================================
 *
 *                          HEADER
 *
 * =============================================================== */
#ifndef WBY_H_
#define WBY_H_

#include <stdarg.h>
#include <cstdarg>

#ifdef __cplusplus
extern "C" {
#endif


#define WBY_API extern

#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 19901L)
#include <stdint.h>


#ifndef WBY_UINT_PTR
#define WBY_UINT_PTR uintptr_t
#endif
#else
#ifndef WBY_UINT_PTR


#if defined(__i386__) || defined(EMSCRIPTEN) || (!defined(_WIN64) && defined(_WIN32))
#define WBY_UINT_PTR unsigned long
#else
#define WBY_UINT_PTR unsigned long long
#endif

#endif
#endif





typedef unsigned char wby_byte;
typedef size_t wby_size;
// typedef WBY_UINT_PTR wby_size;
typedef WBY_UINT_PTR wby_ptr;

#define WBY_OK (0)
#define WBY_FLAG(x) (1 << (x))

#ifndef WBY_MAX_HEADERS
#define WBY_MAX_HEADERS 64
#endif

struct wby_header {
    const char *name;
    const char *value;
};

/* A HTTP request. */
struct wby_request {
    const char *method;
    /* The method of the request, e.g. "GET", "POST" and so on */
    const char *uri;
    /* The URI that was used. */
    const char *http_version;
    /* The used HTTP version */
    const char *query_params;
    /* The query parameters passed in the URL, or NULL if none were passed. */
    int content_length;
    /* The number of bytes of request body that are available via WebbyRead() */
    int header_count;
    /* The number of headers */
    struct wby_header headers[WBY_MAX_HEADERS];
    /* Request headers */
};

/* Connection state, as published to the serving callback. */
struct wby_con {
    struct wby_request request;
    /* The request being served. Read-only. */
    void *user_data;
    /* User data. Read-write. wby doesn't care about this. */
};

struct server_state {
	int quit;
	unsigned frame_counter;
	struct wby_con* conn[MAX_WSCONN];
	int conn_count;
};

struct wby_frame {
    wby_byte flags;
    wby_byte opcode;
    wby_byte header_size;
    wby_byte padding_;
    wby_byte mask_key[4];
    int payload_length;
};

enum wby_websock_flags {
    WBY_WSF_FIN    = WBY_FLAG(0),
    WBY_WSF_MASKED = WBY_FLAG(1)
};

enum wby_websock_operation {
    WBY_WSOP_CONTINUATION    = 0,
    WBY_WSOP_TEXT_FRAME      = 1,
    WBY_WSOP_BINARY_FRAME    = 2,
    WBY_WSOP_CLOSE           = 8,
    WBY_WSOP_PING            = 9,
    WBY_WSOP_PONG            = 10
};

/* Configuration data required for starting a server. */
typedef void(*wby_log_f)(const char *msg);
struct wby_config {
    void *userdata;
    /* userdata which will be passed */
    const char *address;
    /* The bind address. Must be a textual IP address. */
    unsigned short port;
    /* The port to listen to. */
    unsigned int connection_max;
    /* Maximum number of simultaneous connections. */
    wby_size request_buffer_size;
    /* The size of the request buffer. This must be big enough to contain all
    * headers and the request line sent by the client. 2-4k is a good size for
    * this buffer. */
    wby_size io_buffer_size;
    /* The size of the I/O buffer, used when writing the reponse. 4k is a good
    * choice for this buffer.*/
    wby_log_f log;
    /* Optional callback function that receives debug log text (without newlines). */
    int(*dispatch)(struct wby_con *con, void *userdata, void *server);
    /* Request dispatcher function. This function is called when the request
    * structure is ready.
    * If you decide to handle the request, call wby_response_begin(),
    * wby_write() and wby_response_end() and then return 0. Otherwise, return a
    * non-zero value to have Webby send back a 404 response. */
    int(*ws_connect)(struct wby_con*, void *userdata);
    /*WebSocket connection dispatcher. Called when an incoming request wants to
    * update to a WebSocket connection.
    * Return 0 to allow the connection.
    * Return 1 to ignore the connection.*/
    void (*ws_connected)(struct wby_con*, void *userdata);
    /* Called when a WebSocket connection has been established.*/
    void (*ws_closed)(struct wby_con*, void *userdata);
    /*Called when a WebSocket connection has been closed.*/
    int (*ws_frame)(struct wby_con*, const struct wby_frame *frame, void *userdata);
    /*Called when a WebSocket data frame is incoming.
    * Call wby_read() to read the payload data.
    * Return non-zero to close the connection.*/
};

struct wby_connection;
struct wby_server {
    struct wby_config config;
    /* server configuration */
    wby_size memory_size;
    /* minimum required memory */
    wby_socket socket;
    /* server socket */
    wby_size con_count;
    /* number of active connection */
    struct wby_connection *con;
    /* connections */
#ifdef _WIN32
    int windows_socket_initialized;
    /* whether WSAStartup had to be called on Windows */
#endif
};

void wby_init(struct wby_server*, const struct wby_config*,
                            wby_size *needed_memory);
/*  this function clears the server and calculates the needed memory to run
    Input:
    -   filled server configuration data to calculate the needed memory
    Output:
    -   needed memory for the server to run
*/
int wby_start(struct wby_server*, void *memory);
/*  this function starts running the server in the specificed memory space. Size
 *  must be at least big enough as determined in the wby_server_init().
    Input:
    -   allocated memory space to create the server into
*/
WBY_API void wby_update(struct wby_server*);
/* updates the server by being called frequenctly (at least once a frame) */
void wby_stop(struct wby_server*);
/* stops and shutdown the server */
WBY_API int wby_response_begin(struct wby_con*, int status_code, int content_length,
                                    const struct wby_header headers[], int header_count);
/*  this function begins a response
    Input:
    -   HTTP status code to send. (Normally 200).
    -   size in bytes you intend to write, or -1 for chunked encoding
    -   array of HTTP headers to transmit (can be NULL of header_count == 0)
    -   number of headers in the array
    Output:
    -   returns 0 on success, non-zero on error.
*/
WBY_API void wby_response_end(struct wby_con*);
/*  this function finishes a response. When you're done wirting the response
 *  body, call this function. this makes sure chunked encoding is terminated
 *  correctly and that the connection is setup for reuse. */
WBY_API int wby_read(struct wby_con*, void *ptr, wby_size len);
/*  this function reads data from the request body. Only read what the client
 *  has priovided (via content_length) parameter, or you will end up blocking
 *  forever.
    Input:
    - pointer to a memory block that will be filled
    - size of the memory block to fill
*/
WBY_API int wby_write(struct wby_con*, const void *ptr, wby_size len);
/*  this function writes a response data to the connection. If you're not using
 *  chunked encoding, be careful not to send more than the specified content
 *  length. You can call this function multiple times as long as the total
 *  number of bytes matches up with the content length.
    Input:
    - pointer to a memory block that will be send
    - size of the memory block to send
*/
int wby_frame_begin(struct wby_con*, int opcode);
/*  this function begins an outgoing websocket frame */
int wby_frame_end(struct wby_con*);
/*  this function finishes an outgoing websocket frame */
int wby_find_query_var(const char *buf, const char *name, char *dst, wby_size dst_len);
/*  this function is a helper function to lookup a query parameter given a URL
 *  encoded string. Returns the size of the returned data, or -1 if the query
 *  var wasn't found. */
WBY_API const char* wby_find_header(struct wby_con*, const char *name);
/*  this convenience function to find a header in a request. Returns the value
 *  of the specified header, or NULL if its was not present. */

 WBY_API void
 wby_dbg(wby_log_f log, const char *fmt, ...);



#ifdef __cplusplus
}
#endif
#endif /* WBY_H_ */
/* ===============================================================
 *
 *                      IMPLEMENTATION
 *
 * ===============================================================*/
#ifdef WBY_IMPLEMENTATION



#endif /* WBY_IMPLEMENTATION */



struct wby_buffer {
    wby_size used;
    /* current buffer size */
    wby_size max;
    /* buffer capacity */
    wby_byte *data;
    /* pointer inside a global buffer */
};

struct wby_connection {
    struct wby_con public_data;
    unsigned short flags;
    unsigned short state;

    wby_socket socket;
    wby_log_f log;

    wby_size request_buffer_size;
    struct wby_buffer header_buf;
    struct wby_buffer io_buf;
    wby_size io_buffer_size;

    int header_body_left;
    int io_data_left;
    int continue_data_left;
    int body_bytes_read;

    struct wby_frame ws_frame;
    wby_byte ws_opcode;
    wby_size blocking_count;
};


void wby_config(const char *address, unsigned int port, struct server_state* state, struct wby_config* config,
	int(*dispatch)(struct wby_con* con, void* userdata, void* server));

char *get_post_buf(struct wby_con *connection, struct wby_server *svr);

StrMap *post_json_eq_to_json(char *post_content);

unsigned int serve_static_file(const char *www_root_path, struct wby_con *connection);


#ifdef _WIN32
    #define _CRT_NONSTDC_NO_DEPRECATE
    #define _CRT_SECURE_NO_WARNINGS
    #pragma warning( disable: 4127 ) // conditional expression is constant
    #pragma warning( disable: 4255 ) // 'function' : no function prototype given: converting '()' to '(void)'
    #pragma warning( disable: 4365 ) // 'action' : conversion from 'type_1' to 'type_2', signed/unsigned mismatch
    #pragma warning( disable: 4574 ) // 'Identifier' is defined to be '0': did you mean to use '#if identifier'?
    #pragma warning( disable: 4668 ) // 'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directive'
    #pragma warning( disable: 4706 ) // assignment within conditional expression
    //#include <winsock2.h>

    #include <string.h>
    #include <stdio.h>
    #define HTTP_SOCKET SOCKET
    #define HTTP_INVALID_SOCKET INVALID_SOCKET
#else
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <unistd.h>
    #include <errno.h>
    #include <fcntl.h>
    #include <netdb.h>
    #define HTTP_SOCKET int
    #define HTTP_INVALID_SOCKET -1
#endif

#ifndef HTTP_MALLOC
    #define _CRT_NONSTDC_NO_DEPRECATE
    #define _CRT_SECURE_NO_WARNINGS
    #include <stdlib.h>
    #define HTTP_MALLOC( ctx, size ) ( malloc( size ) )
    #define HTTP_FREE( ctx, ptr ) ( free( ptr ) )
#endif


#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <stddef.h> // for size_t

typedef enum http_status_t
    {
    HTTP_STATUS_PENDING,
    HTTP_STATUS_COMPLETED,
    HTTP_STATUS_FAILED,
    } http_status_t;

typedef struct http_t
    {
    http_status_t status;
    int status_code;
    char const* reason_phrase;
    char const* content_type;
    size_t response_size;
    void* response_data;
    } http_t;

http_t* http_get( char const* url, void* memctx );
http_t* http_post( char const* url, void const* data, size_t size, void* memctx );

http_status_t http_process( http_t* http );

void http_release( http_t* http );

typedef struct http_internal_t
    {
    /* keep this at the top!*/
    http_t http;
    /* because http_internal_t* can be cast to http_t*. */

    void* memctx;
    HTTP_SOCKET socket;
    int connect_pending;
    int request_sent;
    char address[ 256 ];
    char request_header[ 256 ];
    char* request_header_large;
    void* request_data;
    size_t request_data_size;
    char reason_phrase[ 1024 ];
    char content_type[ 256 ];
    size_t data_size;
    size_t data_capacity;
    void* data;
    } http_internal_t;

int http_get_response(http_t* request);
char *url_get_contents(const char *url, double timeout=4.0);


#endif
#ifdef H_H


void memzero(void *const pnt, const size_t len){
#ifdef _WIN32
  SecureZeroMemory(pnt, len);
#elif defined(HAVE_MEMSET_S)
  memset_s(pnt, (rsize_t)len, 0, (rsize_t)len);
#elif defined(HAVE_EXPLICIT_BZERO)
  explicit_bzero(pnt, len);
#elif defined(HAVE_EXPLICIT_MEMSET)
  explicit_memset(pnt, 0, len);
#else
  volatile unsigned char *volatile pnt_ = (volatile unsigned char *volatile)pnt;
  size_t i = (size_t)0U;

  while (i < len) {
    pnt_[i++] = 0U;
  }
#endif
}





int isalpharune(Rune c)
{
	/* TODO: Add unicode support */
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

Rune toupperrune(Rune c)
{
	/* TODO: Add unicode support */
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}

int chartorune(Rune *r, const char *s)
{
	/* TODO: Add UTF-8 decoding */
	*r = *s;
	return 1;
}



void die(const char *message)
{
	g.error = message;
	longjmp(g.kaboom, 1);
}

Rune canon(Rune c)
{
	Rune u = toupperrune(c);
	if (c >= 128 && u < 128)
		return c;
	return u;
}

int hex(int c)
{
	if (c >= '0' && c <= '9') return c - '0';
	if (c >= 'a' && c <= 'f') return c - 'a' + 0xA;
	if (c >= 'A' && c <= 'F') return c - 'A' + 0xA;
	die("invalid escape sequence");
	return 0;
}

int dec(int c)
{
	if (c >= '0' && c <= '9') return c - '0';
	die("invalid quantifier");
	return 0;
}

#define ESCAPES "BbDdSsWw^$\\.*+?()[]{}|0123456789"

int isunicodeletter(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || isalpharune(c);
}

int nextrune(void)
{
	g.source += chartorune(&g.yychar, g.source);
	if (g.yychar == '\\') {
		g.source += chartorune(&g.yychar, g.source);
		switch (g.yychar) {
		case 0: die("unterminated escape sequence"); break;
		case 'f': g.yychar = '\f'; return 0;
		case 'n': g.yychar = '\n'; return 0;
		case 'r': g.yychar = '\r'; return 0;
		case 't': g.yychar = '\t'; return 0;
		case 'v': g.yychar = '\v'; return 0;
		case 'c':
			g.yychar = (*g.source++) & 31;
			return 0;
		case 'x':
			g.yychar = hex(*g.source++) << 4;
			g.yychar += hex(*g.source++);
			if (g.yychar == 0) {
				g.yychar = '0';
				return 1;
			}
			return 0;
		case 'u':
			g.yychar = hex(*g.source++) << 12;
			g.yychar += hex(*g.source++) << 8;
			g.yychar += hex(*g.source++) << 4;
			g.yychar += hex(*g.source++);
			if (g.yychar == 0) {
				g.yychar = '0';
				return 1;
			}
			return 0;
		}
		if (strchr(ESCAPES, g.yychar))
			return 1;
		if (isunicodeletter(g.yychar) || g.yychar == '_') /* check identity escape */
			die("invalid escape character");
		return 0;
	}
	return 0;
}

int lexcount(void)
{
	g.yychar = *g.source++;

	g.yymin = dec(g.yychar);
	g.yychar = *g.source++;
	while (g.yychar != ',' && g.yychar != '}') {
		g.yymin = g.yymin * 10 + dec(g.yychar);
		g.yychar = *g.source++;
	}
	if (g.yymin >= REPINF)
		die("numeric overflow");

	if (g.yychar == ',') {
		g.yychar = *g.source++;
		if (g.yychar == '}') {
			g.yymax = REPINF;
		} else {
			g.yymax = dec(g.yychar);
			g.yychar = *g.source++;
			while (g.yychar != '}') {
				g.yymax = g.yymax * 10 + dec(g.yychar);
				g.yychar = *g.source++;
			}
			if (g.yymax >= REPINF)
				die("numeric overflow");
		}
	} else {
		g.yymax = g.yymin;
	}

	return L_COUNT;
}

void newcclass(void)
{
	if (g.ncclass >= nelem(g.prog->cclass))
		die("too many character classes");
	g.yycc = g.prog->cclass + g.ncclass++;
	g.yycc->end = g.yycc->spans;
}

void addrange(Rune a, Rune b)
{
	if (a > b)
		die("invalid character class range");
	if (g.yycc->end + 2 == g.yycc->spans + nelem(g.yycc->spans))
		die("too many character class ranges");
	*g.yycc->end++ = a;
	*g.yycc->end++ = b;
}

void addranges_d(void)
{
	addrange('0', '9');
}

void addranges_D(void)
{
	addrange(0, '0'-1);
	addrange('9'+1, 0xFFFF);
}

void addranges_s(void)
{
	addrange(0x9, 0x9);
	addrange(0xA, 0xD);
	addrange(0x20, 0x20);
	addrange(0xA0, 0xA0);
	addrange(0x2028, 0x2029);
	addrange(0xFEFF, 0xFEFF);
}

void addranges_S(void)
{
	addrange(0, 0x9-1);
	addrange(0x9+1, 0xA-1);
	addrange(0xD+1, 0x20-1);
	addrange(0x20+1, 0xA0-1);
	addrange(0xA0+1, 0x2028-1);
	addrange(0x2029+1, 0xFEFF-1);
	addrange(0xFEFF+1, 0xFFFF);
}

void addranges_w(void)
{
	addrange('0', '9');
	addrange('A', 'Z');
	addrange('_', '_');
	addrange('a', 'z');
}

void addranges_W(void)
{
	addrange(0, '0'-1);
	addrange('9'+1, 'A'-1);
	addrange('Z'+1, '_'-1);
	addrange('_'+1, 'a'-1);
	addrange('z'+1, 0xFFFF);
}

int lexclass(void)
{
	int type = L_CCLASS;
	int quoted, havesave, havedash;
	Rune save = 0;

	newcclass();

	quoted = nextrune();
	if (!quoted && g.yychar == '^') {
		type = L_NCCLASS;
		quoted = nextrune();
	}

	havesave = havedash = 0;
	for (;;) {
		if (g.yychar == 0)
			die("unterminated character class");
		if (!quoted && g.yychar == ']')
			break;

		if (!quoted && g.yychar == '-') {
			if (havesave) {
				if (havedash) {
					addrange(save, '-');
					havesave = havedash = 0;
				} else {
					havedash = 1;
				}
			} else {
				save = '-';
				havesave = 1;
			}
		} else if (quoted && strchr("DSWdsw", g.yychar)) {
			if (havesave) {
				addrange(save, save);
				if (havedash)
					addrange('-', '-');
			}
			switch (g.yychar) {
			case 'd': addranges_d(); break;
			case 's': addranges_s(); break;
			case 'w': addranges_w(); break;
			case 'D': addranges_D(); break;
			case 'S': addranges_S(); break;
			case 'W': addranges_W(); break;
			}
			havesave = havedash = 0;
		} else {
			if (quoted) {
				if (g.yychar == 'b')
					g.yychar = '\b';
				else if (g.yychar == '0')
					g.yychar = 0;
				/* else identity escape */
			}
			if (havesave) {
				if (havedash) {
					addrange(save, g.yychar);
					havesave = havedash = 0;
				} else {
					addrange(save, save);
					save = g.yychar;
				}
			} else {
				save = g.yychar;
				havesave = 1;
			}
		}

		quoted = nextrune();
	}

	if (havesave) {
		addrange(save, save);
		if (havedash)
			addrange('-', '-');
	}

	return type;
}

int lex(void)
{
	int quoted = nextrune();
	if (quoted) {
		switch (g.yychar) {
		case 'b': return L_WORD;
		case 'B': return L_NWORD;
		case 'd': newcclass(); addranges_d(); return L_CCLASS;
		case 's': newcclass(); addranges_s(); return L_CCLASS;
		case 'w': newcclass(); addranges_w(); return L_CCLASS;
		case 'D': newcclass(); addranges_d(); return L_NCCLASS;
		case 'S': newcclass(); addranges_s(); return L_NCCLASS;
		case 'W': newcclass(); addranges_w(); return L_NCCLASS;
		case '0': g.yychar = 0; return L_CHAR;
		}
		if (g.yychar >= '0' && g.yychar <= '9') {
			g.yychar -= '0';
			if (*g.source >= '0' && *g.source <= '9')
				g.yychar = g.yychar * 10 + *g.source++ - '0';
			return L_REF;
		}
		return L_CHAR;
	}

	switch (g.yychar) {
	case 0:
	case '$': case ')': case '*': case '+':
	case '.': case '?': case '^': case '|':
		return g.yychar;
	}

	if (g.yychar == '{')
		return lexcount();
	if (g.yychar == '[')
		return lexclass();
	if (g.yychar == '(') {
		if (g.source[0] == '?') {
			if (g.source[1] == ':') {
				g.source += 2;
				return L_NC;
			}
			if (g.source[1] == '=') {
				g.source += 2;
				return L_PLA;
			}
			if (g.source[1] == '!') {
				g.source += 2;
				return L_NLA;
			}
		}
		return '(';
	}

	return L_CHAR;
}

Renode *newnode(int type)
{
	Renode *node = g.pend++;
	node->type = type;
	node->cc = NULL;
	node->c = 0;
	node->ng = 0;
	node->m = 0;
	node->n = 0;
	node->x = node->y = NULL;
	return node;
}

int empty(Renode *node)
{
	if (!node) return 1;
	switch (node->type) {
	default: return 1;
	case P_CAT: return empty(node->x) && empty(node->y);
	case P_ALT: return empty(node->x) || empty(node->y);
	case P_REP: return empty(node->x) || node->m == 0;
	case P_PAR: return empty(node->x);
	case P_REF: return empty(node->x);
	case P_ANY: case P_CHAR: case P_CCLASS: case P_NCCLASS: return 0;
	}
}

Renode *newrep(Renode *atom, int ng, int min, int max)
{
	Renode *rep = newnode(P_REP);
	if (max == REPINF && empty(atom))
		die("infinite loop matching the empty string");
	rep->ng = ng;
	rep->m = min;
	rep->n = max;
	rep->x = atom;
	return rep;
}

void next(void)
{
	g.lookahead = lex();
}

int accept(int t)
{
	if (g.lookahead == t) {
		next();
		return 1;
	}
	return 0;
}

Renode *parsealt(void);

Renode *parseatom(void)
{
	Renode *atom;
	if (g.lookahead == L_CHAR) {
		atom = newnode(P_CHAR);
		atom->c = g.yychar;
		next();
		return atom;
	}
	if (g.lookahead == L_CCLASS) {
		atom = newnode(P_CCLASS);
		atom->cc = g.yycc;
		next();
		return atom;
	}
	if (g.lookahead == L_NCCLASS) {
		atom = newnode(P_NCCLASS);
		atom->cc = g.yycc;
		next();
		return atom;
	}
	if (g.lookahead == L_REF) {
		atom = newnode(P_REF);
		if (g.yychar == 0 || g.yychar > g.nsub || !g.sub[g.yychar])
			die("invalid back-reference");
		atom->n = g.yychar;
		atom->x = g.sub[g.yychar];
		next();
		return atom;
	}
	if (accept('.'))
		return newnode(P_ANY);
	if (accept('(')) {
		atom = newnode(P_PAR);
		if (g.nsub == MAXSUB)
			die("too many captures");
		atom->n = g.nsub++;
		atom->x = parsealt();
		g.sub[atom->n] = atom;
		if (!accept(')'))
			die("unmatched '('");
		return atom;
	}
	if (accept(L_NC)) {
		atom = parsealt();
		if (!accept(')'))
			die("unmatched '('");
		return atom;
	}
	if (accept(L_PLA)) {
		atom = newnode(P_PLA);
		atom->x = parsealt();
		if (!accept(')'))
			die("unmatched '('");
		return atom;
	}
	if (accept(L_NLA)) {
		atom = newnode(P_NLA);
		atom->x = parsealt();
		if (!accept(')'))
			die("unmatched '('");
		return atom;
	}
	die("syntax error");
	return NULL;
}

Renode *parserep(void)
{
	Renode *atom;

	if (accept('^')) return newnode(P_BOL);
	if (accept('$')) return newnode(P_EOL);
	if (accept(L_WORD)) return newnode(P_WORD);
	if (accept(L_NWORD)) return newnode(P_NWORD);

	atom = parseatom();
	if (g.lookahead == L_COUNT) {
		int min = g.yymin, max = g.yymax;
		next();
		if (max < min)
			die("invalid quantifier");
		return newrep(atom, accept('?'), min, max);
	}
	if (accept('*')) return newrep(atom, accept('?'), 0, REPINF);
	if (accept('+')) return newrep(atom, accept('?'), 1, REPINF);
	if (accept('?')) return newrep(atom, accept('?'), 0, 1);
	return atom;
}

Renode *parsecat(void)
{
	Renode *cat, *head, **tail;
	if (g.lookahead && g.lookahead != '|' && g.lookahead != ')') {
		/* Build a right-leaning tree by splicing in new 'cat' at the tail. */
		head = parserep();
		tail = &head;
		while (g.lookahead && g.lookahead != '|' && g.lookahead != ')') {
			cat = newnode(P_CAT);
			cat->x = *tail;
			cat->y = parserep();
			*tail = cat;
			tail = &cat->y;
		}
		return head;
	}
	return NULL;
}

Renode *parsealt(void)
{
	Renode *alt, *x;
	alt = parsecat();
	while (accept('|')) {
		x = alt;
		alt = newnode(P_ALT);
		alt->x = x;
		alt->y = parsecat();
	}
	return alt;
}

unsigned int count(Renode *node)
{
	unsigned int min, max, n;
	if (!node) return 0;
	switch (node->type) {
	default: return 1;
	case P_CAT: return count(node->x) + count(node->y);
	case P_ALT: return count(node->x) + count(node->y) + 2;
	case P_REP:
		min = node->m;
		max = node->n;
		if (min == max) n = count(node->x) * min;
		else if (max < REPINF) n = count(node->x) * max + (max - min);
		else n = count(node->x) * (min + 1) + 2;
		if (n > MAXPROG) die("program too large");
		return n;
	case P_PAR: return count(node->x) + 2;
	case P_PLA: return count(node->x) + 2;
	case P_NLA: return count(node->x) + 2;
	}
}

Reinst *emit(Reprog *prog, int opcode)
{
	Reinst *inst = prog->end++;
	inst->opcode = opcode;
	inst->n = 0;
	inst->c = 0;
	inst->cc = NULL;
	inst->x = inst->y = NULL;
	return inst;
}

void compile(Reprog *prog, Renode *node)
{
	Reinst *inst = 0, *split = 0, *jump = 0;
	unsigned int i = 0;

	if (!node)
		return;

loop:
	switch (node->type) {
	case P_CAT:
		compile(prog, node->x);
		node = node->y;
		goto loop;

	case P_ALT:
		split = emit(prog, I_SPLIT);
		compile(prog, node->x);
		jump = emit(prog, I_JUMP);
		compile(prog, node->y);
		split->x = split + 1;
		split->y = jump + 1;
		jump->x = prog->end;
		break;

	case P_REP:
		for (i = 0; i < node->m; ++i) {
			inst = prog->end;
			compile(prog, node->x);
		}
		if (node->m == node->n)
			break;
		if (node->n < REPINF) {
			for (i = node->m; i < node->n; ++i) {
				split = emit(prog, I_SPLIT);
				compile(prog, node->x);
				if (node->ng) {
					split->y = split + 1;
					split->x = prog->end;
				} else {
					split->x = split + 1;
					split->y = prog->end;
				}
			}
		} else if (node->m == 0) {
			split = emit(prog, I_SPLIT);
			compile(prog, node->x);
			jump = emit(prog, I_JUMP);
			if (node->ng) {
				split->y = split + 1;
				split->x = prog->end;
			} else {
				split->x = split + 1;
				split->y = prog->end;
			}
			jump->x = split;
		} else {
			split = emit(prog, I_SPLIT);
			if (node->ng) {
				split->y = inst;
				split->x = prog->end;
			} else {
				split->x = inst;
				split->y = prog->end;
			}
		}
		break;

	case P_BOL: emit(prog, I_BOL); break;
	case P_EOL: emit(prog, I_EOL); break;
	case P_WORD: emit(prog, I_WORD); break;
	case P_NWORD: emit(prog, I_NWORD); break;

	case P_PAR:
		inst = emit(prog, I_LPAR);
		inst->n = node->n;
		compile(prog, node->x);
		inst = emit(prog, I_RPAR);
		inst->n = node->n;
		break;
	case P_PLA:
		split = emit(prog, I_PLA);
		compile(prog, node->x);
		emit(prog, I_END);
		split->x = split + 1;
		split->y = prog->end;
		break;
	case P_NLA:
		split = emit(prog, I_NLA);
		compile(prog, node->x);
		emit(prog, I_END);
		split->x = split + 1;
		split->y = prog->end;
		break;

	case P_ANY:
		emit(prog, I_ANY);
		break;
	case P_CHAR:
		inst = emit(prog, I_CHAR);
		inst->c = (prog->flags & REG_ICASE) ? canon(node->c) : node->c;
		break;
	case P_CCLASS:
		inst = emit(prog, I_CCLASS);
		inst->cc = node->cc;
		break;
	case P_NCCLASS:
		inst = emit(prog, I_NCCLASS);
		inst->cc = node->cc;
		break;
	case P_REF:
		inst = emit(prog, I_REF);
		inst->n = node->n;
		break;
	}
}

#ifdef TEST
void dumpnode(Renode *node)
{
	Rune *p;
	if (!node) { printf("Empty"); return; }
	switch (node->type) {
	case P_CAT: printf("Cat("); dumpnode(node->x); printf(", "); dumpnode(node->y); printf(")"); break;
	case P_ALT: printf("Alt("); dumpnode(node->x); printf(", "); dumpnode(node->y); printf(")"); break;
	case P_REP:
		printf(node->ng ? "NgRep(%d,%d," : "Rep(%d,%d,", node->m, node->n);
		dumpnode(node->x);
		printf(")");
		break;
	case P_BOL: printf("Bol"); break;
	case P_EOL: printf("Eol"); break;
	case P_WORD: printf("Word"); break;
	case P_NWORD: printf("NotWord"); break;
	case P_PAR: printf("Par(%d,", node->n); dumpnode(node->x); printf(")"); break;
	case P_PLA: printf("PLA("); dumpnode(node->x); printf(")"); break;
	case P_NLA: printf("NLA("); dumpnode(node->x); printf(")"); break;
	case P_ANY: printf("Any"); break;
	case P_CHAR: printf("Char(%c)", node->c); break;
	case P_CCLASS:
		printf("Class(");
		for (p = node->cc->spans; p < node->cc->end; p += 2) printf("%02X-%02X,", p[0], p[1]);
		printf(")");
		break;
	case P_NCCLASS:
		printf("NotClass(");
		for (p = node->cc->spans; p < node->cc->end; p += 2) printf("%02X-%02X,", p[0], p[1]);
		printf(")");
		break;
	case P_REF: printf("Ref(%d)", node->n); break;
	}
}

void dumpprog(Reprog *prog)
{
	Reinst *inst;
	int i;
	for (i = 0, inst = prog->start; inst < prog->end; ++i, ++inst) {
		printf("% 5d: ", i);
		switch (inst->opcode) {
		case I_END: puts("end"); break;
		case I_JUMP: printf("jump %d\n", (int)(inst->x - prog->start)); break;
		case I_SPLIT: printf("split %d %d\n", (int)(inst->x - prog->start), (int)(inst->y - prog->start)); break;
		case I_PLA: printf("pla %d %d\n", (int)(inst->x - prog->start), (int)(inst->y - prog->start)); break;
		case I_NLA: printf("nla %d %d\n", (int)(inst->x - prog->start), (int)(inst->y - prog->start)); break;
		case I_ANY: puts("any"); break;
		case I_ANYNL: puts("anynl"); break;
		case I_CHAR: printf(inst->c >= 32 && inst->c < 127 ? "char '%c'\n" : "char U+%04X\n", inst->c); break;
		case I_CCLASS: puts("cclass"); break;
		case I_NCCLASS: puts("ncclass"); break;
		case I_REF: printf("ref %d\n", inst->n); break;
		case I_BOL: puts("bol"); break;
		case I_EOL: puts("eol"); break;
		case I_WORD: puts("word"); break;
		case I_NWORD: puts("nword"); break;
		case I_LPAR: printf("lpar %d\n", inst->n); break;
		case I_RPAR: printf("rpar %d\n", inst->n); break;
		}
	}
}
#endif

Reprog *regcomp(const char *pattern, int cflags, const char **errorp)
{
	Renode *node;
	Reinst *split, *jump;
	int i, n;

	g.pstart = NULL;
	g.prog = NULL;

	if (setjmp(g.kaboom)) {
		if (errorp) *errorp = g.error;
		free(g.pstart);
		free(g.prog);
		return NULL;
	}

	g.prog = (Reprog *) malloc(sizeof (Reprog));
	if (!g.prog)
		die("cannot allocate regular expression");
	n = strlen(pattern) * 2;
	if (n > 0) {
		g.pstart = g.pend = (Renode*) malloc(sizeof (Renode) * n);
		if (!g.pstart)
			die("cannot allocate regular expression parse list");
	}

	g.source = pattern;
	g.ncclass = 0;
	g.nsub = 1;
	for (i = 0; i < MAXSUB; ++i)
		g.sub[i] = 0;

	g.prog->flags = cflags;

	next();
	node = parsealt();
	if (g.lookahead == ')')
		die("unmatched ')'");
	if (g.lookahead != 0)
		die("syntax error");

#ifdef TEST
	dumpnode(node);
	putchar('\n');
#endif

	n = 6 + count(node);
	if (n < 0 || n > MAXPROG)
		die("program too large");

	g.prog->nsub = g.nsub;
	g.prog->start = g.prog->end = (Reinst*) malloc(n * sizeof (Reinst));

	split = emit(g.prog, I_SPLIT);
	split->x = split + 3;
	split->y = split + 1;
	emit(g.prog, I_ANYNL);
	jump = emit(g.prog, I_JUMP);
	jump->x = split;
	emit(g.prog, I_LPAR);
	compile(g.prog, node);
	emit(g.prog, I_RPAR);
	emit(g.prog, I_END);

#ifdef TEST
	dumpprog(g.prog);
#endif

	free(g.pstart);

	if (errorp) *errorp = NULL;
	return g.prog;
}

void regfree(Reprog *prog)
{
	if (prog) {
		free(prog->start);
		free(prog);
	}
}

/* Match */

int isnewline(int c)
{
	return c == 0xA || c == 0xD || c == 0x2028 || c == 0x2029;
}

int iswordchar(int c)
{
	return c == '_' ||
		(c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9');
}

int incclass(Reclass *cc, Rune c)
{
	Rune *p;
	for (p = cc->spans; p < cc->end; p += 2)
		if (p[0] <= c && c <= p[1])
			return 1;
	return 0;
}

int incclasscanon(Reclass *cc, Rune c)
{
	Rune *p, r;
	for (p = cc->spans; p < cc->end; p += 2)
		for (r = p[0]; r <= p[1]; ++r)
			if (c == canon(r))
				return 1;
	return 0;
}

int strncmpcanon(const char *a, const char *b, unsigned int n)
{
	Rune ra, rb;
	int c;
	while (n--) {
		if (!*a) return -1;
		if (!*b) return 1;
		a += chartorune(&ra, a);
		b += chartorune(&rb, b);
		c = canon(ra) - canon(rb);
		if (c)
			return c;
	}
	return 0;
}

int match(Reinst *pc, const char *sp, const char *bol, int flags, Resub *out)
{
	Resub scratch;
	int i;
	Rune c;

	for (;;) {
		switch (pc->opcode) {
		case I_END:
			return 1;
		case I_JUMP:
			pc = pc->x;
			break;
		case I_SPLIT:
			scratch = *out;
			if (match(pc->x, sp, bol, flags, &scratch)) {
				*out = scratch;
				return 1;
			}
			pc = pc->y;
			break;

		case I_PLA:
			if (!match(pc->x, sp, bol, flags, out))
				return 0;
			pc = pc->y;
			break;
		case I_NLA:
			scratch = *out;
			if (match(pc->x, sp, bol, flags, &scratch))
				return 0;
			pc = pc->y;
			break;

		case I_ANYNL:
			sp += chartorune(&c, sp);
			if (c == 0)
				return 0;
			pc = pc + 1;
			break;
		case I_ANY:
			sp += chartorune(&c, sp);
			if (c == 0)
				return 0;
			if (isnewline(c))
				return 0;
			pc = pc + 1;
			break;
		case I_CHAR:
			sp += chartorune(&c, sp);
			if (c == 0)
				return 0;
			if (flags & REG_ICASE)
				c = canon(c);
			if (c != pc->c)
				return 0;
			pc = pc + 1;
			break;
		case I_CCLASS:
			sp += chartorune(&c, sp);
			if (c == 0)
				return 0;
			if (flags & REG_ICASE) {
				if (!incclasscanon(pc->cc, canon(c)))
					return 0;
			} else {
				if (!incclass(pc->cc, c))
					return 0;
			}
			pc = pc + 1;
			break;
		case I_NCCLASS:
			sp += chartorune(&c, sp);
			if (c == 0)
				return 0;
			if (flags & REG_ICASE) {
				if (incclasscanon(pc->cc, canon(c)))
					return 0;
			} else {
				if (incclass(pc->cc, c))
					return 0;
			}
			pc = pc + 1;
			break;
		case I_REF:
			i = out->sub[pc->n].ep - out->sub[pc->n].sp;
			if (flags & REG_ICASE) {
				if (strncmpcanon(sp, out->sub[pc->n].sp, i))
					return 0;
			} else {
				if (strncmp(sp, out->sub[pc->n].sp, i))
					return 0;
			}
			if (i > 0)
				sp += i;
			pc = pc + 1;
			break;

		case I_BOL:
			if (sp == bol && !(flags & REG_NOTBOL)) {
				pc = pc + 1;
				break;
			}
			if (flags & REG_NEWLINE) {
				if (sp > bol && isnewline(sp[-1])) {
					pc = pc + 1;
					break;
				}
			}
			return 0;
		case I_EOL:
			if (*sp == 0) {
				pc = pc + 1;
				break;
			}
			if (flags & REG_NEWLINE) {
				if (isnewline(*sp)) {
					pc = pc + 1;
					break;
				}
			}
			return 0;
		case I_WORD:
			i = sp > bol && iswordchar(sp[-1]);
			i ^= iswordchar(sp[0]);
			if (!i)
				return 0;
			pc = pc + 1;
			break;
		case I_NWORD:
			i = sp > bol && iswordchar(sp[-1]);
			i ^= iswordchar(sp[0]);
			if (i)
				return 0;
			pc = pc + 1;
			break;

		case I_LPAR:
			out->sub[pc->n].sp = sp;
			pc = pc + 1;
			break;
		case I_RPAR:
			out->sub[pc->n].ep = sp;
			pc = pc + 1;
			break;
		default:
			return 0;
		}
	}
}

int regexec(Reprog *prog, const char *sp, Resub *sub, int eflags)
{
	Resub scratch;
	int i;

	if (!sub)
		sub = &scratch;

	sub->nsub = prog->nsub;
	for (i = 0; i < MAXSUB; ++i)
		sub->sub[i].sp = sub->sub[i].ep = NULL;

	return !match(prog->start, sp, sp, prog->flags | eflags, sub);
}

#ifdef TEST
int main(int argc, char **argv)
{
	const char *error;
	const char *s;
	Reprog *p;
	Resub m;
	unsigned int i;

	if (argc > 1) {
		p = regcomp(argv[1], 0, &error);
		if (!p) {
			fprintf(stderr, "regcomp: %s\n", error);
			return 1;
		}

		if (argc > 2) {
			s = argv[2];
			printf("nsub = %d\n", p->nsub);
			if (!regexec(p, s, &m, 0)) {
				for (i = 0; i < m.nsub; ++i) {
					int n = m.sub[i].ep - m.sub[i].sp;
					if (n > 0)
						printf("match %d: s=%d e=%d n=%d '%.*s'\n", i, (int)(m.sub[i].sp - s), (int)(m.sub[i].ep - s), n, n, m.sub[i].sp);
					else
						printf("match %d: n=0 ''\n", i);
				}
			} else {
				printf("no match\n");
			}
		}
	}

	return 0;
}
#endif

#ifndef _MSC_VER
size_t strnlen_s(const char *s, size_t maxsize)
{
    if (s == NULL) {
        return 0;
    }

    size_t count = 0;
    while (*s++ && maxsize--) {
        count++;
    }

    return count;
}
#endif

#ifndef _MSC_VER
size_t strncpy_s(char *dest, size_t dest_size, const char *src, size_t src_count)
{
    if(!dest)
    {
        return 0;
    }

    if(!src)
    {
        return 0;
    }

    if(src_count + 1 >= dest_size)
    {
        return 0;
    }

    char *p = (char *) &src[0];
    size_t offset = 0;
    for(; (offset < src_count) && *p; offset++)
    {
        dest[offset] = *p;
		if(offset + 1 < src_count)
		{
			p++;
		}
    }

    dest[offset] = '\0';

    return offset + 1;
}
#endif

// Safe str compare with null stopping and bound stopping.
int strncmp_s(const char *dest, size_t dest_size, const char *src, size_t src_size, size_t count)
{
	if(!dest)
	{
		return -1;
	}

	if(!src)
	{
		return -2;
	}

	// Buffer overflow.
	if(count > dest_size)
	{
		return -3;
	}

	// Buffer overflow.
	if(count > src_size)
	{
		return -4;
	}

	// Do cmp -- stopping at null.
	char *p = (char *) &dest[0];
	for(size_t i = 0; i < count; i++)
	{
		// NULL terminator found in source.
		// CMP stops here for safety reasons.
		if(!src[i])
		{
			return (int) (i + 1);
		}

		// Same check as above but for dest.
		if(!dest[i])
		{
			return (int)(i + 1);
		}

		// Compare chars.
		if(*p != src[i])
		{
			return (int)(i + 1);
		}

		// Point to next char but not outside the buff.
		if(i + 1 < count)
		{
			p++;
		}
	}

	return 0;
}

// sprintf safe
// that sprintf alloc function?



// Add up all vargs for the size part.
int s_sprintf(char * const dest, size_t dest_size, const char *format, size_t varg_total_size, ...)
{
	if(!dest)
	{
		return -1;
	}

	if(!format)
	{
		return -2;
	}

	if(varg_total_size > (dest_size - 1))
	{
		return -4;
	}

	memset(dest, 0, dest_size);
	va_list ap;
	va_start(ap, varg_total_size);

	size_t format_len = strlen(format);
	size_t bytes_written = 0;
	size_t format_bytes_written = 0;
	bool skip = false;
    int ret = 0;
	for(size_t i = 0; i < format_len; i++)
	{
		skip = false;
		#ifdef DEBUG_SPRINTF
			printf("%c\r\n", format[i]);
		#endif
		if(format[i] == '%')
		{
			//char char_to_print = va_arg(ap, int);
			#ifdef DEBUG_SPRINTF
				printf("in format\r\n");
			#endif


			// Len 3 format specifiers.
			if(i + 3 <= format_len)
			{
				if(!skip && (!strncmp_s(&format[i + 1], format_len - (i + 1), "lli", 3, 3) ||
				   !strncmp_s(&format[i + 1], format_len - (i + 1), "lld", 3, 3))
				)
				{
					long long lli = va_arg(ap, long long);
					if(bytes_written + sizeof(long long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lli", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -6;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "llu", 3, 3))
				{
					unsigned long long lli = va_arg(ap, unsigned long long);
					if(bytes_written + sizeof(unsigned long long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%llu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -7;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 3;
					continue;
				}
			}

			// Len 2 format specifiers.
			if(i + 2 <= format_len)
			{
				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "hi", 2, 2))
				{
					short lli = (short) va_arg(ap, int);
					if(bytes_written + sizeof(short) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%hi", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -8;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "hu", 2, 2))
				{
					unsigned short lli = (unsigned short) va_arg(ap, unsigned int);
					if(bytes_written + sizeof(unsigned short) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%hu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -9;
					}
				}

				if(!skip && (!strncmp_s(&format[i + 1], format_len - (i + 1), "ld", 2, 2) ||
				   !strncmp_s(&format[i + 1], format_len - (i + 1), "li", 2, 2))
				)
				{
					long lli = va_arg(ap, long);
					if(bytes_written + sizeof(long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%li", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -10;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "lf", 2, 2))
				{
					double lli = va_arg(ap, double);
					if(bytes_written + sizeof(double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lf", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -11;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "Lf", 2, 2))
				{
					long double lli = va_arg(ap, long double);
					if(bytes_written + sizeof(long double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%Lf", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -12;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "lu", 2, 2))
				{
					unsigned long lli = va_arg(ap, unsigned long);
					if(bytes_written + sizeof(unsigned long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -13;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "%%", 2, 2))
				{
					if(bytes_written + 1 < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%%");
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -14;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 2;
				}
			}


			// Len 1 format specifiers.
			if(i + 1 <= format_len)
			{

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "c", 1, 1))
				{
					char lli = (char) va_arg(ap, int);
					if(bytes_written + sizeof(char) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%c", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -14;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "f", 1, 1))
				{
					float lli = (float) va_arg(ap, double);
					if(bytes_written + sizeof(float) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%f", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -16;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "g", 1, 1))
				{
					double lli = va_arg(ap, double);
					if(bytes_written + sizeof(double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%g", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -17;
					}
				}

				#ifdef DEBUG_SPRINTF
					if(skip)
					{
						printf("skip already set\r\n");
					}
				#endif

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "s", 1, 1))
				{
					#ifdef DEBUG_SPRINTF
						printf("in s\r\n");
					#endif
					if(i + 2 <= format_len)
					{
						#ifdef DEBUG_SPRINTF
							printf("writing s\r\n");
						#endif

						char *src = (char *) va_arg(ap, char *);
						size_t s_len = strnlen_s(&src[0], varg_total_size - (bytes_written - format_bytes_written));
						s_len = s_len > 0 ? s_len : 0;

						#ifdef DEBUG_SPRINTF
							printf("S len = %d\r\n", s_len);
						#endif

						if(bytes_written + s_len < dest_size && s_len)
						{
							snprintf(&dest[bytes_written], dest_size - bytes_written, "%s", &src[0]);
							bytes_written += s_len;
							skip = true;
						}
						else
						{
							return -18;
						}
					}
					else
					{
						return -19;
					}
				}

				if(!skip && ( !strncmp_s(&format[i + 1], format_len - (i + 1), "u", 1, 1)  ||
                              !strncmp_s(&format[i + 1], format_len - (i + 1), "d", 1, 1)
                             )
                )
				{
					unsigned int lli = va_arg(ap, unsigned int);
					if(bytes_written + sizeof(unsigned int) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size - bytes_written, "%d", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -20;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "p", 1, 1))
				{
					// Copy address of void pointer into a buf.
					// Get the length.
					// Write it into dest buffer.
					void *lli = va_arg(ap, void *);
					const size_t max_address_buf_size = 128;
					char p_address[max_address_buf_size] = { 0 };
					snprintf(&p_address[0], max_address_buf_size, "%p", lli);
					size_t p_address_len = strnlen_s(&p_address[0], max_address_buf_size);
					p_address_len = p_address_len > 0 ? p_address_len : 0;

					// Write address to dest buffer.
					if(bytes_written + p_address_len < dest_size && p_address_len)
					{
						p_address[p_address_len - 1] = '\0';
						snprintf(&dest[bytes_written], dest_size, "%s", p_address);
						bytes_written += p_address_len;
						skip = true;
					}
					else
					{
						return -21;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "x", 1, 1))
				{
					// Copy address of void pointer into a buf.
					// Get the length.
					// Write it into dest buffer.
					unsigned long lli = va_arg(ap, unsigned long);
					const size_t max_long_buf_size = 200;
					char p_long[max_long_buf_size] = { 0 };
					snprintf(&p_long[0], max_long_buf_size, "%lu", lli);
					size_t p_long_len = strnlen_s(&p_long[0], max_long_buf_size);
					p_long_len = p_long_len > 0 ? p_long_len : 0;

					// Write address to dest buffer.
					if(bytes_written + p_long_len < dest_size && p_long_len)
					{
						p_long[p_long_len - 1] = '\0';
						ret = snprintf(&dest[bytes_written], dest_size, "%s", p_long);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -22;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 1;
				}
			}

		// Write next obj to buf.
		}
		else
		{
			if(bytes_written + sizeof(char) < dest_size)
			{
				dest[bytes_written] = format[i];
				bytes_written++;
				format_bytes_written++;
			}
			else
			{
				return -5;
			}
		}

		#ifdef DEBUG_SPRINTF
			if(skip)
			{
				printf("skip set\r\n");
			}
		#endif
	}


	va_end(ap);
	dest[bytes_written] = '\0';
	return (int) bytes_written;
}

size_t hexstr_to_bytes(const char* hexstr, size_t len, unsigned char *out, size_t out_size)
{
    // Odd length hex = ambiguous.
    if (len % 2)
    {
        return 0;
    }

    // New len is half current len, since 2 bytes in hex per bytes.
    size_t final_len = len / 2;
    if(out_size <= final_len || final_len < 1)
    {
        if(DEBUG_MODE)
        {
            printf("overflow in hex to bytes.");
        }
        return 0;
    }


    // Convert hex to bytes using weird character code math
    // = no ugly hard coded hex alphabet arrays.
    for (unsigned int i = 0, j = 0; j < final_len; i += 2, j++)
    {
        out[j] = (unsigned char) ((hexstr[i] % 32 + 9) % 25 * 16 +
            (hexstr[i + 1] % 32 + 9) % 25);
    }

    // Null terminate it.
    out[final_len] = '\0';

    return final_len;
}


size_t bytes_to_hex(unsigned char *b_str, size_t b_str_len, unsigned char *out, size_t out_len)
{
    // Buffer overflow.
    if(out_len <= b_str_len * 2)
    {
        if(DEBUG_MODE)
        {
            printf("overflow in bytes to hex.");
        }
        return 0;
    }


    if(DEBUG_MODE)
    {
        if(out[0] != '\0')
        {
            printf("Bytes to hex called TWICE on same buffer");
            exit(1);
		}
	}

    for(size_t i = 0; i < b_str_len; i++)
    {
        snprintf((char *) &out[i * 2], out_len - (i * 2), "%02X", b_str[i]);
	}

    out[b_str_len * 2] = '\0';
    return b_str_len * 2;
}

void hex_print(uint8_t *buf, size_t size)
{
    size_t hex_str_len = (size * 2);
    uint8_t *hex_str_buf = (uint8_t *) calloc(hex_str_len + 1, sizeof(uint8_t));
    if(hex_str_buf)
    {
        if(bytes_to_hex(buf, size, (unsigned char *) hex_str_buf, hex_str_len + 1))
        {
            printf("%s\r\n", (char *) hex_str_buf);
        }

        free(hex_str_buf);
    }
}

bool A(unsigned char *c_str, unsigned int do_throw)
{
    bool is_safe = true;
    while(*c_str != '\0')
    {
        if(
            !isalnum(*c_str) &&
            !isspace(*c_str) &&
            !ispunct(*c_str)
		)
        {
            is_safe = false;
            break;
		}

        c_str++;
	}

    if(do_throw && !is_safe)
    {
        printf("C string is not safe");
        exit(1);
	}

    return is_safe;
}

void reverse(char s[])
{
    size_t i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
	}
}

/* itoa:  convert n to characters in s */
void itoa(uint128_t n, char s[])
{
    // Todo: buf len arg then assert > digit span
    unsigned int i;
    //sign;

    /*
		if ((sign = n) < 0)  // record sign
        n = -n;
	*/
	/* make n positive */
    i = 0;
    do {       /* generate digits in reverse order */
        s[i++] = (  (char) ( (unsigned int) ( n % 10) )  ) + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */

    //if (sign < 0)
    //    s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int print_uint128_t(uint128_t u128, uint128_t precision)
{
    size_t prec = (size_t) precision;
	char buf[30];
	memset(buf, 0, sizeof(buf));
	itoa(u128, buf);

    if(!precision)
    {
	   printf("%s", &buf[0]);
    }
    else
    {
        if(strlen(buf) >= prec)
        {
            // Split string at end of whole portion.
            size_t dec_offset = strlen(buf) - prec;
            char tmp = buf[dec_offset];
            buf[dec_offset] = '\0';
            char *whole_buf = &buf[0];

            // Create dec buf.
            char dec_buf[30];
            memset(dec_buf, 0, sizeof(dec_buf));
            dec_buf[0] = tmp;
            memcpy(&dec_buf[1], &buf[dec_offset + 1], strlen((const char *) &buf[dec_offset + 1]));

            // Show result.
            printf("%s.%s", whole_buf, &dec_buf[0]);
        }
        else
        {
            printf("%s", &buf[0]);
        }
    }

	return 0;
}

void assert_uint128_t(uint128_t left, uint128_t right)
{
	if (left != right)
	{
		printf("Assert failed [left, right]: \r\n");
		print_uint128_t(left);
		printf("\r\n");
		print_uint128_t(right);
		assert(0);
	}
}

// Zero C string
unsigned char * Z(unsigned char *c_str, size_t from_size_of)
{
    c_str[from_size_of - 1] = '\0';

    return c_str;
}

void PN(t_number no)
{
    print_uint128_t(no.value, no.precision);
    printf("\r\n");
}

void delete_t_number(void *p)
{
    struct t_number *p_no = (struct t_number *) p;
    free(p_no);
}

void terminate_uid(void *uid, size_t buf_len)
{
    // Initalise uid key, making sure its terminated.
    size_t offset = strnlen((char *) uid, buf_len - 1);
    ((char *) uid) [offset] = 0;
}

bool is_whitespace(char ch)
{
	if(ch == ' ')
	{
		return true;
	}

	if(ch == '\r')
	{
		return true;
	}

	if(ch == '\n')
	{
		return true;
	}

	if(ch == '\t')
	{
		return true;
	}

	return false;
}

void trim_ws(char* s) {
	char* p = s;
	size_t l = strlen(p);
	if (l == UINTMAX_MAX)
	{
		l--;
	}

	while (isspace(p[l - 1])) p[--l] = 0;
	while (*p && isspace(*p)) ++p, --l;

	memmove(s, p, l + 1);
}

/*
	* vscprintf:
	* MSVC implements this as _vscprintf, thus we just 'symlink' it here
	* GNU-C-compatible compilers do not implement this, thus we implement it here
*/
#ifdef __GNUC__
	int vscprintf(const char *format, va_list ap)
	{
		va_list ap_copy;
		va_copy(ap_copy, ap);
		int retval = vsnprintf(NULL, 0, format, ap_copy);
		va_end(ap_copy);
		return retval;
	}
#endif

/*
	* asprintf, vasprintf:
	* MSVC does not implement these, thus we implement them here
	* GNU-C-compatible compilers implement these with the same names, thus we
	* don't have to do anything
*/
#ifdef _MSC_VER
	int vasprintf(char **strp, const char *format, va_list ap)
	{
		int len = vscprintf(format, ap);
		if (len == -1)
        return -1;
		char *str = (char*)malloc((size_t) len + 1);
		if (!str)
        return -1;
		int retval = vsnprintf(str, ((size_t) len) + 1, format, ap);
		if (retval == -1) {
			free(str);
			return -1;
		}
		*strp = str;
		return retval;
	}

	int asprintf(char **strp, const char *format, ...)
	{
		va_list ap;
		va_start(ap, format);
		int retval = vasprintf(strp, format, ap);
		va_end(ap);
		return retval;
	}
#endif

void sleep_for(long ms)
{
#if defined(__APPLE__)
	usleep(ms * 1000);
#elif defined(_WIN32)
	Sleep((DWORD) ms);
#else
	time_t sec = (int)(ms / 1000);
	const long t = ms - (sec * 1000);
	struct timespec req;
	req.tv_sec = sec;
	req.tv_nsec = t * 1000000L;
	while (-1 == nanosleep(&req, &req));
#endif
}

void test_log(const char* text)
{
	printf("[debug] %s\n", text);
}

char *file_get_contents(const char *file_path) {
	char *file_data = 0;
	size_t file_len = 0;
	size_t bytes_read = 0;
	FILE *fp = fopen(file_path, "rb");

	if (fp) {
		// Get file size on disk and reset read pointer.
		fseek(fp, 0, SEEK_END);
		file_len = (size_t) ftell(fp);
		fseek(fp, 0, SEEK_SET);

		// Prevent overflow.
		if (file_len == UINT_MAX)
		{
			fclose(fp);
			return 0;
		}

		// Alloc space for file.
		if (file_len > 0) {
			file_data = (char *) malloc(file_len + 1);

			// Read file to buffer.
			if (file_data) {
                                file_data[file_len] = '\0';
				bytes_read = fread(file_data, 1, file_len, fp);
				if (bytes_read != file_len) {
					if (file_data) {
						free(file_data);
						file_data = 0;
					}
				}
			}
		}

		fclose(fp);
	}

	return file_data;
}

// Used for parsing requests to access a local file from the web server.
// Designed to prevent local file inclusions and other horrible exploits.
bool is_lfi(char *buf, size_t size)
{
	const char *safe_chars = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890/_\\:" };
	size_t safe_chars_len = strlen(safe_chars);
	bool seen_dot = false;
	bool is_safe = false;
	for(size_t i = 0; i < size; i++)
	{
		// Break on NULL;
		if(!buf[i])
		{
			break;
		}

		// Special case for successive dots = go back a directory.
		if(buf[i] == '.')
		{
			if(seen_dot)
			{
				return true;
			}

			seen_dot = true;
			continue;
		}
		else
		{
			seen_dot = false;
		}

		// Check char is safe.
		is_safe = false;
		for(size_t j = 0; j < safe_chars_len; j++)
		{
			if(buf[i] == safe_chars[j])
			{
				is_safe = true;
				break;
			}
		}

		// Not safe.
		if(!is_safe)
		{
			return true;
		}
	}

	return false;
}

unsigned int s_gets( char *str, size_t n )
{
  char *str_end, *fgets_return = 0;
  int temp = 0;

  if(n >= INT_MAX)
  {
    return 1;
  }

  if(!str)
  {
      return 2;
  }

  fgets_return = fgets( str, (int) n, stdin );

  /* If fgets fails, it returns NULL.
  This includes the case where stdin is exhausted. */
  if ( fgets_return == NULL )
  {
    str[0] = '\0';
    return 3;
  }

  // Success.
  str_end = &str[strlen(str) - 1];
  if ( *str_end == '\n' )
  {
    *str_end = '\0';
    return 0;
  }

  // Buffer was over-run.
  *str_end = '\0';

  // Flush whatever is left in input stream.
  do temp = fgetc( stdin );
  while ( temp != EOF && temp != '\n' );

  return 4;
}

bool re_match(const char *p_cstr_pattern, char *p_cstr_haystack)
{
    const char *p_error;
    bool is_match = false;
    Reprog *p_reprog = 0;
    Resub sub_match = {};

    // Allocate re pattern prog.
    p_reprog = regcomp(p_cstr_pattern, 0, &p_error);
    if(!p_reprog)
    {
        return false;
    }

    // Run pattern.
    if(regexec(p_reprog, (const char *) p_cstr_haystack, &sub_match, 0))
    {
        goto re_match_cleanup;
    }

    // Success.
    is_match = true;

    // Cleanup.
    re_match_cleanup:
        if(p_reprog)
        {
            regfree(p_reprog);
        }

    return is_match;
}

bool is_hex(char *p_cstr)
{
    // If it's not evenly divisible by 2 its bugged.
    size_t cstr_len = strlen(p_cstr);
    if(cstr_len % 2)
    {
        return false;
    }

    return re_match("^[0-9a-fA-F]+$", p_cstr);
}




void delete_list_item(struct t_linked_item *list_item)
{
  if (list_item)
	{
        // Todo: add dealloc funcs.
        /*
		if (list_item->value)
		{
			delete list_item->value;
		}
        */

		free(list_item);
	}
}


struct t_linked_item * add_value_to_linked_list(struct t_linked_info *p_info, void *p_value)
{
    // Make new list item container.
    struct t_linked_item *p_item = (struct t_linked_item *) malloc(sizeof(struct t_linked_item));
    p_item->p_next = NULL;
    p_item->p_prev = NULL;

    // Start of list.
    if(p_info->no == 0)
    {
        p_info->p_list_start = p_item;
        p_info->p_list_end = p_item;
    }
    else
    {
        // Link to existing list.
        p_item->p_prev = p_info->p_list_end;

        // Update quick reference to list end.
        p_info->p_list_end->p_next = p_item;

        // Point to new list end.
        p_info->p_list_end = p_item;
    }

    // Update list item value.
    p_item->value = p_value;

    // Increase number of list elements.
    p_info->no++;

    return p_item;
}

struct t_linked_item *TREAD(struct t_linked_info *p_list_info, struct t_linked_item *p_list_item)
{
    if(p_list_item != NULL)
    {
        return (struct t_linked_item *) p_list_item->p_next;
    }

    if(p_list_info->p_list_start != NULL)
    {
        return (struct t_linked_item *) p_list_info->p_list_start;
    }

    return NULL;
}

void remove_value_from_linked_list(
        struct t_linked_info *list, void *value
        )
{
        t_linked_item *p_list_item = list->p_list_start;
        t_linked_item *p_next = NULL;
        while(p_list_item != NULL)
        {
                p_next = (struct t_linked_item *) p_list_item->p_next;
                if(p_list_item->value == value)
                {
                        // List has at least 2 elements.
                        // Offset >= 1, delete that element.
                        if(p_list_item->p_prev != NULL)
                        {
                                // Change prev to point to offset >= 2, skipping current offset.
                                // If that offset doesn't exist, it will be set to null.
                                //                                             ---------------------->
                                // Now point the next element to the previous [n] [n + 1](deleted) [?]
                                ((struct t_linked_item *) p_list_item->p_prev)->p_next = p_next;

                                // List offset >= 3
                                //                                             <----------------------
                                // Now point the next element to the previous [n] [n + 1](deleted) [n + 2]
                                if (p_next)
                                {
                                        p_next->p_prev = p_list_item->p_prev;
                                }
                        }

                        // First list item is being deleted.
                        // Offset >= 0. Point first element to next offset, skipping current item.
                        // ------------------->
                        // [List info.start..] [n] [n + 1](deleted)
                        if (list->p_list_start == p_list_item)
                        {
                                list->p_list_start = (struct t_linked_item*) p_next;
                        }

                        // Offset >= 0. Point last element to prev offset, skipping current item.
                        // ------------------->
                        // [List info.end..] [n] [n + 1](deleted)
                        if (list->p_list_end == p_list_item)
                        {
                                list->p_list_end = (struct t_linked_item*) p_list_item->p_prev;
                        }

                        // It's unsigned so avoid underflow and throw on weird lists.
                        if (list->no)
                        {
                                list->no -= 1;
                        }
                        else
                        {
                                printf("List no underflow");
                                exit(1);
                        }

                        free(p_list_item);
                        p_list_item = 0;
                }

                p_list_item = p_next;
        }
}

void remove_values_from_linked_list(
    struct t_linked_info *hay_list,
    struct t_linked_info *needle_list
)
{
    t_linked_item *needle_item = needle_list->p_list_start;
    t_linked_item *p_next = NULL;
    while(needle_item != NULL)
    {
        p_next = (struct t_linked_item *) needle_item->p_next;
        if(needle_item->value != NULL)
        {
            remove_value_from_linked_list(
                hay_list,
                needle_item->value
            );
        }

        needle_item = p_next;
    }
}

// Append list_b to list_a.
void join_linked_lists(
    struct t_linked_info *list_a,
    struct t_linked_info *list_b
)
{
    if(list_a->p_list_end != NULL)
    {
        list_a->p_list_end->p_next = list_b->p_list_start;
        list_a->p_list_end = list_b->p_list_end;
        list_a->no += list_b->no;
    }
    else // List a is empty.
    {
		list_a->no = list_b->no;
		list_a->p_list_start = list_b->p_list_start;
		list_a->p_list_end = list_b->p_list_end;
    }
}

struct t_linked_item * linked_list_pop(struct t_linked_info *list)
{
    struct t_linked_item *p_list_end = NULL;
    struct t_linked_item *p_prev = NULL;
    if(list->no)
    {
        p_list_end = (struct t_linked_item *) list->p_list_end;
        if(p_list_end->p_prev != NULL)
        {
            p_prev = (struct t_linked_item *) p_list_end->p_prev;
            p_prev->p_next = NULL;
        }

        list->p_list_end = p_prev;
        //delete p_list_end;
        list->no--;
    }

    // Returns 'popped item.'
    // Note: popped isn't deleted.
    return p_list_end;
}

void delete_linked_list(struct t_linked_info *p_allocations, void (*delete_list_value)(void *))
{
    struct t_linked_item *p_item = NULL;
    struct t_linked_item *p_next = NULL;
    while((p_item = TREAD(p_allocations, p_item)) != NULL)
    {
        // Save ref to next item (if one) since p_item = boom.
        p_next = (struct t_linked_item *) p_item->p_next;

        // Deallocate the value stored at this list location.
        if(delete_list_value)
        {
            delete_list_value(p_item->value);
        }
        else
        {
            // Delete the list meta data struct.
            delete_list_item(p_item);
        }

        p_item = NULL;

        // Update the 'start' of the list.
        p_allocations->p_list_start = p_next;
    }

    // Zero list info struct.
    p_allocations->no = 0;
    p_allocations->p_list_start = NULL;
    p_allocations->p_list_end = NULL;
}

struct t_linked_info *create_linked_list_info()
{
    struct t_linked_info *p = (struct t_linked_info *) malloc(sizeof(struct t_linked_info));
    memset(p, 0, sizeof(struct t_linked_info));
    return p;
}



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

/////////////////////////////////////////////////////////////////
// <Start Hashmap Code: http://pokristensson.com/strmap.html>
/////////////////////////////////////////////////////////////////

struct StrMap *sm_new(unsigned int capacity)
{
    struct StrMap *map;

    map = (struct StrMap *) malloc(sizeof(StrMap));
    if (map == NULL) {
        return NULL;
    }
    map->count = capacity;
    map->buckets = (struct Bucket *) malloc(map->count * sizeof(Bucket));
    if (map->buckets == NULL) {
        printf("CANT ALLOCATE BUCKETS \r\n");
        free(map);
        assert(0);
        return NULL;
    }
    memset(map->buckets, 0, map->count * sizeof(Bucket));
    return map;
}

void sm_iter(const char *key, const char *value, const void *obj)
{
    if(key)
    {
        printf("found key: %s \n", value);

    }
    
    if(obj)
    {
        printf("obj");
    }
}

void sm_delete(StrMap *map)
{
    unsigned int i, j, n, m;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return;
    }
    n = map->count;
    bucket = map->buckets;
    i = 0;
    while (i < n) {
        m = bucket->count;
        pair = bucket->pairs;
        j = 0;
        while(j < m) {
            free(pair->key);
            free(pair->value);
            pair++;
            j++;
        }
        free(bucket->pairs);
        bucket++;
        i++;
    }
    free(map->buckets);
    free(map);
}

size_t sm_get(const StrMap *map, const char *key, char *out_buf, size_t n_out_buf)
{
    unsigned int index;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get map is null \r\n");
        #endif
        return 0;
    }
    if (key == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get key is null \r\n");
        #endif
        return 0;
    }
    index = map_hash(key) % map->count;
    #if defined(JSON_DEBUG)
        printf("hash map index = '%d'\r\n", index);
    #endif
    
    bucket = &(map->buckets[index]);
    pair = get_pair(bucket, key);
    if (pair == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get pair is null \r\n");
        #endif
        return 0;
    }
    if (out_buf == NULL && n_out_buf == 0) {
        #if defined(JSON_DEBUG)
            printf("SM get returned strlen \r\n");
        #endif
        return strlen(pair->value) + 1;
    }
    if (out_buf == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get out buf is null \r\n");
        #endif
        return 0;
    }
    if (strlen(pair->value) >= n_out_buf) {
        #if defined(JSON_DEBUG)
            printf("SM get overflow \r\n");
        #endif
        return 0;
    }

    if (pair->value)
    {
        size_t value_len = strlen(pair->value);
        strncpy_s(out_buf, n_out_buf, pair->value, value_len);

    }
    return 1;
}

int sm_exists(const StrMap *map, const char *key)
{
    unsigned int index;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    if (key == NULL) {
        return 0;
    }
    index = map_hash(key) % map->count;
    bucket = &(map->buckets[index]);
    pair = get_pair(bucket, key);
    if (pair == NULL) {
        return 0;
    }
    return 1;
}

size_t sm_put(StrMap *map, const char *key, const char *value)
{
    size_t key_len, value_len, index;
    Bucket *bucket;
    Pair *tmp_pairs, *pair;
    char *tmp_value;
    char *new_key, *new_value;

    if (map == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map is null! \r\n");
        #endif
        return 0;
    }
    if (key == NULL || value == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map key or val is null! \r\n");
        #endif
        return 0;
    }
    key_len = strlen(key);
    value_len = strlen(value);
    #if defined(JSON_DEBUG)
        printf("hashmap put key len %d \r\n", key_len);
        printf("hashmap put value len %d \r\n", value_len);
    #endif
    
    
    /* Get a pointer to the bucket the key string hashes to */
    index = map_hash(key) % map->count;
    #if defined(JSON_DEBUG)
        printf("hash map index = '%d'\r\n", index);
    #endif
    
    bucket = &(map->buckets[index]);
    
    #if defined(JSON_DEBUG)
        if(!bucket)
        {
            printf("Bucket was null \r\n");
        }
    #endif
    
    /* Check if we can handle insertion by simply replacing
     * an existing value in a key-value pair in the bucket.
     */
    if ((pair = get_pair(bucket, key)) != NULL) {
        /* The bucket contains a pair that matches the provided key,
         * change the value for that pair to the new value.
         */
        if (strlen(pair->value) < value_len) {
            /* If the new value is larger than the old value, re-allocate
             * space for the new larger value.
             */
            tmp_value = (char *) realloc(pair->value, (value_len + 1) * sizeof(char));
            if (tmp_value == NULL) {
                #if defined(JSON_DEBUG)
                    printf("SM map early realloc failed \r\n");
                #endif                
                return 0;
            }
            pair->value = tmp_value;
        }
        /* Copy the new value into the pair that matches the key */
        strncpy_s(pair->value, value_len + 1, value, value_len);
        #if defined(JSON_DEBUG)
            printf("\r\na\r\n");
        #endif

        return 1;
    }
        
    /* Allocate space for a new key and value */
    new_key = (char *) calloc((key_len + 1), sizeof(char));
    if (new_key == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map malloc failed \r\n");
        #endif
        return 0;
    }
    new_value = (char *)  calloc((value_len + 1), sizeof(char));
    if (new_value == NULL) {
        free(new_key);
        #if defined(JSON_DEBUG)
            printf("SM map malloc 2 failed \r\n");
        #endif
        return 0;
    }
    /* Create a key-value pair */
    if (bucket->count == 0) {
        /* The bucket is empty, lazily allocate space for a single
         * key-value pair.
         */
        bucket->pairs = (struct Pair *) malloc(sizeof(Pair));
        if (bucket->pairs == NULL) {
            free(new_key);
            free(new_value);
            #if defined(JSON_DEBUG)
                printf("SM map malloc 3 failed \r\n");
            #endif
            return 0;
        }
        bucket->count = 1;
        #if defined(JSON_DEBUG)
            printf("\r\nb\r\n");
        #endif
    }
    else {
        /* The bucket wasn't empty but no pair existed that matches the provided
         * key, so create a new key-value pair.
         */
        tmp_pairs = (struct Pair *) realloc(bucket->pairs, (bucket->count + 1) * sizeof(Pair));
        if (tmp_pairs == NULL) {
            free(new_key);
            free(new_value);
            #if defined(JSON_DEBUG)
                printf("SM map realloc failed \r\n");
            #endif
            return 0;
        }
        bucket->pairs = tmp_pairs;
        bucket->count++;
        #if defined(JSON_DEBUG)
            printf("\r\nc\r\n");
        #endif
    }
    /* Get the last pair in the chain for the bucket */
    pair = &(bucket->pairs[bucket->count - 1]);
    // ^ is that valid?
    #if defined(JSON_DEBUG)
        if(!pair)
        {
            printf("PAIR IS NULL \a \r\n");
            return 0;
        }
    #endif
    
    /* Copy the key and its value into the key-value pair */

    memcpy(new_key, key, key_len);
    memcpy(new_value, value, value_len);

    
    pair->key = new_key;
    pair->value = new_value;
    
    #if defined(JSON_DEBUG)
        printf("\r\nd\r\n");
        printf("input key = '%s' \r\n", key);
        printf("input value = '%s' \r\n", value);
        
        printf("pair key = '%s' \r\n", pair->key);
        printf("pair value = '%s' \r\n", pair->value);
    #endif

    return 1;
}

size_t sm_get_count(const StrMap *map)
{
    size_t i, j, n, m;
    size_t count;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    bucket = map->buckets;
    n = map->count;
    i = 0;
    count = 0;
    while (i < n) {
        pair = bucket->pairs;
        m = bucket->count;
        j = 0;
        while (j < m) {
            count++;
            pair++;
            j++;
        }
        bucket++;
        i++;
    }
    return count;
}

int sm_enum(const StrMap *map, sm_enum_func enum_func, const void *obj)
{
    unsigned int i, j, n, m;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    if (enum_func == NULL) {
        return 0;
    }
    bucket = map->buckets;
    n = map->count;
    i = 0;
    while (i < n) {
        pair = bucket->pairs;
        m = bucket->count;
        j = 0;
        while (j < m) {
            enum_func(pair->key, pair->value, obj);
            pair++;
            j++;
        }
        bucket++;
        i++;
    }
    return 1;
}

/*
 * Returns a pair from the bucket that matches the provided key,
 * or null if no such pair exist.
 */
static Pair * get_pair(Bucket *bucket, const char *key)
{
    unsigned int i, n;
    Pair *pair;

    n = bucket->count;
    if (n == 0) {
        return NULL;
    }
    pair = bucket->pairs;
    i = 0;
    while (i < n) {
        if (pair->key != NULL && pair->value != NULL) {
            #if defined(JSON_DEBUG)
                printf("cmp '%s' to '%s' \r\n", pair->key, key);
            #endif
            
            if (strcmp(pair->key, key) == 0) {
                return pair;
            }
            
            #if defined(JSON_DEBUG)
                printf("not equal \r\n");
            #endif
        }
        pair++;
        i++;
    }
    return NULL;
}

/*
 * Returns a hash code for the provided string.
 */
static unsigned long map_hash(const char *str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + ((unsigned long) c);
    }
    return hash;
}

StrMap *map_create(unsigned int capacity)
{
    return sm_new(capacity);
}

void map_destroy(StrMap *p_map)
{
    sm_delete(p_map);
}

size_t map_put(StrMap *p_map, const char *p_key, void *p_value)
{
    uint64_t value_address_no = (uint64_t) p_value;
    char value_address_str[MAX_MEM_ADDRESS_DIGITS + 1] = {};
    memset(value_address_str, 0, sizeof(value_address_str));
    itoa(value_address_no, value_address_str);
    
    return sm_put(p_map, p_key, (const char *) value_address_str);
}

void *map_get(StrMap *p_map, const char *p_key)
{
    size_t result = 0;
    char value_address_str[MAX_MEM_ADDRESS_DIGITS + 1] = {};
    result = sm_get(p_map, p_key, value_address_str, sizeof(value_address_str));
    if (result == 0) {
        #if defined(JSON_DEBUG)
            printf("SM get failure? %s\r\n", p_key);
        #endif
        return 0;
    }
    else
    {
        uint64_t value_address_no = (uint64_t) N(value_address_str, 0).value;
        void *p_value = 0;

        #if defined(__i386__) || defined(EMSCRIPTEN) || (!defined(_WIN64) && defined(_WIN32))
            p_value = (void*)((uint32_t) value_address_no);
            
            #if defined(JSON_DEBUG)
                printf("hashmap addr = 32 bit,  sizeof void = %d  \r\n", sizeof(void *));
            #endif
        #else
            
            p_value = (void*) value_address_no;
            #if defined(JSON_DEBUG)
                
                printf("hashmap addr = 64 bit, sizeof void = %d \r\n", sizeof(void *));
            #endif
        #endif


        return p_value;
    }
}

/////////////////////////////////////////////////////////////////
// </ End Hashmap Code: http://pokristensson.com/strmap.html>
/////////////////////////////////////////////////////////////////

void *map_get_or_make(
    struct StrMap *p_map,
    char *k_key,
    void *(*new_func)(),
    size_t len,
    void *(*init_func)(void *),
    unsigned int *obj_no
)
{
    if(!len && !init_func)
    {
        printf("No way to initalise this value.\r\n");
        exit(1);
    }

    void *p = 0;
    size_t ret = 0;
    if((p = map_get(p_map, k_key)) == 0)
    {
        // Create the new struct.
        p = new_func();
        if(len)
        {
            memset(p, 0, len);
        }

        // Only call init func if its set.
        if(init_func)
        {
            // Call the custom init function.
            p = init_func(p);
        }

        // Don't map uninitalised values for saftey reasons.
        ret = map_put(p_map, k_key, p);

        // Not every struct has object counters.
        if(obj_no)
        {
            (*obj_no)++;
        }
    }

    return p;
}


void init_state(struct t_state *p_state)
{
    memset(p_state, 0, sizeof(struct t_state));
    p_state->accounts = map_create(256);
    p_state->matches = map_create(256);
}

void *init_empty(void *p)
{
    return p;
}

void *new_summary()
{
    void *p_summary = malloc(sizeof(struct t_summary));
    memset(p_summary, 0, sizeof(struct t_summary));
    return p_summary;
}

// Todo: {} as test vector seems to cause mem corruption?

// Build the full name of a key pair by looking at the
// chain of sub trees currently on the stack.
unsigned char *get_json_key_name(struct t_linked_info* linked_list)
{
	// Starting vars.
	const size_t key_name_size = 1024;
	const size_t sub_key_size = 100;
	size_t offset = 0;
	size_t sub_key_len = 0;
	size_t name_len = 0;

	// More starting values.
	unsigned char sub_key[sub_key_size] = { 0 };
	unsigned int not_last_key = 0;
	unsigned int i = 0;
	unsigned char* key_name = (unsigned char*) calloc(key_name_size, sizeof(unsigned char));
	if (!key_name)
	{
		return NULL;
	}

	// Iterate over linked list and generate a key name.
	struct t_json_tokens* p_json_tokens = 0;
	struct t_linked_item* p_item = NULL;
	while ((p_item = TREAD(linked_list, p_item)) != NULL)
	{
		p_json_tokens = (struct t_json_tokens *) p_item->value;

		// Root name.
		if (i == 0)
		{
			// Sanity check.
			if (!p_json_tokens->name)
			{
				fprintf(stderr, "%s", "sub key name not found\r\n");
				return NULL;
				// Todo add cleanup.
			}

			// Copy sub key name.
			name_len = strnlen_s((char*) p_json_tokens->name, sub_key_size - 1);
			strncpy_s((char*) sub_key, sub_key_size, (char*) p_json_tokens->name, name_len);
			sub_key[name_len] = '\0';
		}
		else
		{
			// Copy sub-key.
			if (p_json_tokens->tree_type == JSON_obj)
			{
				// Sanity check.
				if (!p_json_tokens->name)
				{
					fprintf(stderr, "%s", "sub key name not found\r\n");
					return NULL;
				}

				name_len = strnlen_s((char*) p_json_tokens->name, sub_key_size - 1);
				strncpy_s((char*) sub_key, sub_key_size, (char*)p_json_tokens->name, name_len);
				sub_key[name_len] = '\0';
			}
			else
			{
				//assert(p_json_tokens->key_pair_no);
				not_last_key = (unsigned int) (i + 1 < linked_list->no ? 1 : 0);
				snprintf((char*)sub_key, sub_key_size, "%d", p_json_tokens->key_pair_no - not_last_key);
			}
		}

		// Calculate sub-key len.
		// +2 == chars [ and ] around sub key.
		sub_key_len = strnlen_s((char*) sub_key, sub_key_size - 1);
		if (sub_key_len)
		{

			// Avoid overflowing key_name buffer.
			if (sub_key_len + offset + 2 >= key_name_size - 2)
			{
				break;
			}

			// Copy sub key to key_name buffer.
			snprintf((char*) (key_name + offset), ((sub_key_len + 2) % (key_name_size - (offset + 1))) + 1, "[%s]", sub_key);

			// Increase key_name offset.
			offset += sub_key_len + 2;
		}

		// Increase p_json_token count seen.
		i++;

		// Null sub_key buf from perspective of strlen.
		memset(sub_key, 0, sub_key_size);
		sub_key_len = 0;
	}

	// Null terminate key_name just to be safe.
	key_name[key_name_size - 1] = '\0';

	// Return the new key_name.
	return p_json_tokens ? key_name : NULL;
}

// Put a value pulled from JSON in the hash map for the right key.
void json_save_key_pair(struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info* linked_list)
{
	// What is the tree type?
	#ifdef JSON_DEBUG
		printf("Tree type: '%d'\r\n", p_json_tokens->tree_type);
	#endif

	// Will be used for key name.
	unsigned char *p_key = 0;

	// Save any found values to the expr value struct on the heap.
	// We do this because the expr struct in p_json_expr is reused
	// for other values and lives on the stack hence gets destroyed.
    struct t_json_expr *p_json_expr = (struct t_json_expr *) malloc(sizeof(struct t_json_expr));
	memset(p_json_expr, 0, sizeof(struct t_json_expr));
    memcpy(p_json_expr, &p_json_tokens->expr, sizeof(struct t_json_expr));

	// Number values.
    if(p_json_expr->type == JSON_no)
    {
		//What value is this?
		#ifdef JSON_DEBUG
			printf("Packing val into t_num '%s'\r\n", (char *) p_json_tokens->expr.p_no_str);
		#endif

		// Avoid number overflows.
		trim_ws((char*)p_json_tokens->expr.p_no_str);
		if(strlen((char *) p_json_tokens->expr.p_no_str) > MAX_UINT128_PRECISION)
		{
			goto json_save_cleanup;
		}

		// Check this thing looks like a valid number.
	    if(!re_match("^[0-9]+([.][0-9]+)?$", (char *) p_json_tokens->expr.p_no_str))
	    {
	        goto json_save_cleanup;
	    }

		p_json_expr->p_no = (struct t_number *) calloc(1, sizeof(struct t_number));
		//assert(p_json_tokens->expr.p_no_str);
		*(p_json_expr->p_no) = N((char*) p_json_tokens->expr.p_no_str);

    }
    else // String literals.
    {
        p_json_expr->p_str = (unsigned char *) p_json_tokens->expr.p_str;

    }

    // Handle sub-tree storage.
	p_key = get_json_key_name(linked_list);
	if (!p_key)
	{
		// Cant get json key name
		goto json_save_cleanup;
	}

    // Quit if already saved.
    if(map_get(p_json, (const char *) p_key) != 0)
    {
        goto json_save_cleanup;
    }

    // list: code added to record value section based on i.
	#ifdef JSON_DEBUG
		if(p_json_expr->type == JSON_str && p_json_tokens->expr.p_str)
		{
			printf("Saving key '%s' = '%s'\r\n", (char *) p_key, (char *) p_json_tokens->expr.p_str);
		}
		else
		{
			printf("Saving key '%s'\r\n", (char *) p_key);
			if (p_json_expr->p_no)
			{
				PN(*((struct t_number*) p_json_expr->p_no));
			}
			else
			{
				// Number type but it wasnt set for some reason.
				goto json_save_cleanup;
			}
		}
	#endif

    // Store the key pair in the hash map.
    if(!map_put(p_json, (const char *) p_key, p_json_expr))
	{
		#ifdef JSON_DEBUG
			printf("Failed to save key.");
			sm_enum(p_json, sm_iter, NULL);
		#endif
	}
    p_json_tokens->key_pair_no++;

    // Deallocate temporary memory.
	json_save_cleanup:
		if (p_key)
		{
			free(p_key);
		}

		memset(&p_json_tokens->expr, 0, sizeof(struct t_json_expr));

}

// Remove processed JSON sub tree from process stack.
struct t_json_tokens *pop_json_token_sub_tree(struct t_linked_info *linked_list, struct t_json_tokens *p_json_tokens)
{
	#ifdef JSON_DEBUG
		printf("popping sub tree \r\n");
	#endif

	// Update list references from linked list.
	struct t_linked_item* old = linked_list_pop(linked_list);
	if (!linked_list->no)
	{
		return p_json_tokens;
	}

	// Deallocate that list item and its value.
	delete_list_item(old);

	// Get a reference to the value before the popped value in the list.
    struct t_json_tokens *p = (struct t_json_tokens *) linked_list->p_list_end->value;
	if (p == NULL)
	{
		printf("memory error\r\n");
		exit(1);
	}
	else
	{
		// Return the new token value struct.
		// The parser keeps processing from this point resembling recursion.
		memset(&(p->expr), 0, sizeof(struct t_json_expr));
		p->name = 0;
		return p;
	}
}

// Process stream of JSON characters in order.
unsigned int json_state_machine(unsigned char* p_ch, struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info *linked_list)
{
	#ifdef JSON_DEBUG
		printf("%c=%d\r\n", *p_ch, p_json_tokens->expect);
	#endif

	// End of string reached.
	if (*p_ch == '\0')
	{
        p_json_tokens->expect = JSON_close_or_comma_expr;
		return 0;
	}

	// Transition to first state.
	if (*p_ch == '"' && p_json_tokens->expect == JSON_any)
	{
        p_json_tokens->expect = JSON_any_quotes;
	}

	// Strong input validation.
	unsigned int json_error = 0;
	switch (p_json_tokens->expect)
	{
		// [\S]*.
		case JSON_any:
			break;

		// Start a new name.
		case JSON_any_quotes:
			// Allow for a JSON obj as an expression in a list.
			if (*p_ch == '{')
			{
				p_json_tokens->expect = JSON_open_or_expr;
				return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
			}

			// Start of a name.
			if (*p_ch == '"')
			{
                p_json_tokens->expect = JSON_any_then_close_name;
				break;
			}

			// Allow for the start of a key name after a common list of values.
			if (*p_ch == ',')
            {
			    p_json_tokens->expect = JSON_any_quotes;
			    break;
            }

			json_error = 1;
			break;

		// Inside of a name.
		case JSON_any_then_close_name:
			if (*p_ch != '"')
			{
                p_json_tokens->name = p_ch;
                p_json_tokens->expect = JSON_any_or_quotes;
				break;
			}

			json_error = 2;
			break;

		// Continue a name.
		case JSON_any_or_quotes:
			if (*p_ch != '"')
			{
                p_json_tokens->expect = JSON_any_or_quotes;
				break;
			}
			else
			{
				*p_ch = '\0';
                p_json_tokens->expect = JSON_colon_then_open_or_expr;
				break;
			}

			json_error = 3;
			break;

		// Seperate name and value.
		case JSON_colon_then_open_or_expr:
			if (*p_ch == ':')
			{
                p_json_tokens->expect = JSON_open_or_expr;
				break;
			}

			json_error = 4;
			break;

		// Check type of value -- new tree or expr?
		case JSON_open_or_expr:
			// New obj sub tree -- go back to the start.
			if (*p_ch == '{')
			{
				p_json_tokens->expect = JSON_any;
				return JSON_obj;
			}

			// New list sub tree.
			else if (*p_ch == '[')
			{

				p_json_tokens->expect = JSON_open_or_expr; //json expr
				return JSON_list;
			}

			// Deliminate a list of expressions.
			else if (*p_ch == ',')
			{
				p_json_tokens->expect = JSON_open_or_expr;
				break;
			}

			// Ignore this.
			else if(is_whitespace((char) *p_ch))
			{
                p_json_tokens->expect = JSON_open_or_expr;
			}

			// Otherwise it's an expression.
			else
            {
                p_json_tokens->expect = JSON_expr;
                return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
            }

			break;

		// Inside a string value.
		// Part of evaluating a string literal expr.
		// Detect if we want to close it or continue.
		case JSON_str_any_or_close:
			if (*p_ch == '"') // close.
			{
				*p_ch = '\0';
                p_json_tokens->expr.type = JSON_str;
                json_save_key_pair(p_json_tokens, p_json, linked_list);
				if (p_json_tokens->tree_type == JSON_list)
				{
					p_json_tokens->expect = JSON_close_or_comma_expr;
				}
				else
				{
					p_json_tokens->expect = JSON_any;
				}
				break;
			}
			else
			{
				// Point to start of value str.
                if(p_json_tokens->expr.type && !p_json_tokens->expr.p_str)
                {
                    p_json_tokens->expr.p_str = p_ch;
                }


                p_json_tokens->expect = JSON_str_any_or_close;
				break;
			}

			json_error = 5;
			break;

		// Match string / int / float.
		// "..." / 33 / 324234.234234
		// Detect what type of value an expression is, where it starts, and where it stops.
		case JSON_expr:
			// Start of string literal.
			if (*p_ch == '"')
			{
                p_json_tokens->expr.type = JSON_str;
                p_json_tokens->expect = JSON_str_any_or_close;
				break;
			}
			else
			{
				// Point to start of JSON value;
                if(p_json_tokens->expr.type == JSON_str && !p_json_tokens->expr.p_str)
                {
                    p_json_tokens->expr.p_str = p_ch;
                }

				// Start of new number expression.
                if(!p_json_tokens->expr.type && !is_whitespace((char) *p_ch))
                {
                    p_json_tokens->expr.type = JSON_no;
                    p_json_tokens->expr.p_no_str = p_ch;
                }

				// Ignore white space.
                if(is_whitespace((char) *p_ch) && p_json_tokens->expr.type)
                {
                    p_json_tokens->expect = JSON_expr;
                }
                else
                {
					// Otherwise continue an expression.
                    p_json_tokens->expect = JSON_any_or_end_expr;
                }

				break;
			}

			json_error = 6;
			break;

		// Once an expression is classified we end up here.
		// An expression ends here for sure.
		case JSON_any_or_end_expr:
			// Keep going until we reach the end.
			if (*p_ch != ',' && *p_ch != '}' && *p_ch != ']')
			{
				p_json_tokens->expect = JSON_any_or_end_expr;
				break;
			}
			else
            {
				// End reached -- do special processing for numbers.
                if(p_json_tokens->expr.type == JSON_no)
                {
                    *p_ch = '\0';
                    json_save_key_pair(p_json_tokens, p_json, linked_list);
                }

				// ... we might be in a list so we don't break on detecting end.
            }

		// Look for end of tree or new key value pair.
		case JSON_close_or_comma_expr:
            // Look for close.
            if (*p_ch == '}' || *p_ch == ']')
            {
                *p_ch = '\0';
                if(p_json_tokens->expr.type)
                {
                    json_save_key_pair(p_json_tokens, p_json, linked_list);
                }

                p_json_tokens->expect = JSON_left_tree;
                break;
            }

			// New expression follows -- Reset the parser.
			if (*p_ch != ',' && !is_whitespace((char) *p_ch))
			{
				// Process sub tree as direct expression.
				if (*p_ch == '{' || *p_ch == '[')
				{
					p_json_tokens->expect = JSON_open_or_expr;
					return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
				}

				// Possible we're inside a list here.
				// So continue processing that chain of expressions.
                if(p_json_tokens->tree_type == JSON_obj)
                {
                    p_json_tokens->expect = JSON_any; // json any
                    return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
                }
                else
                {
                    p_json_tokens->expect = JSON_expr; //json expr
                    return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
                }

				break;
			}

			break;

		default:
			break;
	}

	// There may be white space between most major tokens that gets ignored.
	if (is_whitespace((char) *p_ch))
	{
		json_error = 0;
	}

	return json_error;
}

// Store information on a new sub tree.
struct t_json_tokens *new_json_tokens()
{
    struct t_json_tokens *p_json_tokens = (struct t_json_tokens *) calloc(1, sizeof(struct t_json_tokens));
    p_json_tokens->expect = JSON_any;
    p_json_tokens->tree_type = JSON_obj;

    return p_json_tokens;
}

// Main function for decoding JSON.
StrMap* json_decode(const char* json_str, size_t json_str_len)
{
	// Declare variables.
	unsigned int json_error = 0;
	char ch = 0;
	unsigned int tree_type = 0;
	bool open_found = 0;
	struct t_json_tokens* p_json_tokens = 0;
	struct t_json_tokens* p_json_tokens_sub_tree = 0;
	struct t_linked_info* linked_list = 0;
	StrMap* p_json = 0;

	// Function should be easy to use and accept
	// any memory region that might quickly go out of scope
	// hence we copy it to the heap to be safe.
	unsigned char* str_heap = (unsigned char*) calloc(json_str_len + 1, sizeof(unsigned char));
	if (str_heap == 0)
	{
		goto json_decode_cleanup;
	}
	memcpy(str_heap, json_str, json_str_len);

	// Allocate room to store JSON key value pair mappings.
	p_json = map_create(1024);
	if(!p_json)
	{
		printf("Cannot allocate hash map!!\r\n");
		exit(1);
	}

	// Collection of json token counts.
	p_json_tokens = new_json_tokens();

	// Manage nestled trees of tokens in JSON.
	linked_list = create_linked_list_info();
	add_value_to_linked_list(linked_list, p_json_tokens);

	// Skip all chars before the first {.
	for (size_t i = 0; i < json_str_len; i++)
	{
		if (str_heap[i] == '{')
		{
			str_heap = &str_heap[i];
			json_str_len -= i + 1;
			open_found = true;
			break;
		}
	}

	// No open brace found.
	if (!open_found)
	{
		goto json_decode_cleanup;
	}

	// Start processing the main JSON here.
	for (size_t i = 0; i < json_str_len && linked_list->no && linked_list->no < 1024; i++)
	{
		ch = (char) str_heap[i];

		// Process current char based on finite state machine.
		json_error = json_state_machine(&str_heap[i], p_json_tokens, p_json, linked_list);
		p_json_tokens = (struct t_json_tokens*) linked_list->p_list_end->value;

		// Parse sub tree.
		if (json_error == JSON_obj || json_error == JSON_list)
		{
			// Add sub tree to head of stack.
			p_json_tokens_sub_tree = new_json_tokens();
			p_json_tokens_sub_tree->tree_type = json_error;

			// Increase element know for current tree.
			if (p_json_tokens->tree_type == JSON_list)
			{
				p_json_tokens->key_pair_no++;
			}

			// Change expectation type if it's a list.
            p_json_tokens = p_json_tokens_sub_tree;
		    if(json_error == JSON_list)
            {
		        p_json_tokens->expect = JSON_open_or_expr;
            }

			// Record sub tree for recursive processing.
            add_value_to_linked_list(linked_list, p_json_tokens);
        }

		// Done processing tree.
		else if(ch == ']' || ch == '}')
        {
			//JSON_open_or_expr
			tree_type = p_json_tokens->tree_type;
            p_json_tokens = pop_json_token_sub_tree(linked_list, p_json_tokens);

			// If process stack is one then we're at root of tree.
			// The only valid elements are still key: value pairs.
			if (linked_list->no == 1)
			{
				p_json_tokens->expect = JSON_any_quotes;
			}
			else
			{
				// Otherwise what we expect next depends on the new
				// head of the process stack. Lists have a different
				// structure to a dict -- advance state machine.
				if (tree_type == JSON_list)
				{
					p_json_tokens->expect = JSON_open_or_expr;
				}
				else
				{
					p_json_tokens->expect = JSON_any_quotes;
				}
			}
        }

        // Error occurred.
		else if(json_error)
		{
			break;
		}

		json_error = 0;
	}

	json_decode_cleanup:
		// Delete remaining sub trees.
		if (linked_list)
		{
			delete_linked_list(linked_list);
		}

		// Deallocate heap memory.
		if(json_error)
		{
			// Remove heap copy of json str.
			if (str_heap)
			{
				free(str_heap);
			}

			// Delete hash map.
			if (p_json)
			{
				map_destroy(p_json);
			}

			
			fprintf(stderr, "%d", json_error);
			return NULL;
		}

	return p_json;
}


/*
    // Pull pub key from json..
    uint8_t pub_key[32 + 1] = {};
    void *json_result = map_get(p_json, (unsigned char *) "[auth][pub]");
    if(!json_result)
    {
        return 0;
    }
    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
    if(json_expr->type != JSON_str)
    {
        return 0;
    }
*/

char *get_json_str(StrMap* p_json_map, const char *key, size_t str_len_limit, bool do_throw)
{
	void *json_result = map_get(p_json_map, key);
	if(!json_result)
	{
		if(do_throw)
		{
			printf("Key not in json.\r\n");
			exit(1);
		}
		return 0;
	}
	else
	{
	    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
	    if(json_expr->type != JSON_str)
	    {
			if(do_throw)
			{
				printf("incorrect json value type found\r\n");
				exit(1);
			}
	        return 0;
	    }
		else
		{
			if(str_len_limit)
			{
				size_t str_len = strlen((char *) json_expr->p_str);
				if(str_len > str_len_limit)
				{
					if(do_throw)
					{
						printf("Incorrect json value strlen\r\n");
						exit(1);
					}
					return 0;
				}
			}

			return (char *) json_expr->p_str;
		}
	}
}

struct t_number *get_json_no(StrMap* p_json_map, const char *key, bool do_throw)
{
	void *json_result = map_get(p_json_map, key);
	if(!json_result)
	{
		if(do_throw)
		{
			printf("Key not found in json\r\n");
			exit(1);
		}
		return 0;
	}
	else
	{
	    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
	    if(json_expr->type != JSON_no)
	    {
			if(do_throw)
			{
				printf("Incorrect value type in json\r\n");
				exit(1);
			}
	        return 0;
	    }
		else
		{
			return json_expr->p_no;
		}
	}
}

char *jstr_schema(StrMap* p_json_map, const char *key, const char *p_cstr_pattern, size_t str_len_limit, bool str_is_hex, bool return_bytes, bool do_throw)
{
	char *p_cstr_buf = get_json_str(p_json_map, key, str_len_limit, do_throw);
	if(!p_cstr_buf) return 0;

	// Validate data against regex pattern.
	if(p_cstr_pattern)
	{
		if(!re_match(p_cstr_pattern, p_cstr_buf))
		{
			if(do_throw)
			{
				printf("Pattern does not match str in json schema.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Is this hex?
	if(str_is_hex)
	{
		if(!is_hex(p_cstr_buf))
		{
			if(do_throw)
			{
				printf("JSON value is malformed hex.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Return bytes instead of chars.
	if(return_bytes)
	{
		size_t cstr_len = strlen(p_cstr_buf);
		size_t buf_size = (cstr_len * 2) + 1;
		char *p_bytes = (char *) calloc(buf_size, sizeof(char));
		if(!p_bytes)
		{
			if(do_throw)
			{
				printf("cannot alloc new memory for byte str in json schema\r\n");
				exit(1);
			}

			return 0;
		}

		if(hexstr_to_bytes(p_cstr_buf, cstr_len,
			(unsigned char*) p_bytes, buf_size) != buf_size - 1)
		{
			if(do_throw)
			{
				printf("Unknown error conv hex to bytes in json val schema\r\n");
				exit(1);
			}

			return 0;
		}

		p_cstr_buf = p_bytes;
	}

	return p_cstr_buf;
}

struct t_number *jno_schema(
	StrMap* p_json_map, const char *key,
	char *p_cstr_exact_list_filter,
	struct t_number gte_filter,
	struct t_number lte_filter,
	unsigned int op,
	bool do_throw
)
{
	struct t_number *p_no = get_json_no(p_json_map, key, do_throw);
	if(!p_no) return 0;

	size_t exact_list_filter_size = strlen(p_cstr_exact_list_filter);
	char *p_cstr_exact_filter = &p_cstr_exact_list_filter[0];

	// Process exact match filters.
	if(p_cstr_exact_list_filter)
	{
		bool match_found = true;
		for(size_t i = 0; i < exact_list_filter_size && p_cstr_exact_filter; i++)
		{
			if(p_cstr_exact_list_filter[i] == ',' || i == exact_list_filter_size - 1)
			{
				// Terminate current filter.
				if(p_cstr_exact_list_filter[i] == ',')
				{
					p_cstr_exact_list_filter[i] = '\0';
				}

				// Quit.
				if(!p_cstr_exact_filter)
				{
					break;
				}

				// Validate current number against this.
				if(safe_logic(BOTH_EQUALS, N(p_cstr_exact_filter), *p_no))
				{
					match_found = true;
					break;
				}

				// Set start of next filter.
				p_cstr_exact_filter = &p_cstr_exact_list_filter[i + 1];
				i++;
			}
		}

		if(!match_found)
		{
			if(do_throw)
			{
				printf("Exact match failed for list of nos.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Process range filters.
	if(safe_logic(NOT_EQUALS, gte_filter, N("0")) && safe_logic(NOT_EQUALS, lte_filter, N("0")))
	{
		// Do AND compare.
		if(op == LOGIC_AND)
		{
			if(!(safe_logic(GREATER_EQUALS, gte_filter, *p_no) &&
				 safe_logic(LESS_EQUALS, lte_filter, *p_no)) )
			{
				if(do_throw)
				{
					printf("AND filters failed for json schema.\r\n");
					exit(1);
				}

				return 0;
			}
		}

		// Do OR compare.
		if(op == LOGIC_OR)
		{
			if(!(safe_logic(GREATER_EQUALS, gte_filter, *p_no) ||
				 safe_logic(LESS_EQUALS, lte_filter, *p_no)) )
			{
				if(do_throw)
				{
					printf("OR filters failed for json schema.\r\n");
					exit(1);
				}

				return 0;
			}
		}
	}

	return p_no;
}

// precision checks for no?
// todo: add better input validation checking to N since input now passes through it. reject everything outside [0-9.]


///////////////////////////////////////////////
// <Start SHA256 code>
//////////////////////////////////////////////



/* lonesha256 function */
int sha256(unsigned char out[32], const unsigned char* in, size_t len) {
    /* writes the sha256 hash of the first "len" bytes in buffer "in" to buffer "out"
     * returns 0 on success, may return non-zero in future versions to indicate error */
    int i;
    const uint32_t K[64] = {
        0x428a2f98UL, 0x71374491UL, 0xb5c0fbcfUL, 0xe9b5dba5UL,
        0x3956c25bUL, 0x59f111f1UL, 0x923f82a4UL, 0xab1c5ed5UL,
        0xd807aa98UL, 0x12835b01UL, 0x243185beUL, 0x550c7dc3UL,
        0x72be5d74UL, 0x80deb1feUL, 0x9bdc06a7UL, 0xc19bf174UL,
        0xe49b69c1UL, 0xefbe4786UL, 0x0fc19dc6UL, 0x240ca1ccUL,
        0x2de92c6fUL, 0x4a7484aaUL, 0x5cb0a9dcUL, 0x76f988daUL,
        0x983e5152UL, 0xa831c66dUL, 0xb00327c8UL, 0xbf597fc7UL,
        0xc6e00bf3UL, 0xd5a79147UL, 0x06ca6351UL, 0x14292967UL,
        0x27b70a85UL, 0x2e1b2138UL, 0x4d2c6dfcUL, 0x53380d13UL,
        0x650a7354UL, 0x766a0abbUL, 0x81c2c92eUL, 0x92722c85UL,
        0xa2bfe8a1UL, 0xa81a664bUL, 0xc24b8b70UL, 0xc76c51a3UL,
        0xd192e819UL, 0xd6990624UL, 0xf40e3585UL, 0x106aa070UL,
        0x19a4c116UL, 0x1e376c08UL, 0x2748774cUL, 0x34b0bcb5UL,
        0x391c0cb3UL, 0x4ed8aa4aUL, 0x5b9cca4fUL, 0x682e6ff3UL,
        0x748f82eeUL, 0x78a5636fUL, 0x84c87814UL, 0x8cc70208UL,
        0x90befffaUL, 0xa4506cebUL, 0xbef9a3f7UL, 0xc67178f2UL
    };
    uint64_t sha256_length = 0;
    uint32_t sha256_state[8] = {
        0x6A09E667UL, 0xBB67AE85UL, 0x3C6EF372UL, 0xA54FF53AUL,
        0x510E527FUL, 0x9B05688CUL, 0x1F83D9ABUL, 0x5BE0CD19UL
    }, S[8], W[64], t0, t1, t;
    unsigned char sha256_buf[64];
    /* process input in 64 byte chunks */
    while (len >= 64) {
       SHA256_COMPRESS(in);
       sha256_length += 64 * 8;
       in += 64;
       len -= 64;
    }
    /* copy remaining bytes into sha256_buf */
    memcpy(sha256_buf, in, len);
    /* finish up (len now number of bytes in sha256_buf) */
    sha256_length += len * 8;
    sha256_buf[len++] = 0x80;
    /* pad then compress if length is above 56 bytes */
    if (len > 56) {
        while (len < 64) sha256_buf[len++] = 0;
        SHA256_COMPRESS(sha256_buf);
        len = 0;
    }
    /* pad up to 56 bytes */
    while (len < 56) sha256_buf[len++] = 0;
    /* store length and compress */
    STORE64H(sha256_length, sha256_buf + 56);
    SHA256_COMPRESS(sha256_buf);
    /* copy output */
    for (i = 0; i < 8; i++) {
        STORE32H(sha256_state[i], out + 4*i);
    }
    /* return */
    return 0;
}

///////////////////////////////////////////////
// </End SHA256 code>
//////////////////////////////////////////////

/*
 * Entropy sources:
 *    - Open enclave SDK    = Intel RDRAND instruction
 *    - Intel enclave SDK   =     ...
 *    - Web Assembly        = Virtual file system - OS /dev/random
 *    - Android             = /dev/random - sensor entropy
 *    - Samsung Knox        =     ...
 *    - Linux               =     ...
 *    - Mac OS X            =     ...
 *    - Windows             = Crypt API / BCryptGenRandom - Closed source
 *
 *
 * Optimizations:
 *    - Fetch optimal amounts of entrop, cache unused for next call.
 *    - /dev/random:
 *        - "A read(2) from /dev/random will return at most 512 bytes"
 *        - Non-blocking read calls
 *
 * References:
 *     - http://man7.org/linux/man-pages/man4/random.4.html
 *     - https://developer.android.com/reference/kotlin/java/security/SecureRandom?hl=en
 *     - https://emscripten.org/docs/api_reference/Filesystem-API.html
 *     - https://github.com/intel/linux-sgx/blob/master/common/src/sgx_read_rand.cpp
 *     - https://github.com/openenclave/openenclave/blob/master/common/sgx/rand.asm
 *
*/


// Open Enclave SDK.
#ifdef OE_API_VERSION
    
    //#include <openenclave/3rdparty/libcxx/libcxx/src/random>

    //#include <stdlib.h>
    
    signed int rand_chr()
    {
        
        
        static unsigned int buf = 0;
        static unsigned int offset = 0;
        static uint8_t *p = (uint8_t *) &buf;

        if(buf)
        {
            offset++;
            if(offset >= sizeof(unsigned int))
            {
                offset = 0;
                buf = 0;
                return rand_chr();
            }
        }
        else
        {
            //uint64_t rand_num = oe_rdrand();
            //getrandom(p, sizeof(unsigned int), (unsigned int) GRND_RANDOM);
            
            buf = random_device()() + 0;
            
            /*
            if(oe_random(p, sizeof(unsigned int)) != OE_OK)
            {
                return -1;
            }
            */
            
            return -1;
        }
        
        return p[offset];
    }

// Intel Enclave SDK.
#elif defined(SGX_SUCCESS)
    signed int rand_chr()
    {
        static uint8_t buf[10] = {};
        static unsigned int offset = 0;

        if(offset)
        {
            offset++;
            if(offset >= 9)
            {
                offset = 0;
            }
        }

        if(!offset)
        {
            if(sgx_read_rand(&(buf[1]), 8) != SGX_SUCCESS)
            {
                return -1;
            }

            offset = 1;
        }

        return buf[offset];
    }

// WebAssembly, Android, Knox, Linux + Darwin.
#elif defined (__ANDROID__) || defined (EMSCRIPTEN) || defined (__linux__) || defined (__APPLE__)
    #include <unistd.h>
    #include <fcntl.h>

    signed int rand_chr()
    {
        static unsigned int bytes_read = 0;
        static unsigned char data[513];

        // Update position in data buf.
        static int offset = 0;
        if(bytes_read)
        {
            offset++;
            if(offset >= bytes_read)
            {
                offset = 0;
            }
        }

        // Load new entropy.
        if(!offset)
        {
            int fp;
            fp = open("/dev/random", O_RDONLY);
            if(fp == 0)
            {
                return -1;
            }

            // Return what ever is available in /dev/random.
            // Code is non-blocking.
            signed int status = read(fp, &data, 512);
            if(status < 1)
            {
                close(fp);
                return -1;
            }

            bytes_read = status;
            close(fp);
        }

        return (signed int) data[offset];
    }

// Windows.
#elif defined (_WIN32) || defined (_WIN64)
    #include <bcrypt.h>
    #pragma comment(lib, "bcrypt.lib")
    #ifndef BCRYPT_STATUS_SUCCESS
        #define BCRYPT_STATUS_SUCCESS ((NTSTATUS)0x00000000L)
    #endif

signed int rand_chr()
{
    static unsigned char buf[10] = {};
    static unsigned int offset = 0;

    if (offset)
    {
        offset++;
        if (offset >= 9)
        {
            offset = 0;
        }
    }

    if (!offset)
    {
        if (BCryptGenRandom(NULL, &(buf[1]), 8,
        BCRYPT_USE_SYSTEM_PREFERRED_RNG) == BCRYPT_STATUS_SUCCESS)
        {
            offset = 1;
        }
        else
        {
            return -1;
        }
    }

    return buf[offset];
}

// No idea how to handle randomeness securely.s
#else

"Compiler error missing ;"

#endif

unsigned int rand_bytes(unsigned char *p, unsigned int no)
{
    signed int ret = 0;
    for(unsigned int i = 0; i < no; i++)
    {
        ret = rand_chr();
        if(ret < 0)
        {
            // Try 3 times to get a random byte.
            for(unsigned int j = 0; j < 3; j++)
            {
                // First sleep to gather more entropy.
                sleep_for(1000);

                // Get entropy.
                ret = rand_chr();

                // Quit as soon as the result is valid.
                if(ret != -1)
                {
                    break;
                }
            }
        }

        if(ret < 0)
        {
            return i + 1;
        }

        p[i] = (unsigned char) ret;
    }

    return no;
}

#ifndef RAND_PLATFORM_INDEPENDENT


uint32_t random32(void) {
  uint32_t buf = 0;
  unsigned int ret = rand_bytes((unsigned char *) &buf, 4);
  if(ret != 4)
  {
    printf("Unable to get entropy.\r\n");
    exit(1);
  }

  return buf;
}

#endif /* RAND_PLATFORM_INDEPENDENT */

/**
 * Copyright (c) 2013-2014 Tomas Dzetkulic
 * Copyright (c) 2013-2014 Pavol Rusnak
 * Copyright (c)      2015 Jochen Hoenicke
 * Copyright (c)      2016 Alex Beregszaszi
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */


/* big number library */

/* The structure bignum256 is an array of nine 32-bit values, which
 * are digits in base 2^30 representation.  I.e. the number
 *   bignum256 a;
 * represents the value
 *   sum_{i=0}^8 a.val[i] * 2^{30 i}.
 *
 * The number is *normalized* iff every digit is < 2^30.
 *
 * As the name suggests, a bignum256 is intended to represent a 256
 * bit number, but it can represent 270 bits.  Numbers are usually
 * reduced using a prime, either the group order or the field prime.
 * The reduction is often partly done by bn_fast_mod, and similarly
 * implicitly in bn_multiply.  A *partly reduced number* is a
 * normalized number between 0 (inclusive) and 2*prime (exclusive).
 *
 * A partly reduced number can be fully reduced by calling bn_mod.
 * Only a fully reduced number is guaranteed to fit in 256 bit.
 *
 * All functions assume that the prime in question is slightly smaller
 * than 2^256.  In particular it must be between 2^256-2^224 and
 * 2^256 and it must be a prime number.
 */



#include <assert.h>

 void bn_addi(bignum256 *a, uint32_t b) {
   int i;
   uint32_t tmp = b;
   for (i = 0; i < 9; i++) {
     tmp += a->val[i];
     a->val[i] = tmp & 0x3FFFFFFF;
     tmp >>= 30;
   }
 }

 // add two numbers a = a + b
 // assumes that a, b are normalized
 // guarantees that a is normalized
 void bn_add(bignum256 *a, const bignum256 *b) {
   int i;
   uint32_t tmp = 0;
   for (i = 0; i < 9; i++) {
     tmp += a->val[i] + b->val[i];
     a->val[i] = tmp & 0x3FFFFFFF;
     tmp >>= 30;
   }
 }

 void bn_subi(bignum256 *a, uint32_t b, const bignum256 *prime) {
   bool x = b <= prime->val[0];
   assert(x);
   // the possible underflow will be taken care of when adding the prime
   a->val[0] -= b;
   bn_add(a, prime);
 }

 // sets a bignum to zero.
 void bn_zero(bignum256 *a) {
   int i;
   for (i = 0; i < 9; i++) {
     a->val[i] = 0;
   }
 }

 // a / 1000 = a (+r)
 void bn_divmod1000(bignum256 *a, uint32_t *r) {
   int i;
   uint32_t rem, tmp;
   rem = a->val[8] % 1000;
   a->val[8] /= 1000;
   for (i = 7; i >= 0; i--) {
     // invariants:
     //   rem = old(a) >> 30(i+1) % 1000
     //   a[i+1..8] = old(a[i+1..8])/1000
     //   a[0..i]   = old(a[0..i])
     // 2^30 == 1073741*1000 + 824
     tmp = rem * 824 + a->val[i];
     // set a[i] = (rem * 2^30 + a[i])/1000
     //          = rem * 1073741 + (rem * 824 + a[i])/1000
     a->val[i] = rem * 1073741 + (tmp / 1000);
     // set rem = (rem * 2^30 + a[i]) mod 1000
     //         = (rem * 824 + a[i]) mod 1000
     rem = tmp % 1000;
   }
   *r = rem;
 }

 unsigned int bn_digitcount(const bignum256 *a) {
   bignum256 val;
   memcpy(&val, a, sizeof(bignum256));

   unsigned int digits = 1;

   for (unsigned int i = 0; i < DIGITS; i += 3) {
     uint32_t limb;
     bn_divmod1000(&val, &limb);

     if (limb >= 100) {
       digits = i + 3;
     } else if (limb >= 10) {
       digits = i + 2;
     } else if (limb >= 1) {
       digits = i + 1;
     }
   }

   return digits;
 }

 // checks that a bignum is zero.
 // a must be normalized
 // function is constant time (on some architectures, in particular ARM).
 int bn_is_zero(const bignum256 *a) {
   int i;
   uint32_t result = 0;
   for (i = 0; i < 9; i++) {
     result |= a->val[i];
   }
   return !result;
 }


 size_t bn_format(const bignum256 *amnt, const char *prefix, const char *suffix,
                  unsigned int decimals, int exponent, bool trailing, char *out,
                  size_t outlen) {
   // sanity check, 2**256 ~ 10**77; we should never need decimals/exponent
   // bigger than that
   if (decimals > 80 || exponent < -20 || exponent > 80) {
     memzero(out, outlen);
     return 0;
   }

   size_t prefixlen = prefix ? strlen(prefix) : 0;
   size_t suffixlen = suffix ? strlen(suffix) : 0;

   /* add prefix to beginning of out buffer */
   if (prefixlen) {
     memcpy(out, prefix, prefixlen);
   }
   /* add suffix to end of out buffer */
   if (suffixlen) {
     memcpy(&out[outlen - suffixlen - 1], suffix, suffixlen);
   }
   /* nul terminate (even if suffix = NULL) */
   out[outlen - 1] = '\0';

   /* fill number between prefix and suffix (between start and end) */
   char *start = &out[prefixlen], *end = &out[outlen - suffixlen - 1];
   char *str = end;

   #define BN_FORMAT_PUSH_CHECKED(c) \
     do {                            \
       if (str == start) return 0;   \
       *--str = (c);                 \
     } while (0)

   #define BN_FORMAT_PUSH(n)                                       \
     do {                                                          \
       if (exponent < 0) {                                         \
         exponent++;                                               \
       } else {                                                    \
         if ((n) > 0 || trailing || str != end || decimals <= 1) { \
           BN_FORMAT_PUSH_CHECKED('0' + (n));                      \
         }                                                         \
         if (decimals > 0 && decimals-- == 1) {                    \
           BN_FORMAT_PUSH_CHECKED('.');                            \
         }                                                         \
       }                                                           \
     } while (0)

     bignum256 val;
     memcpy(&val, amnt, sizeof(bignum256));

     if (bn_is_zero(&val)) {
       exponent = 0;
     }

     for (; exponent > 0; exponent--) {
       BN_FORMAT_PUSH(0);
     }

     unsigned int digits = bn_digitcount(&val);
     for (unsigned int i = 0; i < digits / 3; i++) {
       uint32_t limb;
       bn_divmod1000(&val, &limb);

       BN_FORMAT_PUSH((char) (limb % 10));
       limb /= 10;
       BN_FORMAT_PUSH((char) (limb % 10));
       limb /= 10;
       BN_FORMAT_PUSH((char) (limb % 10));
     }

     if (digits % 3 != 0) {
       uint32_t limb;
       bn_divmod1000(&val, &limb);

       switch (digits % 3) {
         case 2:
           BN_FORMAT_PUSH((char) (limb % 10));
           limb /= 10;
           //-fallthrough

         case 1:
           BN_FORMAT_PUSH((char) (limb % 10));
           break;
       }
     }

     while (decimals > 0 || str[0] == '\0' || str[0] == '.') {
       BN_FORMAT_PUSH(0);
     }

     /* finally move number to &out[prefixlen] to close the gap between
      * prefix and str.  len is length of number + suffix + traling 0
      */
     size_t len = (size_t) (&out[outlen] - str);
     memmove(&out[prefixlen], str, len);

     /* return length of number including prefix and suffix without trailing 0 */
     return prefixlen + len - 1;
   }

 void bn_read_uint64(uint64_t in_number, bignum256 *out_number) {
   out_number->val[0] = in_number & 0x3FFFFFFF;
   out_number->val[1] = (in_number >>= 30) & 0x3FFFFFFF;
   out_number->val[2] = (uint32_t) (in_number >>= 30);
   out_number->val[3] = 0;
   out_number->val[4] = 0;
   out_number->val[5] = 0;
   out_number->val[6] = 0;
   out_number->val[7] = 0;
   out_number->val[8] = 0;
 }

 static inline uint32_t bn_write_uint32(const bignum256 *in_number) {
   return in_number->val[0] | (in_number->val[1] << 30);
 }

 static inline uint64_t bn_write_uint64(const bignum256 *in_number) {
   uint64_t tmp;
   tmp = in_number->val[2];
   tmp <<= 30;
   tmp |= in_number->val[1];
   tmp <<= 30;
   tmp |= in_number->val[0];
   return tmp;
 }

 // copies number a to b
 static inline void bn_copy(const bignum256 *a, bignum256 *b) { *b = *a; }



 static inline int bn_is_even(const bignum256 *a) {
   return (a->val[0] & 1) == 0;
 }

 static inline int bn_is_odd(const bignum256 *a) { return (a->val[0] & 1) == 1; }



 static inline size_t bn_format_uint64(uint64_t amount, const char *prefix,
                                       const char *suffix, unsigned int decimals,
                                       int exponent, bool trailing, char *out,
                                       size_t outlen) {
   bignum256 amnt;
   bn_read_uint64(amount, &amnt);

   return bn_format(&amnt, prefix, suffix, decimals, exponent, trailing, out,
                    outlen);
 }

uint32_t read_be(const uint8_t *data) {
  return (((uint32_t)data[0]) << 24) | (((uint32_t)data[1]) << 16) |
         (((uint32_t)data[2]) << 8) | (((uint32_t)data[3]));
}

void write_be(uint8_t *data, uint32_t x) {
  data[0] = x >> 24;
  data[1] = (uint8_t) (x >> 16);
  data[2] = (uint8_t) (x >> 8);
  data[3] = (uint8_t) (x);
}

uint32_t read_le(const uint8_t *data) {
  return (((uint32_t)data[3]) << 24) | (((uint32_t)data[2]) << 16) |
         (((uint32_t)data[1]) << 8) | (((uint32_t)data[0]));
}

void write_le(uint8_t *data, uint32_t x) {
  data[3] = x >> 24;
  data[2] = (uint8_t) (x >> 16);
  data[1] = (uint8_t) (x >> 8);
  data[0] = (uint8_t) (x);
}

// convert a raw bigendian 256 bit value into a normalized bignum.
// out_number is partly reduced (since it fits in 256 bit).
void bn_read_be(const uint8_t *in_number, bignum256 *out_number) {
  int i;
  uint32_t temp = 0;
  for (i = 0; i < 8; i++) {
    // invariant: temp = (in_number % 2^(32i)) >> 30i
    // get next limb = (in_number % 2^(32(i+1))) >> 32i
    uint32_t limb = read_be(in_number + (7 - i) * 4);
    // temp = (in_number % 2^(32(i+1))) << 30i
    temp |= limb << (2 * i);
    // store 30 bits into val[i]
    out_number->val[i] = temp & 0x3FFFFFFF;
    // prepare temp for next round
    temp = limb >> (30 - 2 * i);
  }
  out_number->val[8] = temp;
}

// convert a normalized bignum to a raw bigendian 256 bit number.
// in_number must be fully reduced.
void bn_write_be(const bignum256 *in_number, uint8_t *out_number) {
  int i;
  uint32_t temp = in_number->val[8];
  for (i = 0; i < 8; i++) {
    // invariant: temp = (in_number >> 30*(8-i))
    uint32_t limb = in_number->val[7 - i];
    temp = (temp << (16 + 2 * i)) | (limb >> (14 - 2 * i));
    write_be(out_number + i * 4, temp);
    temp = limb;
  }
}

// convert a raw little endian 256 bit value into a normalized bignum.
// out_number is partly reduced (since it fits in 256 bit).
void bn_read_le(const uint8_t *in_number, bignum256 *out_number) {
  int i;
  uint32_t temp = 0;
  for (i = 0; i < 8; i++) {
    // invariant: temp = (in_number % 2^(32i)) >> 30i
    // get next limb = (in_number % 2^(32(i+1))) >> 32i
    uint32_t limb = read_le(in_number + i * 4);
    // temp = (in_number % 2^(32(i+1))) << 30i
    temp |= limb << (2 * i);
    // store 30 bits into val[i]
    out_number->val[i] = temp & 0x3FFFFFFF;
    // prepare temp for next round
    temp = limb >> (30 - 2 * i);
  }
  out_number->val[8] = temp;
}

// convert a normalized bignum to a raw little endian 256 bit number.
// in_number must be fully reduced.
void bn_write_le(const bignum256 *in_number, uint8_t *out_number) {
  int i;
  uint32_t temp = in_number->val[8];
  for (i = 0; i < 8; i++) {
    // invariant: temp = (in_number >> 30*(8-i))
    uint32_t limb = in_number->val[7 - i];
    temp = (temp << (16 + 2 * i)) | (limb >> (14 - 2 * i));
    write_le(out_number + (7 - i) * 4, temp);
    temp = limb;
  }
}

void bn_read_uint32(uint32_t in_number, bignum256 *out_number) {
  out_number->val[0] = in_number & 0x3FFFFFFF;
  out_number->val[1] = in_number >> 30;
  out_number->val[2] = 0;
  out_number->val[3] = 0;
  out_number->val[4] = 0;
  out_number->val[5] = 0;
  out_number->val[6] = 0;
  out_number->val[7] = 0;
  out_number->val[8] = 0;
}

// a must be normalized
int bn_bitcount(const bignum256 *a) {
  int i;
  for (i = 8; i >= 0; i--) {
    int tmp = (int) a->val[i];
    if (tmp != 0) {
      return i * 30 + (32 - __builtin_clz((uint32_t) tmp));
    }
  }
  return 0;
}


// sets a bignum to one.
void bn_one(bignum256 *a) {
  a->val[0] = 1;
  a->val[1] = 0;
  a->val[2] = 0;
  a->val[3] = 0;
  a->val[4] = 0;
  a->val[5] = 0;
  a->val[6] = 0;
  a->val[7] = 0;
  a->val[8] = 0;
}

// Check whether a < b
// a and b must be normalized
// function is constant time (on some architectures, in particular ARM).
int bn_is_less(const bignum256 *a, const bignum256 *b) {
  int i;
  uint32_t res1 = 0;
  uint32_t res2 = 0;
  for (i = 8; i >= 0; i--) {
    res1 = (res1 << 1) | (a->val[i] < b->val[i]);
    res2 = (res2 << 1) | (a->val[i] > b->val[i]);
  }
  return res1 > res2;
}

// Check whether a == b
// a and b must be normalized
// function is constant time (on some architectures, in particular ARM).
int bn_is_equal(const bignum256 *a, const bignum256 *b) {
  int i;
  uint32_t result = 0;
  for (i = 0; i < 9; i++) {
    result |= (a->val[i] ^ b->val[i]);
  }
  return !result;
}

// Assigns res = cond ? truecase : falsecase
// assumes that cond is either 0 or 1.
// function is constant time.
void bn_cmov(bignum256 *res, int cond, const bignum256 *truecase,
             const bignum256 *falsecase) {
  int i;
  uint32_t tmask = (uint32_t)-cond;
  uint32_t fmask = ~tmask;

  assert(cond == 1 || cond == 0);
  for (i = 0; i < 9; i++) {
    res->val[i] = (truecase->val[i] & tmask) | (falsecase->val[i] & fmask);
  }
}

// shift number to the left, i.e multiply it by 2.
// a must be normalized.  The result is normalized but not reduced.
void bn_lshift(bignum256 *a) {
  int i;
  for (i = 8; i > 0; i--) {
    a->val[i] =
        ((a->val[i] << 1) & 0x3FFFFFFF) | ((a->val[i - 1] & 0x20000000) >> 29);
  }
  a->val[0] = (a->val[0] << 1) & 0x3FFFFFFF;
}

// shift number to the right, i.e divide by 2 while rounding down.
// a must be normalized.  The result is normalized.
void bn_rshift(bignum256 *a) {
  int i;
  for (i = 0; i < 8; i++) {
    a->val[i] = (a->val[i] >> 1) | ((a->val[i + 1] & 1) << 29);
  }
  a->val[8] >>= 1;
}

// sets bit in bignum
void bn_setbit(bignum256 *a, uint8_t bit) {
  a->val[bit / 30] |= (1u << (bit % 30));
}

// clears bit in bignum
void bn_clearbit(bignum256 *a, uint8_t bit) {
  a->val[bit / 30] &= ~(1u << (bit % 30));
}

// tests bit in bignum
uint32_t bn_testbit(bignum256 *a, uint8_t bit) {
  return a->val[bit / 30] & (1u << (bit % 30));
}

// a = b ^ c
void bn_xor(bignum256 *a, const bignum256 *b, const bignum256 *c) {
  unsigned int i;
  for (i = 0; i < 9; i++) {
    a->val[i] = b->val[i] ^ c->val[i];
  }
}

// multiply x by 1/2 modulo prime.
// it computes x = (x & 1) ? (x + prime) >> 1 : x >> 1.
// assumes x is normalized.
// if x was partly reduced, it is also partly reduced on exit.
// function is constant time.
void bn_mult_half(bignum256 *x, const bignum256 *prime) {
  int j;
  int32_t tmp3 = (int32_t) (x->val[0] & 1);
  uint32_t xodd = (uint32_t) -tmp3;
  // compute x = x/2 mod prime
  // if x is odd compute (x+prime)/2
  uint32_t tmp1 = (x->val[0] + (prime->val[0] & xodd)) >> 1;
  for (j = 0; j < 8; j++) {
    uint32_t tmp2 = (x->val[j + 1] + (prime->val[j + 1] & xodd));
    tmp1 += (tmp2 & 1) << 29;
    x->val[j] = tmp1 & 0x3fffffff;
    tmp1 >>= 30;
    tmp1 += tmp2 >> 1;
  }
  x->val[8] = tmp1;
}

// partly reduce x modulo prime
// input x does not have to be normalized.
// x can be any number that fits.
// prime must be between (2^256 - 2^224) and 2^256
// result is partly reduced, smaller than 2*prime
void bn_fast_mod(bignum256 *x, const bignum256 *prime) {
  int j;
  uint32_t coef;
  uint64_t temp;

  coef = x->val[8] >> 16;
  // substract (coef * prime) from x
  // note that we unrolled the first iteration
  temp = 0x2000000000000000ull + x->val[0] - prime->val[0] * (uint64_t)coef;
  x->val[0] = temp & 0x3FFFFFFF;
  for (j = 1; j < 9; j++) {
    temp >>= 30;
    temp += 0x1FFFFFFF80000000ull + x->val[j] - prime->val[j] * (uint64_t)coef;
    x->val[j] = temp & 0x3FFFFFFF;
  }
}

// multiply x by k modulo prime.
// assumes x is normalized, 0 <= k <= 4.
// guarantees x is partly reduced.
void bn_mult_k(bignum256 *x, uint8_t k, const bignum256 *prime) {
  int j;
  for (j = 0; j < 9; j++) {
    x->val[j] = k * x->val[j];
  }
  bn_fast_mod(x, prime);
}

// res = a - b ; a > b
void bn_subtract(const bignum256 *a, const bignum256 *b, bignum256 *res) {
  int i;
  uint32_t tmp = 1;
  for (i = 0; i < 9; i++) {
    tmp += 0x3FFFFFFF + a->val[i] - b->val[i];
    res->val[i] = tmp & 0x3FFFFFFF;
    tmp >>= 30;
  }
}

// compute x = x mod prime  by computing  x >= prime ? x - prime : x.
// assumes x partly reduced, guarantees x fully reduced.
void bn_mod(bignum256 *x, const bignum256 *prime) {
  const int flag = bn_is_less(x, prime);  // x < prime
  bignum256 temp;
  bn_subtract(x, prime, &temp);  // temp = x - prime
  bn_cmov(x, flag, x, &temp);
}

// auxiliary function for multiplication.
// compute k * x as a 540 bit number in base 2^30 (normalized).
// assumes that k and x are normalized.
void bn_multiply_long(const bignum256 *k, const bignum256 *x,
                      uint32_t res[18]) {
  int i, j;
  uint64_t temp = 0;

  // compute lower half of long multiplication
  for (i = 0; i < 9; i++) {
    for (j = 0; j <= i; j++) {
      // no overflow, since 9*2^60 < 2^64
      temp += k->val[j] * (uint64_t)x->val[i - j];
    }
    res[i] = temp & 0x3FFFFFFFu;
    temp >>= 30;
  }
  // compute upper half
  for (; i < 17; i++) {
    for (j = i - 8; j < 9; j++) {
      // no overflow, since 9*2^60 < 2^64
      temp += k->val[j] * (uint64_t)x->val[i - j];
    }
    res[i] = temp & 0x3FFFFFFFu;
    temp >>= 30;
  }
  res[17] = (uint32_t) temp;
}

// auxiliary function for multiplication.
// reduces res modulo prime.
// assumes i >= 8 and i <= 16
// assumes    res normalized, res < 2^(30(i-7)) * 2 * prime
// guarantees res normalized, res < 2^(30(i-8)) * 2 * prime
void bn_multiply_reduce_step(uint32_t res[18], const bignum256 *prime,
                             uint32_t i) {
  // let k = i-8.
  // on entry:
  //   0 <= res < 2^(30k + 31) * prime
  // estimate coef = (res / prime / 2^30k)
  // by coef = res / 2^(30k + 256)  rounded down
  // 0 <= coef < 2^31
  // subtract (coef * 2^(30k) * prime) from res
  // note that we unrolled the first iteration
  assert(i >= 8 && i <= 16);
  uint32_t j;
  uint32_t coef = (res[i] >> 16) + (res[i + 1] << 14);
  uint64_t temp =
      0x2000000000000000ull + res[i - 8] - prime->val[0] * (uint64_t)coef;
  assert(coef < 0x80000000u);
  res[i - 8] = temp & 0x3FFFFFFF;
  for (j = 1; j < 9; j++) {
    temp >>= 30;
    // Note: coeff * prime->val[j] <= (2^31-1) * (2^30-1)
    // Hence, this addition will not underflow.
    temp +=
        0x1FFFFFFF80000000ull + res[i - 8 + j] - prime->val[j] * (uint64_t)coef;
    res[i - 8 + j] = temp & 0x3FFFFFFF;
    // 0 <= temp < 2^61 + 2^30
  }
  temp >>= 30;
  temp += 0x1FFFFFFF80000000ull + res[i - 8 + j];
  res[i - 8 + j] = temp & 0x3FFFFFFF;
  // we rely on the fact that prime > 2^256 - 2^224
  //   res = oldres - coef*2^(30k) * prime;
  // and
  //   coef * 2^(30k + 256) <= oldres < (coef+1) * 2^(30k + 256)
  // Hence, 0 <= res < 2^30k (2^256 + coef * (2^256 - prime))
  //                 < 2^30k (2^256 + 2^31 * 2^224)
  //                 < 2^30k (2 * prime)
}

// auxiliary function for multiplication.
// reduces x = res modulo prime.
// assumes    res normalized, res < 2^270 * 2 * prime
// guarantees x partly reduced, i.e., x < 2 * prime
void bn_multiply_reduce(bignum256 *x, uint32_t res[18],
                        const bignum256 *prime) {
  int i;
  // res = k * x is a normalized number (every limb < 2^30)
  // 0 <= res < 2^270 * 2 * prime.
  for (i = 16; i >= 8; i--) {
    bn_multiply_reduce_step(res, prime, (uint32_t) i);
    assert(res[i + 1] == 0);
  }
  // store the result
  for (i = 0; i < 9; i++) {
    x->val[i] = res[i];
  }
}

// Compute x := k * x  (mod prime)
// both inputs must be smaller than 180 * prime.
// result is partly reduced (0 <= x < 2 * prime)
// This only works for primes between 2^256-2^224 and 2^256.
void bn_multiply(const bignum256 *k, bignum256 *x, const bignum256 *prime) {
  uint32_t res[18] = {0};
  bn_multiply_long(k, x, res);
  bn_multiply_reduce(x, res, prime);
  memzero(res, sizeof(res));
}


// square root of x = x^((p+1)/4)
// http://en.wikipedia.org/wiki/Quadratic_residue#Prime_or_prime_power_modulus
// assumes    x is normalized but not necessarily reduced.
// guarantees x is reduced
void bn_sqrt(bignum256 *x, const bignum256 *prime) {
  // this method compute x^1/2 = x^(prime+1)/4
  uint32_t i, j, limb;
  bignum256 res, p;
  bn_one(&res);
  // compute p = (prime+1)/4
  memcpy(&p, prime, sizeof(bignum256));
  bn_addi(&p, 1);
  bn_rshift(&p);
  bn_rshift(&p);
  for (i = 0; i < 9; i++) {
    // invariants:
    //    x   = old(x)^(2^(i*30))
    //    res = old(x)^(p % 2^(i*30))
    // get the i-th limb of prime - 2
    limb = p.val[i];
    for (j = 0; j < 30; j++) {
      // invariants:
      //    x    = old(x)^(2^(i*30+j))
      //    res  = old(x)^(p % 2^(i*30+j))
      //    limb = (p % 2^(i*30+30)) / 2^(i*30+j)
      if (i == 8 && limb == 0) break;
      if (limb & 1) {
        bn_multiply(x, &res, prime);
      }
      limb >>= 1;
      bn_multiply(x, x, prime);
    }
  }
  bn_mod(&res, prime);
  memcpy(x, &res, sizeof(bignum256));
  memzero(&res, sizeof(res));
  memzero(&p, sizeof(p));
}

#if !USE_INVERSE_FAST

// in field G_prime, small but slow
void bn_inverse(bignum256 *x, const bignum256 *prime) {
  // this method compute x^-1 = x^(prime-2)
  uint32_t i, j, limb;
  bignum256 res;
  bn_one(&res);
  for (i = 0; i < 9; i++) {
    // invariants:
    //    x   = old(x)^(2^(i*30))
    //    res = old(x)^((prime-2) % 2^(i*30))
    // get the i-th limb of prime - 2
    limb = prime->val[i];
    // this is not enough in general but fine for secp256k1 & nist256p1 because
    // prime->val[0] > 1
    if (i == 0) limb -= 2;
    for (j = 0; j < 30; j++) {
      // invariants:
      //    x    = old(x)^(2^(i*30+j))
      //    res  = old(x)^((prime-2) % 2^(i*30+j))
      //    limb = ((prime-2) % 2^(i*30+30)) / 2^(i*30+j)
      // early abort when only zero bits follow
      if (i == 8 && limb == 0) break;
      if (limb & 1) {
        bn_multiply(x, &res, prime);
      }
      limb >>= 1;
      bn_multiply(x, x, prime);
    }
  }
  bn_mod(&res, prime);
  memcpy(x, &res, sizeof(bignum256));
}

#else

// in field G_prime, big and complicated but fast
// the input must not be 0 mod prime.
// the result is smaller than prime
void bn_inverse(bignum256 *x, const bignum256 *prime) {
  int i, j, k, cmp;
  struct combo {
    uint32_t a[9];
    int len1;
  } us, vr, *odd, *even;
  uint32_t pp[8];
  uint32_t temp32;
  uint64_t temp;

  // The algorithm is based on Schroeppel et. al. "Almost Modular Inverse"
  // algorithm.  We keep four values u,v,r,s in the combo registers
  // us and vr.  us stores u in the first len1 limbs (little endian)
  // and s in the last 9-len1 limbs (big endian).  vr stores v and r.
  // This is because both u*s and v*r are guaranteed to fit in 8 limbs, so
  // their components are guaranteed to fit in 9.  During the algorithm,
  // the length of u and v shrinks while r and s grow.
  // u,v,r,s correspond to F,G,B,C in Schroeppel's algorithm.

  // reduce x modulo prime.  This is necessary as it has to fit in 8 limbs.
  bn_fast_mod(x, prime);
  bn_mod(x, prime);
  // convert x and prime to 8x32 bit limb form
  temp32 = prime->val[0];
  for (i = 0; i < 8; i++) {
    temp32 |= prime->val[i + 1] << (30 - 2 * i);
    us.a[i] = pp[i] = temp32;
    temp32 = prime->val[i + 1] >> (2 + 2 * i);
  }
  temp32 = x->val[0];
  for (i = 0; i < 8; i++) {
    temp32 |= x->val[i + 1] << (30 - 2 * i);
    vr.a[i] = temp32;
    temp32 = x->val[i + 1] >> (2 + 2 * i);
  }
  us.len1 = 8;
  vr.len1 = 8;
  // set s = 1 and r = 0
  us.a[8] = 1;
  vr.a[8] = 0;
  // set k = 0.
  k = 0;

  // only one of the numbers u,v can be even at any time.  We
  // let even point to that number and odd to the other.
  // Initially the prime u is guaranteed to be odd.
  odd = &us;
  even = &vr;

  // u = prime, v = x
  // r = 0    , s = 1
  // k = 0
  for (;;) {
    // invariants:
    //   let u = limbs us.a[0..u.len1-1] in little endian,
    //   let s = limbs us.a[u.len..8] in big endian,
    //   let v = limbs vr.a[0..u.len1-1] in little endian,
    //   let r = limbs vr.a[u.len..8] in big endian,
    //   r,s >= 0 ; u,v >= 1
    //   x*-r = u*2^k mod prime
    //   x*s  = v*2^k mod prime
    //   u*s + v*r = prime
    //   floor(log2(u)) + floor(log2(v)) + k <= 510
    //   max(u,v) <= 2^k   (*) see comment at end of loop
    //   gcd(u,v) = 1
    //   {odd,even} = {&us, &vr}
    //   odd->a[0] and odd->a[8] are odd
    //   even->a[0] or even->a[8] is even
    //
    // first u/v are large and r/s small
    // later u/v are small and r/s large
    assert(odd->a[0] & 1);
    assert(odd->a[8] & 1);

    // adjust length of even.
    while (even->a[even->len1 - 1] == 0) {
      even->len1--;
      // if input was 0, return.
      // This simple check prevents crashing with stack underflow
      // or worse undesired behaviour for illegal input.
      if (even->len1 < 0) return;
    }

    // reduce even->a while it is even
    while (even->a[0] == 0) {
      // shift right first part of even by a limb
      // and shift left second part of even by a limb.
      for (i = 0; i < 8; i++) {
        even->a[i] = even->a[i + 1];
      }
      even->a[i] = 0;
      even->len1--;
      k += 32;
    }
    // count up to 32 zero bits of even->a.
    j = 0;
    while ((even->a[0] & (1u << j)) == 0) {
      j++;
    }
    if (j > 0) {
      // shift first part of even right by j bits.
      for (i = 0; i + 1 < even->len1; i++) {
        even->a[i] = (even->a[i] >> j) | (even->a[i + 1] << (32 - j));
      }
      even->a[i] = (even->a[i] >> j);
      if (even->a[i] == 0) {
        even->len1--;
      } else {
        i++;
      }

      // shift second part of even left by j bits.
      for (; i < 8; i++) {
        even->a[i] = (even->a[i] << j) | (even->a[i + 1] >> (32 - j));
      }
      even->a[i] = (even->a[i] << j);
      // add j bits to k.
      k += j;
    }
    // invariant is reestablished.
    // now both a[0] are odd.
    assert(odd->a[0] & 1);
    assert(odd->a[8] & 1);
    assert(even->a[0] & 1);
    assert((even->a[8] & 1) == 0);

    // cmp > 0 if us.a[0..len1-1] > vr.a[0..len1-1],
    // cmp = 0 if equal, < 0 if less.
    cmp = us.len1 - vr.len1;
    if (cmp == 0) {
      i = us.len1 - 1;
      while (i >= 0 && us.a[i] == vr.a[i]) i--;
      // both are equal to 1 and we are done.
      if (i == -1) break;
      cmp = us.a[i] > vr.a[i] ? 1 : -1;
    }
    if (cmp > 0) {
      even = &us;
      odd = &vr;
    } else {
      even = &vr;
      odd = &us;
    }

    // now even > odd.

    //  even->a[0..len1-1] = (even->a[0..len1-1] - odd->a[0..len1-1]);
    temp = 1;
    for (i = 0; i < odd->len1; i++) {
      temp += 0xFFFFFFFFull + even->a[i] - odd->a[i];
      even->a[i] = temp & 0xFFFFFFFF;
      temp >>= 32;
    }
    for (; i < even->len1; i++) {
      temp += 0xFFFFFFFFull + even->a[i];
      even->a[i] = temp & 0xFFFFFFFF;
      temp >>= 32;
    }
    //  odd->a[len1..8] = (odd->b[len1..8] + even->b[len1..8]);
    temp = 0;
    for (i = 8; i >= even->len1; i--) {
      temp += (uint64_t)odd->a[i] + even->a[i];
      odd->a[i] = temp & 0xFFFFFFFF;
      temp >>= 32;
    }
    for (; i >= odd->len1; i--) {
      temp += (uint64_t)odd->a[i];
      odd->a[i] = temp & 0xFFFFFFFF;
      temp >>= 32;
    }
    // note that
    //  if u > v:
    //   u'2^k = (u - v) 2^k = x(-r) - xs = x(-(r+s)) = x(-r') mod prime
    //   u's' + v'r' = (u-v)s + v(r+s) = us + vr
    //  if u < v:
    //   v'2^k = (v - u) 2^k = xs - x(-r) = x(s+r) = xs' mod prime
    //   u's' + v'r' = u(s+r) + (v-u)r = us + vr

    // even->a[0] is difference between two odd numbers, hence even.
    // odd->a[8] is sum of even and odd number, hence odd.
    assert(odd->a[0] & 1);
    assert(odd->a[8] & 1);
    assert((even->a[0] & 1) == 0);

    // The invariants are (almost) reestablished.
    // The invariant max(u,v) <= 2^k can be invalidated at this point,
    // because odd->a[len1..8] was changed.  We only have
    //
    //     odd->a[len1..8] <= 2^{k+1}
    //
    // Since even->a[0] is even, k will be incremented at the beginning
    // of the next loop while odd->a[len1..8] remains unchanged.
    // So after that, odd->a[len1..8] <= 2^k will hold again.
  }
  // In the last iteration we had u = v and gcd(u,v) = 1.
  // Hence, u=1, v=1, s+r = prime, k <= 510, 2^k > max(s,r) >= prime/2
  // This implies 0 <= s < prime and 255 <= k <= 510.
  //
  // The invariants also give us x*s = 2^k mod prime,
  // hence s = 2^k * x^-1 mod prime.
  // We need to compute s/2^k mod prime.

  // First we compute inverse = -prime^-1 mod 2^32, which we need later.
  // We use the Explicit Quadratic Modular inverse algorithm.
  //   http://arxiv.org/pdf/1209.6626.pdf
  // a^-1  = (2-a) * PROD_i (1 + (a - 1)^(2^i)) mod 2^32
  // the product will converge quickly, because (a-1)^(2^i) will be
  // zero mod 2^32 after at most five iterations.
  // We want to compute -prime^-1 so we start with (pp[0]-2).
  assert(pp[0] & 1);
  uint32_t amone = pp[0] - 1;
  uint32_t inverse = pp[0] - 2;
  while (amone) {
    amone *= amone;
    inverse *= (amone + 1);
  }

  while (k >= 32) {
    // compute s / 2^32 modulo prime.
    // Idea: compute factor, such that
    //   s + factor*prime mod 2^32 == 0
    // i.e. factor = s * -1/prime mod 2^32.
    // Then compute s + factor*prime and shift right by 32 bits.
    uint32_t factor = (inverse * us.a[8]) & 0xffffffff;
    temp = us.a[8] + (uint64_t)pp[0] * factor;
    assert((temp & 0xffffffff) == 0);
    temp >>= 32;
    for (i = 0; i < 7; i++) {
      temp += us.a[8 - (i + 1)] + (uint64_t)pp[i + 1] * factor;
      us.a[8 - i] = temp & 0xffffffff;
      temp >>= 32;
    }
    us.a[8 - i] = temp & 0xffffffff;
    k -= 32;
  }
  if (k > 0) {
    // compute s / 2^k  modulo prime.
    // Same idea: compute factor, such that
    //   s + factor*prime mod 2^k == 0
    // i.e. factor = s * -1/prime mod 2^k.
    // Then compute s + factor*prime and shift right by k bits.
    uint32_t mask = (1u << k) - 1;
    uint32_t factor = (inverse * us.a[8]) & mask;
    temp = (us.a[8] + (uint64_t)pp[0] * factor) >> k;
    assert(((us.a[8] + pp[0] * factor) & mask) == 0);
    for (i = 0; i < 7; i++) {
      temp += (us.a[8 - (i + 1)] + (uint64_t)pp[i + 1] * factor) << (32 - k);
      us.a[8 - i] = temp & 0xffffffff;
      temp >>= 32;
    }
    us.a[8 - i] = temp & 0xffffffff;
  }

  // convert s to bignum style
  temp32 = 0;
  for (i = 0; i < 8; i++) {
    x->val[i] = ((us.a[8 - i] << (2 * i)) & 0x3FFFFFFFu) | temp32;
    temp32 = us.a[8 - i] >> (30 - 2 * i);
  }
  x->val[i] = temp32;

  // let's wipe all temp buffers
  memzero(pp, sizeof(pp));
  memzero(&us, sizeof(us));
  memzero(&vr, sizeof(vr));
}
#endif

void bn_normalize(bignum256 *a) { bn_addi(a, 0); }


void bn_addmod(bignum256 *a, const bignum256 *b, const bignum256 *prime) {
  int i;
  for (i = 0; i < 9; i++) {
    a->val[i] += b->val[i];
  }
  bn_fast_mod(a, prime);
}



// res = a - b mod prime.  More exactly res = a + (2*prime - b).
// b must be a partly reduced number
// result is normalized but not reduced.
void bn_subtractmod(const bignum256 *a, const bignum256 *b, bignum256 *res,
                    const bignum256 *prime) {
  int i;
  uint32_t temp = 1;
  for (i = 0; i < 9; i++) {
    temp += 0x3FFFFFFF + a->val[i] + 2u * prime->val[i] - b->val[i];
    res->val[i] = temp & 0x3FFFFFFF;
    temp >>= 30;
  }
}


// a / 58 = a (+r)
void bn_divmod58(bignum256 *a, uint32_t *r) {
  int i;
  uint32_t rem, tmp;
  rem = a->val[8] % 58;
  a->val[8] /= 58;
  for (i = 7; i >= 0; i--) {
    // invariants:
    //   rem = old(a) >> 30(i+1) % 58
    //   a[i+1..8] = old(a[i+1..8])/58
    //   a[0..i]   = old(a[0..i])
    // 2^30 == 18512790*58 + 4
    tmp = rem * 4 + a->val[i];
    // set a[i] = (rem * 2^30 + a[i])/58
    //          = rem * 18512790 + (rem * 4 + a[i])/58
    a->val[i] = rem * 18512790 + (tmp / 58);
    // set rem = (rem * 2^30 + a[i]) mod 58
    //         = (rem * 4 + a[i]) mod 58
    rem = tmp % 58;
  }
  *r = rem;
}



/*
 * ASSERT NOTE:
 * Some sanity checking code is included using assert().  On my FreeBSD
 * system, this additional code can be removed by compiling with NDEBUG
 * defined.  Check your own systems manpage on assert() to see how to
 * compile WITHOUT the sanity checking code on your system.
 *
 * UNROLLED TRANSFORM LOOP NOTE:
 * You can define SHA2_UNROLL_TRANSFORM to use the unrolled transform
 * loop version for the hash transform rounds (defined using macros
 * later in this file).  Either define on the command line, for example:
 *
 *   cc -DSHA2_UNROLL_TRANSFORM -o sha2 sha2.c sha2prog.c
 *
 * or define below:
 *
 *   #define SHA2_UNROLL_TRANSFORM
 *
 */


/*** SHA-256/384/512 Machine Architecture Definitions *****************/
/*
 * BYTE_ORDER NOTE:
 *
 * Please make sure that your system defines BYTE_ORDER.  If your
 * architecture is little-endian, make sure it also defines
 * LITTLE_ENDIAN and that the two (BYTE_ORDER and LITTLE_ENDIAN) are
 * equivilent.
 *
 * If your system does not define the above, then you can do so by
 * hand like this:
 *
 *   #define LITTLE_ENDIAN 1234
 *   #define BIG_ENDIAN    4321
 *
 * And for little-endian machines, add:
 *
 *   #define BYTE_ORDER LITTLE_ENDIAN
 *
 * Or for big-endian machines:
 *
 *   #define BYTE_ORDER BIG_ENDIAN
 *
 * The FreeBSD machine this was written on defines BYTE_ORDER
 * appropriately by including <sys/types.h> (which in turn includes
 * <machine/endian.h> where the appropriate definitions are actually
 * made).
 */

#if !defined(BYTE_ORDER) || (BYTE_ORDER != LITTLE_ENDIAN && BYTE_ORDER != BIG_ENDIAN)
#error Define BYTE_ORDER to be equal to either LITTLE_ENDIAN or BIG_ENDIAN
#endif

typedef uint8_t  sha2_byte;	/* Exactly 1 byte */
typedef uint32_t sha2_word32;	/* Exactly 4 bytes */
typedef uint64_t sha2_word64;	/* Exactly 8 bytes */

/*** SHA-256/384/512 Various Length Definitions ***********************/
/* NOTE: Most of these are in sha2.h */
#define   SHA1_SHORT_BLOCK_LENGTH	(SHA1_BLOCK_LENGTH - 8)
#define SHA256_SHORT_BLOCK_LENGTH	(SHA256_BLOCK_LENGTH - 8)
#define SHA512_SHORT_BLOCK_LENGTH	(SHA512_BLOCK_LENGTH - 16)

/*
 * Macro for incrementally adding the unsigned 64-bit integer n to the
 * unsigned 128-bit integer (represented using a two-element array of
 * 64-bit words):
 */
#define ADDINC128(w,n)	{ \
	(w)[0] += (sha2_word64)(n); \
	if ((w)[0] < (n)) { \
		(w)[1]++; \
	} \
}

#define MEMCPY_BCOPY(d,s,l)	memcpy((d), (s), (l))

/*** THE SIX LOGICAL FUNCTIONS ****************************************/
/*
 * Bit shifting and rotation (used by the six SHA-XYZ logical functions:
 *
 *   NOTE:  In the original SHA-256/384/512 document, the shift-right
 *   function was named R and the rotate-right function was called S.
 *   (See: http://csrc.nist.gov/cryptval/shs/sha256-384-512.pdf on the
 *   web.)
 *
 *   The newer NIST FIPS 180-2 document uses a much clearer naming
 *   scheme, SHR for shift-right, ROTR for rotate-right, and ROTL for
 *   rotate-left.  (See:
 *   http://csrc.nist.gov/publications/fips/fips180-2/fips180-2.pdf
 *   on the web.)
 *
 *   WARNING: These macros must be used cautiously, since they reference
 *   supplied parameters sometimes more than once, and thus could have
 *   unexpected side-effects if used without taking this into account.
 */

/* Shift-right (used in SHA-256, SHA-384, and SHA-512): */
#define SHR(b,x) 		((x) >> (b))
/* 32-bit Rotate-right (used in SHA-256): */
#define ROTR32(b,x)	(((x) >> (b)) | ((x) << (32 - (b))))
/* 64-bit Rotate-right (used in SHA-384 and SHA-512): */
#define ROTR64(b,x)	(((x) >> (b)) | ((x) << (64 - (b))))
/* 32-bit Rotate-left (used in SHA-1): */
#define ROTL32(b,x)	(((x) << (b)) | ((x) >> (32 - (b))))

/* Two of six logical functions used in SHA-1, SHA-256, SHA-384, and SHA-512: */
#define Ch(x,y,z)	(((x) & (y)) ^ ((~(x)) & (z)))
#define Maj(x,y,z)	(((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))

/* Function used in SHA-1: */
#define Parity(x,y,z)	((x) ^ (y) ^ (z))

/* Four of six logical functions used in SHA-256: */
#define Sigma0_256(x)	(ROTR32(2,  (x)) ^ ROTR32(13, (x)) ^ ROTR32(22, (x)))
#define Sigma1_256(x)	(ROTR32(6,  (x)) ^ ROTR32(11, (x)) ^ ROTR32(25, (x)))
#define sigma0_256(x)	(ROTR32(7,  (x)) ^ ROTR32(18, (x)) ^ SHR(3 ,   (x)))
#define sigma1_256(x)	(ROTR32(17, (x)) ^ ROTR32(19, (x)) ^ SHR(10,   (x)))

/* Four of six logical functions used in SHA-384 and SHA-512: */
#define Sigma0_512(x)	(ROTR64(28, (x)) ^ ROTR64(34, (x)) ^ ROTR64(39, (x)))
#define Sigma1_512(x)	(ROTR64(14, (x)) ^ ROTR64(18, (x)) ^ ROTR64(41, (x)))
#define sigma0_512(x)	(ROTR64( 1, (x)) ^ ROTR64( 8, (x)) ^ SHR( 7,   (x)))
#define sigma1_512(x)	(ROTR64(19, (x)) ^ ROTR64(61, (x)) ^ SHR( 6,   (x)))

/*** INTERNAL FUNCTION PROTOTYPES *************************************/
/* NOTE: These should not be accessed directly from outside this
 * library -- they are intended for private internal visibility/use
 * only.
 */
static void sha512_Last(SHA512_CTX*);


/*** SHA-XYZ INITIAL HASH VALUES AND CONSTANTS ************************/

/* Hash constant words K for SHA-1: */
#define K1_0_TO_19	0x5a827999UL
#define K1_20_TO_39	0x6ed9eba1UL
#define K1_40_TO_59	0x8f1bbcdcUL
#define K1_60_TO_79	0xca62c1d6UL

/* Initial hash value H for SHA-1: */
const sha2_word32 sha1_initial_hash_value[SHA1_DIGEST_LENGTH / sizeof(sha2_word32)] = {
	0x67452301UL,
	0xefcdab89UL,
	0x98badcfeUL,
	0x10325476UL,
	0xc3d2e1f0UL
};

/* Hash constant words K for SHA-256: */
static const sha2_word32 K256[64] = {
	0x428a2f98UL, 0x71374491UL, 0xb5c0fbcfUL, 0xe9b5dba5UL,
	0x3956c25bUL, 0x59f111f1UL, 0x923f82a4UL, 0xab1c5ed5UL,
	0xd807aa98UL, 0x12835b01UL, 0x243185beUL, 0x550c7dc3UL,
	0x72be5d74UL, 0x80deb1feUL, 0x9bdc06a7UL, 0xc19bf174UL,
	0xe49b69c1UL, 0xefbe4786UL, 0x0fc19dc6UL, 0x240ca1ccUL,
	0x2de92c6fUL, 0x4a7484aaUL, 0x5cb0a9dcUL, 0x76f988daUL,
	0x983e5152UL, 0xa831c66dUL, 0xb00327c8UL, 0xbf597fc7UL,
	0xc6e00bf3UL, 0xd5a79147UL, 0x06ca6351UL, 0x14292967UL,
	0x27b70a85UL, 0x2e1b2138UL, 0x4d2c6dfcUL, 0x53380d13UL,
	0x650a7354UL, 0x766a0abbUL, 0x81c2c92eUL, 0x92722c85UL,
	0xa2bfe8a1UL, 0xa81a664bUL, 0xc24b8b70UL, 0xc76c51a3UL,
	0xd192e819UL, 0xd6990624UL, 0xf40e3585UL, 0x106aa070UL,
	0x19a4c116UL, 0x1e376c08UL, 0x2748774cUL, 0x34b0bcb5UL,
	0x391c0cb3UL, 0x4ed8aa4aUL, 0x5b9cca4fUL, 0x682e6ff3UL,
	0x748f82eeUL, 0x78a5636fUL, 0x84c87814UL, 0x8cc70208UL,
	0x90befffaUL, 0xa4506cebUL, 0xbef9a3f7UL, 0xc67178f2UL
};

/* Initial hash value H for SHA-256: */
const sha2_word32 sha256_initial_hash_value[8] = {
	0x6a09e667UL,
	0xbb67ae85UL,
	0x3c6ef372UL,
	0xa54ff53aUL,
	0x510e527fUL,
	0x9b05688cUL,
	0x1f83d9abUL,
	0x5be0cd19UL
};

/* Hash constant words K for SHA-384 and SHA-512: */
static const sha2_word64 K512[80] = {
	0x428a2f98d728ae22ULL, 0x7137449123ef65cdULL,
	0xb5c0fbcfec4d3b2fULL, 0xe9b5dba58189dbbcULL,
	0x3956c25bf348b538ULL, 0x59f111f1b605d019ULL,
	0x923f82a4af194f9bULL, 0xab1c5ed5da6d8118ULL,
	0xd807aa98a3030242ULL, 0x12835b0145706fbeULL,
	0x243185be4ee4b28cULL, 0x550c7dc3d5ffb4e2ULL,
	0x72be5d74f27b896fULL, 0x80deb1fe3b1696b1ULL,
	0x9bdc06a725c71235ULL, 0xc19bf174cf692694ULL,
	0xe49b69c19ef14ad2ULL, 0xefbe4786384f25e3ULL,
	0x0fc19dc68b8cd5b5ULL, 0x240ca1cc77ac9c65ULL,
	0x2de92c6f592b0275ULL, 0x4a7484aa6ea6e483ULL,
	0x5cb0a9dcbd41fbd4ULL, 0x76f988da831153b5ULL,
	0x983e5152ee66dfabULL, 0xa831c66d2db43210ULL,
	0xb00327c898fb213fULL, 0xbf597fc7beef0ee4ULL,
	0xc6e00bf33da88fc2ULL, 0xd5a79147930aa725ULL,
	0x06ca6351e003826fULL, 0x142929670a0e6e70ULL,
	0x27b70a8546d22ffcULL, 0x2e1b21385c26c926ULL,
	0x4d2c6dfc5ac42aedULL, 0x53380d139d95b3dfULL,
	0x650a73548baf63deULL, 0x766a0abb3c77b2a8ULL,
	0x81c2c92e47edaee6ULL, 0x92722c851482353bULL,
	0xa2bfe8a14cf10364ULL, 0xa81a664bbc423001ULL,
	0xc24b8b70d0f89791ULL, 0xc76c51a30654be30ULL,
	0xd192e819d6ef5218ULL, 0xd69906245565a910ULL,
	0xf40e35855771202aULL, 0x106aa07032bbd1b8ULL,
	0x19a4c116b8d2d0c8ULL, 0x1e376c085141ab53ULL,
	0x2748774cdf8eeb99ULL, 0x34b0bcb5e19b48a8ULL,
	0x391c0cb3c5c95a63ULL, 0x4ed8aa4ae3418acbULL,
	0x5b9cca4f7763e373ULL, 0x682e6ff3d6b2b8a3ULL,
	0x748f82ee5defb2fcULL, 0x78a5636f43172f60ULL,
	0x84c87814a1f0ab72ULL, 0x8cc702081a6439ecULL,
	0x90befffa23631e28ULL, 0xa4506cebde82bde9ULL,
	0xbef9a3f7b2c67915ULL, 0xc67178f2e372532bULL,
	0xca273eceea26619cULL, 0xd186b8c721c0c207ULL,
	0xeada7dd6cde0eb1eULL, 0xf57d4f7fee6ed178ULL,
	0x06f067aa72176fbaULL, 0x0a637dc5a2c898a6ULL,
	0x113f9804bef90daeULL, 0x1b710b35131c471bULL,
	0x28db77f523047d84ULL, 0x32caab7b40c72493ULL,
	0x3c9ebe0a15c9bebcULL, 0x431d67c49c100d4cULL,
	0x4cc5d4becb3e42b6ULL, 0x597f299cfc657e2aULL,
	0x5fcb6fab3ad6faecULL, 0x6c44198c4a475817ULL
};

/* Initial hash value H for SHA-512 */
const sha2_word64 sha512_initial_hash_value[8] = {
	0x6a09e667f3bcc908ULL,
	0xbb67ae8584caa73bULL,
	0x3c6ef372fe94f82bULL,
	0xa54ff53a5f1d36f1ULL,
	0x510e527fade682d1ULL,
	0x9b05688c2b3e6c1fULL,
	0x1f83d9abfb41bd6bULL,
	0x5be0cd19137e2179ULL
};

/*
 * Constant used by SHA256/384/512_End() functions for converting the
 * digest to a readable hexadecimal character string:
 */
static const char *sha2_hex_digits = "0123456789abcdef";


/*** SHA-1: ***********************************************************/
void sha1_Init(SHA1_CTX* context) {
	MEMCPY_BCOPY(context->state, sha1_initial_hash_value, SHA1_DIGEST_LENGTH);
	memzero(context->buffer, SHA1_BLOCK_LENGTH);
	context->bitcount = 0;
}

#ifdef SHA2_UNROLL_TRANSFORM

/* Unrolled SHA-1 round macros: */

#define ROUND1_0_TO_15(a,b,c,d,e)				\
	(e) = ROTL32(5, (a)) + Ch((b), (c), (d)) + (e) +	\
	     K1_0_TO_19 + ( W1[j] = *data++ );		\
	(b) = ROTL32(30, (b));	\
	j++;

#define ROUND1_16_TO_19(a,b,c,d,e)	\
	T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];	\
	(e) = ROTL32(5, a) + Ch(b,c,d) + e + K1_0_TO_19 + ( W1[j&0x0f] = ROTL32(1, T1) );	\
	(b) = ROTL32(30, b);	\
	j++;

#define ROUND1_20_TO_39(a,b,c,d,e)	\
	T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];	\
	(e) = ROTL32(5, a) + Parity(b,c,d) + e + K1_20_TO_39 + ( W1[j&0x0f] = ROTL32(1, T1) );	\
	(b) = ROTL32(30, b);	\
	j++;

#define ROUND1_40_TO_59(a,b,c,d,e)	\
	T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];	\
	(e) = ROTL32(5, a) + Maj(b,c,d) + e + K1_40_TO_59 + ( W1[j&0x0f] = ROTL32(1, T1) );	\
	(b) = ROTL32(30, b);	\
	j++;

#define ROUND1_60_TO_79(a,b,c,d,e)	\
	T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];	\
	(e) = ROTL32(5, a) + Parity(b,c,d) + e + K1_60_TO_79 + ( W1[j&0x0f] = ROTL32(1, T1) );	\
	(b) = ROTL32(30, b);	\
	j++;

void sha1_Transform(const sha2_word32* state_in, const sha2_word32* data, sha2_word32* state_out) {
	sha2_word32	a = 0, b = 0, c = 0, d = 0, e = 0;
	sha2_word32	T1 = 0;
	sha2_word32	W1[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];

	j = 0;

	/* Rounds 0 to 15 unrolled: */
	ROUND1_0_TO_15(a,b,c,d,e);
	ROUND1_0_TO_15(e,a,b,c,d);
	ROUND1_0_TO_15(d,e,a,b,c);
	ROUND1_0_TO_15(c,d,e,a,b);
	ROUND1_0_TO_15(b,c,d,e,a);
	ROUND1_0_TO_15(a,b,c,d,e);
	ROUND1_0_TO_15(e,a,b,c,d);
	ROUND1_0_TO_15(d,e,a,b,c);
	ROUND1_0_TO_15(c,d,e,a,b);
	ROUND1_0_TO_15(b,c,d,e,a);
	ROUND1_0_TO_15(a,b,c,d,e);
	ROUND1_0_TO_15(e,a,b,c,d);
	ROUND1_0_TO_15(d,e,a,b,c);
	ROUND1_0_TO_15(c,d,e,a,b);
	ROUND1_0_TO_15(b,c,d,e,a);
	ROUND1_0_TO_15(a,b,c,d,e);

	/* Rounds 16 to 19 unrolled: */
	ROUND1_16_TO_19(e,a,b,c,d);
	ROUND1_16_TO_19(d,e,a,b,c);
	ROUND1_16_TO_19(c,d,e,a,b);
	ROUND1_16_TO_19(b,c,d,e,a);

	/* Rounds 20 to 39 unrolled: */
	ROUND1_20_TO_39(a,b,c,d,e);
	ROUND1_20_TO_39(e,a,b,c,d);
	ROUND1_20_TO_39(d,e,a,b,c);
	ROUND1_20_TO_39(c,d,e,a,b);
	ROUND1_20_TO_39(b,c,d,e,a);
	ROUND1_20_TO_39(a,b,c,d,e);
	ROUND1_20_TO_39(e,a,b,c,d);
	ROUND1_20_TO_39(d,e,a,b,c);
	ROUND1_20_TO_39(c,d,e,a,b);
	ROUND1_20_TO_39(b,c,d,e,a);
	ROUND1_20_TO_39(a,b,c,d,e);
	ROUND1_20_TO_39(e,a,b,c,d);
	ROUND1_20_TO_39(d,e,a,b,c);
	ROUND1_20_TO_39(c,d,e,a,b);
	ROUND1_20_TO_39(b,c,d,e,a);
	ROUND1_20_TO_39(a,b,c,d,e);
	ROUND1_20_TO_39(e,a,b,c,d);
	ROUND1_20_TO_39(d,e,a,b,c);
	ROUND1_20_TO_39(c,d,e,a,b);
	ROUND1_20_TO_39(b,c,d,e,a);

	/* Rounds 40 to 59 unrolled: */
	ROUND1_40_TO_59(a,b,c,d,e);
	ROUND1_40_TO_59(e,a,b,c,d);
	ROUND1_40_TO_59(d,e,a,b,c);
	ROUND1_40_TO_59(c,d,e,a,b);
	ROUND1_40_TO_59(b,c,d,e,a);
	ROUND1_40_TO_59(a,b,c,d,e);
	ROUND1_40_TO_59(e,a,b,c,d);
	ROUND1_40_TO_59(d,e,a,b,c);
	ROUND1_40_TO_59(c,d,e,a,b);
	ROUND1_40_TO_59(b,c,d,e,a);
	ROUND1_40_TO_59(a,b,c,d,e);
	ROUND1_40_TO_59(e,a,b,c,d);
	ROUND1_40_TO_59(d,e,a,b,c);
	ROUND1_40_TO_59(c,d,e,a,b);
	ROUND1_40_TO_59(b,c,d,e,a);
	ROUND1_40_TO_59(a,b,c,d,e);
	ROUND1_40_TO_59(e,a,b,c,d);
	ROUND1_40_TO_59(d,e,a,b,c);
	ROUND1_40_TO_59(c,d,e,a,b);
	ROUND1_40_TO_59(b,c,d,e,a);

	/* Rounds 60 to 79 unrolled: */
	ROUND1_60_TO_79(a,b,c,d,e);
	ROUND1_60_TO_79(e,a,b,c,d);
	ROUND1_60_TO_79(d,e,a,b,c);
	ROUND1_60_TO_79(c,d,e,a,b);
	ROUND1_60_TO_79(b,c,d,e,a);
	ROUND1_60_TO_79(a,b,c,d,e);
	ROUND1_60_TO_79(e,a,b,c,d);
	ROUND1_60_TO_79(d,e,a,b,c);
	ROUND1_60_TO_79(c,d,e,a,b);
	ROUND1_60_TO_79(b,c,d,e,a);
	ROUND1_60_TO_79(a,b,c,d,e);
	ROUND1_60_TO_79(e,a,b,c,d);
	ROUND1_60_TO_79(d,e,a,b,c);
	ROUND1_60_TO_79(c,d,e,a,b);
	ROUND1_60_TO_79(b,c,d,e,a);
	ROUND1_60_TO_79(a,b,c,d,e);
	ROUND1_60_TO_79(e,a,b,c,d);
	ROUND1_60_TO_79(d,e,a,b,c);
	ROUND1_60_TO_79(c,d,e,a,b);
	ROUND1_60_TO_79(b,c,d,e,a);

	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;

	/* Clean up */
	a = b = c = d = e = T1 = 0;
}

#else  /* SHA2_UNROLL_TRANSFORM */

void sha1_Transform(const sha2_word32* state_in, const sha2_word32* data, sha2_word32* state_out) {
	sha2_word32	a = 0, b = 0, c = 0, d = 0, e = 0;
	sha2_word32	T1 = 0;
	sha2_word32	W1[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];
	j = 0;
	do {
		T1 = ROTL32(5, a) + Ch(b, c, d) + e + K1_0_TO_19 + (W1[j] = *data++);
		e = d;
		d = c;
		c = ROTL32(30, b);
		b = a;
		a = T1;
		j++;
	} while (j < 16);

	do {
		T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];
		T1 = ROTL32(5, a) + Ch(b,c,d) + e + K1_0_TO_19 + (W1[j&0x0f] = ROTL32(1, T1));
		e = d;
		d = c;
		c = ROTL32(30, b);
		b = a;
		a = T1;
		j++;
	} while (j < 20);

	do {
		T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];
		T1 = ROTL32(5, a) + Parity(b,c,d) + e + K1_20_TO_39 + (W1[j&0x0f] = ROTL32(1, T1));
		e = d;
		d = c;
		c = ROTL32(30, b);
		b = a;
		a = T1;
		j++;
	} while (j < 40);

	do {
		T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];
		T1 = ROTL32(5, a) + Maj(b,c,d) + e + K1_40_TO_59 + (W1[j&0x0f] = ROTL32(1, T1));
		e = d;
		d = c;
		c = ROTL32(30, b);
		b = a;
		a = T1;
		j++;
	} while (j < 60);

	do {
		T1 = W1[(j+13)&0x0f] ^ W1[(j+8)&0x0f] ^ W1[(j+2)&0x0f] ^ W1[j&0x0f];
		T1 = ROTL32(5, a) + Parity(b,c,d) + e + K1_60_TO_79 + (W1[j&0x0f] = ROTL32(1, T1));
		e = d;
		d = c;
		c = ROTL32(30, b);
		b = a;
		a = T1;
		j++;
	} while (j < 80);


	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;

	/* Clean up */
	a = b = c = d = e = T1 = 0;
}

#endif /* SHA2_UNROLL_TRANSFORM */

void sha1_Update(SHA1_CTX* context, const sha2_byte *data, size_t len) {
	unsigned int	freespace = 0, usedspace = 0;

	if (len == 0) {
		/* Calling with no data is valid - we do nothing */
		return;
	}

	usedspace = (context->bitcount >> 3) % SHA1_BLOCK_LENGTH;
	if (usedspace > 0) {
		/* Calculate how much free space is available in the buffer */
		freespace = SHA1_BLOCK_LENGTH - usedspace;

		if (len >= freespace) {
			/* Fill the buffer completely and process it */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, freespace);
			context->bitcount += freespace << 3;
			len -= freespace;
			data += freespace;
#if BYTE_ORDER == LITTLE_ENDIAN
			/* Convert TO host byte order */
			for (int j = 0; j < 16; j++) {
				REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
			}
#endif
			sha1_Transform(context->state, context->buffer, context->state);
		} else {
			/* The buffer is not yet full */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, len);
			context->bitcount += len << 3;
			/* Clean up: */
			usedspace = freespace = 0;
			return;
		}
	}
	while (len >= SHA1_BLOCK_LENGTH) {
		/* Process as many complete blocks as we can */
		MEMCPY_BCOPY(context->buffer, data, SHA1_BLOCK_LENGTH);
#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 16; j++) {
			REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
		}
#endif
		sha1_Transform(context->state, context->buffer, context->state);
		context->bitcount += SHA1_BLOCK_LENGTH << 3;
		len -= SHA1_BLOCK_LENGTH;
		data += SHA1_BLOCK_LENGTH;
	}
	if (len > 0) {
		/* There's left-overs, so save 'em */
		MEMCPY_BCOPY(context->buffer, data, len);
		context->bitcount += len << 3;
	}
	/* Clean up: */
	usedspace = freespace = 0;
}

void sha1_Final(SHA1_CTX* context, sha2_byte digest[]) {
	unsigned int	usedspace = 0;

	/* If no digest buffer is passed, we don't bother doing this: */
	if (digest != (sha2_byte*)0) {
		usedspace = (context->bitcount >> 3) % SHA1_BLOCK_LENGTH;
		/* Begin padding with a 1 bit: */
		((uint8_t*)context->buffer)[usedspace++] = 0x80;

		if (usedspace > SHA1_SHORT_BLOCK_LENGTH) {
			memzero(((uint8_t*)context->buffer) + usedspace, SHA1_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
			/* Convert TO host byte order */
			for (int j = 0; j < 16; j++) {
				REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
			}
#endif
			/* Do second-to-last transform: */
			sha1_Transform(context->state, context->buffer, context->state);

			/* And prepare the last transform: */
			usedspace = 0;
		}
		/* Set-up for the last transform: */
		memzero(((uint8_t*)context->buffer) + usedspace, SHA1_SHORT_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 14; j++) {
			REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
		}
#endif
		/* Set the bit count: */
		context->buffer[14] = context->bitcount >> 32;
		context->buffer[15] = context->bitcount & 0xffffffff;

		/* Final transform: */
		sha1_Transform(context->state, context->buffer, context->state);

#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert FROM host byte order */
		for (int j = 0; j < 5; j++) {
			REVERSE32((uint32_t) context->state[j], context->state[j]);
		}
#endif
		MEMCPY_BCOPY(digest, context->state, SHA1_DIGEST_LENGTH);
	}

	/* Clean up state data: */
	memzero(context, sizeof(SHA1_CTX));
	usedspace = 0;
}

char *sha1_End(SHA1_CTX* context, char buffer[]) {
	sha2_byte	digest[SHA1_DIGEST_LENGTH] = {0}, *d = digest;
	int		i = 0;

	if (buffer != (char*)0) {
		sha1_Final(context, digest);

		for (i = 0; i < SHA1_DIGEST_LENGTH; i++) {
			*buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
			*buffer++ = sha2_hex_digits[*d & 0x0f];
			d++;
		}
		*buffer = (char)0;
	} else {
		memzero(context, sizeof(SHA1_CTX));
	}
	memzero(digest, SHA1_DIGEST_LENGTH);
	return buffer;
}

void sha1_Raw(const sha2_byte* data, size_t len, uint8_t digest[SHA1_DIGEST_LENGTH]) {
	SHA1_CTX	context = {};
	sha1_Init(&context);
	sha1_Update(&context, data, len);
	sha1_Final(&context, digest);
}

char* sha1_Data(const sha2_byte* data, size_t len, char digest[SHA1_DIGEST_STRING_LENGTH]) {
	SHA1_CTX	context = {};

	sha1_Init(&context);
	sha1_Update(&context, data, len);
	return sha1_End(&context, digest);
}

/*** SHA-256: *********************************************************/
void sha256_Init(SHA256_CTX* context) {
	if (context == (SHA256_CTX*)0) {
		return;
	}
	MEMCPY_BCOPY(context->state, sha256_initial_hash_value, SHA256_DIGEST_LENGTH);
	memzero(context->buffer, SHA256_BLOCK_LENGTH);
	context->bitcount = 0;
}

#ifdef SHA2_UNROLL_TRANSFORM

/* Unrolled SHA-256 round macros: */

#define ROUND256_0_TO_15(a,b,c,d,e,f,g,h)	\
	T1 = (h) + Sigma1_256(e) + Ch((e), (f), (g)) + \
	     K256[j] + (W256[j] = *data++); \
	(d) += T1; \
	(h) = T1 + Sigma0_256(a) + Maj((a), (b), (c)); \
	j++

#define ROUND256(a,b,c,d,e,f,g,h)	\
	s0 = W256[(j+1)&0x0f]; \
	s0 = sigma0_256(s0); \
	s1 = W256[(j+14)&0x0f]; \
	s1 = sigma1_256(s1); \
	T1 = (h) + Sigma1_256(e) + Ch((e), (f), (g)) + K256[j] + \
	     (W256[j&0x0f] += s1 + W256[(j+9)&0x0f] + s0); \
	(d) += T1; \
	(h) = T1 + Sigma0_256(a) + Maj((a), (b), (c)); \
	j++

void sha256_Transform(const sha2_word32* state_in, const sha2_word32* data, sha2_word32* state_out) {
	sha2_word32	a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, s0 = 0, s1 = 0;
	sha2_word32	T1 = 0;
	sha2_word32 W256[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];
	f = state_in[5];
	g = state_in[6];
	h = state_in[7];

	j = 0;
	do {
		/* Rounds 0 to 15 (unrolled): */
		ROUND256_0_TO_15(a,b,c,d,e,f,g,h);
		ROUND256_0_TO_15(h,a,b,c,d,e,f,g);
		ROUND256_0_TO_15(g,h,a,b,c,d,e,f);
		ROUND256_0_TO_15(f,g,h,a,b,c,d,e);
		ROUND256_0_TO_15(e,f,g,h,a,b,c,d);
		ROUND256_0_TO_15(d,e,f,g,h,a,b,c);
		ROUND256_0_TO_15(c,d,e,f,g,h,a,b);
		ROUND256_0_TO_15(b,c,d,e,f,g,h,a);
	} while (j < 16);

	/* Now for the remaining rounds to 64: */
	do {
		ROUND256(a,b,c,d,e,f,g,h);
		ROUND256(h,a,b,c,d,e,f,g);
		ROUND256(g,h,a,b,c,d,e,f);
		ROUND256(f,g,h,a,b,c,d,e);
		ROUND256(e,f,g,h,a,b,c,d);
		ROUND256(d,e,f,g,h,a,b,c);
		ROUND256(c,d,e,f,g,h,a,b);
		ROUND256(b,c,d,e,f,g,h,a);
	} while (j < 64);

	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;
	state_out[5] = state_in[5] + f;
	state_out[6] = state_in[6] + g;
	state_out[7] = state_in[7] + h;

	/* Clean up */
	a = b = c = d = e = f = g = h = T1 = 0;
}

#else /* SHA2_UNROLL_TRANSFORM */

void sha256_Transform(const sha2_word32* state_in, const sha2_word32* data, sha2_word32* state_out) {
	sha2_word32	a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, s0 = 0, s1 = 0;
	sha2_word32	T1 = 0, T2 = 0 , W256[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];
	f = state_in[5];
	g = state_in[6];
	h = state_in[7];

	j = 0;
	do {
		/* Apply the SHA-256 compression function to update a..h with copy */
		T1 = h + Sigma1_256(e) + Ch(e, f, g) + K256[j] + (W256[j] = *data++);
		T2 = Sigma0_256(a) + Maj(a, b, c);
		h = g;
		g = f;
		f = e;
		e = d + T1;
		d = c;
		c = b;
		b = a;
		a = T1 + T2;

		j++;
	} while (j < 16);

	do {
		/* Part of the message block expansion: */
		s0 = W256[(j+1)&0x0f];
		s0 = sigma0_256(s0);
		s1 = W256[(j+14)&0x0f];
		s1 = sigma1_256(s1);

		/* Apply the SHA-256 compression function to update a..h */
		T1 = h + Sigma1_256(e) + Ch(e, f, g) + K256[j] +
		     (W256[j&0x0f] += s1 + W256[(j+9)&0x0f] + s0);
		T2 = Sigma0_256(a) + Maj(a, b, c);
		h = g;
		g = f;
		f = e;
		e = d + T1;
		d = c;
		c = b;
		b = a;
		a = T1 + T2;

		j++;
	} while (j < 64);

	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;
	state_out[5] = state_in[5] + f;
	state_out[6] = state_in[6] + g;
	state_out[7] = state_in[7] + h;

	/* Clean up */
	a = b = c = d = e = f = g = h = T1 = T2 = 0;
}

#endif /* SHA2_UNROLL_TRANSFORM */

void sha256_Update(SHA256_CTX* context, const sha2_byte *data, size_t len) {
	unsigned int	freespace = 0, usedspace = 0;

	if (len == 0) {
		/* Calling with no data is valid - we do nothing */
		return;
	}

	usedspace = (context->bitcount >> 3) % SHA256_BLOCK_LENGTH;
	if (usedspace > 0) {
		/* Calculate how much free space is available in the buffer */
		freespace = SHA256_BLOCK_LENGTH - usedspace;

		if (len >= freespace) {
			/* Fill the buffer completely and process it */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, freespace);
			context->bitcount += freespace << 3;
			len -= freespace;
			data += freespace;
#if BYTE_ORDER == LITTLE_ENDIAN
			/* Convert TO host byte order */
			for (int j = 0; j < 16; j++) {
				REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
			}
#endif
			sha256_Transform(context->state, context->buffer, context->state);
		} else {
			/* The buffer is not yet full */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, len);
			context->bitcount += len << 3;
			/* Clean up: */
			usedspace = freespace = 0;
			return;
		}
	}
	while (len >= SHA256_BLOCK_LENGTH) {
		/* Process as many complete blocks as we can */
		MEMCPY_BCOPY(context->buffer, data, SHA256_BLOCK_LENGTH);
#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 16; j++) {
			REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
		}
#endif
		sha256_Transform(context->state, context->buffer, context->state);
		context->bitcount += SHA256_BLOCK_LENGTH << 3;
		len -= SHA256_BLOCK_LENGTH;
		data += SHA256_BLOCK_LENGTH;
	}
	if (len > 0) {
		/* There's left-overs, so save 'em */
		MEMCPY_BCOPY(context->buffer, data, len);
		context->bitcount += len << 3;
	}
	/* Clean up: */
	usedspace = freespace = 0;
}

void sha256_Final(SHA256_CTX* context, sha2_byte digest[]) {
	unsigned int	usedspace = 0;

	/* If no digest buffer is passed, we don't bother doing this: */
	if (digest != (sha2_byte*)0) {
		usedspace = (context->bitcount >> 3) % SHA256_BLOCK_LENGTH;
		/* Begin padding with a 1 bit: */
		((uint8_t*)context->buffer)[usedspace++] = 0x80;

		if (usedspace > SHA256_SHORT_BLOCK_LENGTH) {
			memzero(((uint8_t*)context->buffer) + usedspace, SHA256_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
			/* Convert TO host byte order */
			for (int j = 0; j < 16; j++) {
				REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
			}
#endif
			/* Do second-to-last transform: */
			sha256_Transform(context->state, context->buffer, context->state);

			/* And prepare the last transform: */
			usedspace = 0;
		}
		/* Set-up for the last transform: */
		memzero(((uint8_t*)context->buffer) + usedspace, SHA256_SHORT_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 14; j++) {
			REVERSE32((uint32_t) context->buffer[j], context->buffer[j]);
		}
#endif
		/* Set the bit count: */
		context->buffer[14] = context->bitcount >> 32;
		context->buffer[15] = context->bitcount & 0xffffffff;

		/* Final transform: */
		sha256_Transform(context->state, context->buffer, context->state);

#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert FROM host byte order */
		for (int j = 0; j < 8; j++) {
			REVERSE32((uint32_t) context->state[j], context->state[j]);
		}
#endif
		MEMCPY_BCOPY(digest, context->state, SHA256_DIGEST_LENGTH);
	}

	/* Clean up state data: */
	memzero(context, sizeof(SHA256_CTX));
	usedspace = 0;
}

char *sha256_End(SHA256_CTX* context, char buffer[]) {
	sha2_byte	digest[SHA256_DIGEST_LENGTH] = {0}, *d = digest;
	int		i = 0;

	if (buffer != (char*)0) {
		sha256_Final(context, digest);

		for (i = 0; i < SHA256_DIGEST_LENGTH; i++) {
			*buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
			*buffer++ = sha2_hex_digits[*d & 0x0f];
			d++;
		}
		*buffer = (char)0;
	} else {
		memzero(context, sizeof(SHA256_CTX));
	}
	memzero(digest, SHA256_DIGEST_LENGTH);
	return buffer;
}

void sha256_Raw(const sha2_byte* data, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]) {
	SHA256_CTX	context = {};
	sha256_Init(&context);
	sha256_Update(&context, data, len);
	sha256_Final(&context, digest);
}

char* sha256_Data(const sha2_byte* data, size_t len, char digest[SHA256_DIGEST_STRING_LENGTH]) {
	SHA256_CTX	context = {};

	sha256_Init(&context);
	sha256_Update(&context, data, len);
	return sha256_End(&context, digest);
}


/*** SHA-512: *********************************************************/
void sha512_Init(SHA512_CTX* context) {
	if (context == (SHA512_CTX*)0) {
		return;
	}
	MEMCPY_BCOPY(context->state, sha512_initial_hash_value, SHA512_DIGEST_LENGTH);
	memzero(context->buffer, SHA512_BLOCK_LENGTH);
	context->bitcount[0] = context->bitcount[1] =  0;
}

#ifdef SHA2_UNROLL_TRANSFORM

/* Unrolled SHA-512 round macros: */
#define ROUND512_0_TO_15(a,b,c,d,e,f,g,h)	\
	T1 = (h) + Sigma1_512(e) + Ch((e), (f), (g)) + \
             K512[j] + (W512[j] = *data++); \
	(d) += T1; \
	(h) = T1 + Sigma0_512(a) + Maj((a), (b), (c)); \
	j++

#define ROUND512(a,b,c,d,e,f,g,h)	\
	s0 = W512[(j+1)&0x0f]; \
	s0 = sigma0_512(s0); \
	s1 = W512[(j+14)&0x0f]; \
	s1 = sigma1_512(s1); \
	T1 = (h) + Sigma1_512(e) + Ch((e), (f), (g)) + K512[j] + \
             (W512[j&0x0f] += s1 + W512[(j+9)&0x0f] + s0); \
	(d) += T1; \
	(h) = T1 + Sigma0_512(a) + Maj((a), (b), (c)); \
	j++

void sha512_Transform(const sha2_word64* state_in, const sha2_word64* data, sha2_word64* state_out) {
	sha2_word64	a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, s0 = 0, s1 = 0;
	sha2_word64	T1 = 0, W512[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];
	f = state_in[5];
	g = state_in[6];
	h = state_in[7];

	j = 0;
	do {
		ROUND512_0_TO_15(a,b,c,d,e,f,g,h);
		ROUND512_0_TO_15(h,a,b,c,d,e,f,g);
		ROUND512_0_TO_15(g,h,a,b,c,d,e,f);
		ROUND512_0_TO_15(f,g,h,a,b,c,d,e);
		ROUND512_0_TO_15(e,f,g,h,a,b,c,d);
		ROUND512_0_TO_15(d,e,f,g,h,a,b,c);
		ROUND512_0_TO_15(c,d,e,f,g,h,a,b);
		ROUND512_0_TO_15(b,c,d,e,f,g,h,a);
	} while (j < 16);

	/* Now for the remaining rounds up to 79: */
	do {
		ROUND512(a,b,c,d,e,f,g,h);
		ROUND512(h,a,b,c,d,e,f,g);
		ROUND512(g,h,a,b,c,d,e,f);
		ROUND512(f,g,h,a,b,c,d,e);
		ROUND512(e,f,g,h,a,b,c,d);
		ROUND512(d,e,f,g,h,a,b,c);
		ROUND512(c,d,e,f,g,h,a,b);
		ROUND512(b,c,d,e,f,g,h,a);
	} while (j < 80);

	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;
	state_out[5] = state_in[5] + f;
	state_out[6] = state_in[6] + g;
	state_out[7] = state_in[7] + h;

	/* Clean up */
	a = b = c = d = e = f = g = h = T1 = 0;
}

#else /* SHA2_UNROLL_TRANSFORM */

void sha512_Transform(const sha2_word64* state_in, const sha2_word64* data, sha2_word64* state_out) {
	sha2_word64	a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, s0 = 0, s1 = 0;
	sha2_word64	T1 = 0, T2 = 0, W512[16] = {0};
	int		j = 0;

	/* Initialize registers with the prev. intermediate value */
	a = state_in[0];
	b = state_in[1];
	c = state_in[2];
	d = state_in[3];
	e = state_in[4];
	f = state_in[5];
	g = state_in[6];
	h = state_in[7];

	j = 0;
	do {
		/* Apply the SHA-512 compression function to update a..h with copy */
		T1 = h + Sigma1_512(e) + Ch(e, f, g) + K512[j] + (W512[j] = *data++);
		T2 = Sigma0_512(a) + Maj(a, b, c);
		h = g;
		g = f;
		f = e;
		e = d + T1;
		d = c;
		c = b;
		b = a;
		a = T1 + T2;

		j++;
	} while (j < 16);

	do {
		/* Part of the message block expansion: */
		s0 = W512[(j+1)&0x0f];
		s0 = sigma0_512(s0);
		s1 = W512[(j+14)&0x0f];
		s1 =  sigma1_512(s1);

		/* Apply the SHA-512 compression function to update a..h */
		T1 = h + Sigma1_512(e) + Ch(e, f, g) + K512[j] +
		     (W512[j&0x0f] += s1 + W512[(j+9)&0x0f] + s0);
		T2 = Sigma0_512(a) + Maj(a, b, c);
		h = g;
		g = f;
		f = e;
		e = d + T1;
		d = c;
		c = b;
		b = a;
		a = T1 + T2;

		j++;
	} while (j < 80);

	/* Compute the current intermediate hash value */
	state_out[0] = state_in[0] + a;
	state_out[1] = state_in[1] + b;
	state_out[2] = state_in[2] + c;
	state_out[3] = state_in[3] + d;
	state_out[4] = state_in[4] + e;
	state_out[5] = state_in[5] + f;
	state_out[6] = state_in[6] + g;
	state_out[7] = state_in[7] + h;

	/* Clean up */
	a = b = c = d = e = f = g = h = T1 = T2 = 0;
}

#endif /* SHA2_UNROLL_TRANSFORM */

void sha512_Update(SHA512_CTX* context, const sha2_byte *data, size_t len) {
	unsigned int	freespace = 0, usedspace = 0;

	if (len == 0) {
		/* Calling with no data is valid - we do nothing */
		return;
	}

	usedspace = (context->bitcount[0] >> 3) % SHA512_BLOCK_LENGTH;
	if (usedspace > 0) {
		/* Calculate how much free space is available in the buffer */
		freespace = SHA512_BLOCK_LENGTH - usedspace;

		if (len >= freespace) {
			/* Fill the buffer completely and process it */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, freespace);
			ADDINC128(context->bitcount, freespace << 3);
			len -= freespace;
			data += freespace;
#if BYTE_ORDER == LITTLE_ENDIAN
			/* Convert TO host byte order */
			for (int j = 0; j < 16; j++) {
				REVERSE64(context->buffer[j],context->buffer[j]);
			}
#endif
			sha512_Transform(context->state, context->buffer, context->state);
		} else {
			/* The buffer is not yet full */
			MEMCPY_BCOPY(((uint8_t*)context->buffer) + usedspace, data, len);
			ADDINC128(context->bitcount, len << 3);
			/* Clean up: */
			usedspace = freespace = 0;
			return;
		}
	}
	while (len >= SHA512_BLOCK_LENGTH) {
		/* Process as many complete blocks as we can */
		MEMCPY_BCOPY(context->buffer, data, SHA512_BLOCK_LENGTH);
#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 16; j++) {
			REVERSE64(context->buffer[j],context->buffer[j]);
		}
#endif
		sha512_Transform(context->state, context->buffer, context->state);
		ADDINC128(context->bitcount, SHA512_BLOCK_LENGTH << 3);
		len -= SHA512_BLOCK_LENGTH;
		data += SHA512_BLOCK_LENGTH;
	}
	if (len > 0) {
		/* There's left-overs, so save 'em */
		MEMCPY_BCOPY(context->buffer, data, len);
		ADDINC128(context->bitcount, len << 3);
	}
	/* Clean up: */
	usedspace = freespace = 0;
}

static void sha512_Last(SHA512_CTX* context) {
	unsigned int	usedspace = 0;

	usedspace = (context->bitcount[0] >> 3) % SHA512_BLOCK_LENGTH;
	/* Begin padding with a 1 bit: */
	((uint8_t*)context->buffer)[usedspace++] = 0x80;

	if (usedspace > SHA512_SHORT_BLOCK_LENGTH) {
		memzero(((uint8_t*)context->buffer) + usedspace, SHA512_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert TO host byte order */
		for (int j = 0; j < 16; j++) {
			REVERSE64(context->buffer[j],context->buffer[j]);
		}
#endif
		/* Do second-to-last transform: */
		sha512_Transform(context->state, context->buffer, context->state);

		/* And prepare the last transform: */
		usedspace = 0;
	}
	/* Set-up for the last transform: */
	memzero(((uint8_t*)context->buffer) + usedspace, SHA512_SHORT_BLOCK_LENGTH - usedspace);

#if BYTE_ORDER == LITTLE_ENDIAN
	/* Convert TO host byte order */
	for (int j = 0; j < 14; j++) {
		REVERSE64(context->buffer[j],context->buffer[j]);
	}
#endif
	/* Store the length of input data (in bits): */
	context->buffer[14] = context->bitcount[1];
	context->buffer[15] = context->bitcount[0];

	/* Final transform: */
	sha512_Transform(context->state, context->buffer, context->state);
}

void sha512_Final(SHA512_CTX* context, sha2_byte digest[]) {
	/* If no digest buffer is passed, we don't bother doing this: */
	if (digest != (sha2_byte*)0) {
		sha512_Last(context);

		/* Save the hash data for output: */
#if BYTE_ORDER == LITTLE_ENDIAN
		/* Convert FROM host byte order */
		for (int j = 0; j < 8; j++) {
			REVERSE64(context->state[j],context->state[j]);
		}
#endif
		MEMCPY_BCOPY(digest, context->state, SHA512_DIGEST_LENGTH);
	}

	/* Zero out state data */
	memzero(context, sizeof(SHA512_CTX));
}

char *sha512_End(SHA512_CTX* context, char buffer[]) {
	sha2_byte	digest[SHA512_DIGEST_LENGTH] = {0}, *d = digest;
	int		i = 0;

	if (buffer != (char*)0) {
		sha512_Final(context, digest);

		for (i = 0; i < SHA512_DIGEST_LENGTH; i++) {
			*buffer++ = sha2_hex_digits[(*d & 0xf0) >> 4];
			*buffer++ = sha2_hex_digits[*d & 0x0f];
			d++;
		}
		*buffer = (char)0;
	} else {
		memzero(context, sizeof(SHA512_CTX));
	}
	memzero(digest, SHA512_DIGEST_LENGTH);
	return buffer;
}

void sha512_Raw(const sha2_byte* data, size_t len, uint8_t digest[SHA512_DIGEST_LENGTH]) {
	SHA512_CTX	context = {};
	sha512_Init(&context);
	sha512_Update(&context, data, len);
	sha512_Final(&context, digest);
}

char* sha512_Data(const sha2_byte* data, size_t len, char digest[SHA512_DIGEST_STRING_LENGTH]) {
	SHA512_CTX	context = {};

	sha512_Init(&context);
	sha512_Update(&context, data, len);
	return sha512_End(&context, digest);
}

/**
 * Copyright (c) 2013-2014 Tomas Dzetkulic
 * Copyright (c) 2013-2014 Pavol Rusnak
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

void hmac_sha256_Init(HMAC_SHA256_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen) {
  static CONFIDENTIAL uint8_t i_key_pad[SHA256_BLOCK_LENGTH];
  memzero(i_key_pad, SHA256_BLOCK_LENGTH);
  if (keylen > SHA256_BLOCK_LENGTH) {
    sha256_Raw(key, keylen, i_key_pad);
  } else {
    memcpy(i_key_pad, key, keylen);
  }
  for (int i = 0; i < SHA256_BLOCK_LENGTH; i++) {
    hctx->o_key_pad[i] = (uint8_t) (i_key_pad[i] ^ 0x5c);
    i_key_pad[i] ^= 0x36;
  }
  sha256_Init(&(hctx->ctx));
  sha256_Update(&(hctx->ctx), i_key_pad, SHA256_BLOCK_LENGTH);
  memzero(i_key_pad, sizeof(i_key_pad));
}

void hmac_sha256_Update(HMAC_SHA256_CTX *hctx, const uint8_t *msg,
                        const uint32_t msglen) {
  sha256_Update(&(hctx->ctx), msg, msglen);
}

void hmac_sha256_Final(HMAC_SHA256_CTX *hctx, uint8_t *hmac) {
  sha256_Final(&(hctx->ctx), hmac);
  sha256_Init(&(hctx->ctx));
  sha256_Update(&(hctx->ctx), hctx->o_key_pad, SHA256_BLOCK_LENGTH);
  sha256_Update(&(hctx->ctx), hmac, SHA256_DIGEST_LENGTH);
  sha256_Final(&(hctx->ctx), hmac);
  memzero(hctx, sizeof(HMAC_SHA256_CTX));
}

void hmac_sha256(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac) {
  static CONFIDENTIAL HMAC_SHA256_CTX hctx;
  hmac_sha256_Init(&hctx, key, keylen);
  hmac_sha256_Update(&hctx, msg, msglen);
  hmac_sha256_Final(&hctx, hmac);
}

void hmac_sha256_prepare(const uint8_t *key, const uint32_t keylen,
                         uint32_t *opad_digest, uint32_t *ipad_digest) {
  static CONFIDENTIAL uint32_t key_pad[SHA256_BLOCK_LENGTH / sizeof(uint32_t)];

  memzero(key_pad, sizeof(key_pad));
  if (keylen > SHA256_BLOCK_LENGTH) {
    static CONFIDENTIAL SHA256_CTX context;
    sha256_Init(&context);
    sha256_Update(&context, key, keylen);
    sha256_Final(&context, (uint8_t *)key_pad);
  } else {
    memcpy(key_pad, key, keylen);
  }

  /* compute o_key_pad and its digest */
  for (int i = 0; i < SHA256_BLOCK_LENGTH / (int)sizeof(uint32_t); i++) {
    uint32_t data = 0;
#if BYTE_ORDER == LITTLE_ENDIAN
    REVERSE32(key_pad[i], data);
#else
    data = key_pad[i];
#endif
    key_pad[i] = data ^ 0x5c5c5c5c;
  }
  sha256_Transform(sha256_initial_hash_value, key_pad, opad_digest);

  /* convert o_key_pad to i_key_pad and compute its digest */
  for (int i = 0; i < SHA256_BLOCK_LENGTH / (int)sizeof(uint32_t); i++) {
    key_pad[i] = key_pad[i] ^ 0x5c5c5c5c ^ 0x36363636;
  }
  sha256_Transform(sha256_initial_hash_value, key_pad, ipad_digest);
  memzero(key_pad, sizeof(key_pad));
}

void hmac_sha512_Init(HMAC_SHA512_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen) {
  static CONFIDENTIAL uint8_t i_key_pad[SHA512_BLOCK_LENGTH];
  memzero(i_key_pad, SHA512_BLOCK_LENGTH);
  if (keylen > SHA512_BLOCK_LENGTH) {
    sha512_Raw(key, keylen, i_key_pad);
  } else {
    memcpy(i_key_pad, key, keylen);
  }
  for (int i = 0; i < SHA512_BLOCK_LENGTH; i++) {
    hctx->o_key_pad[i] = (uint8_t) (i_key_pad[i] ^ 0x5c);
    i_key_pad[i] ^= 0x36;
  }
  sha512_Init(&(hctx->ctx));
  sha512_Update(&(hctx->ctx), i_key_pad, SHA512_BLOCK_LENGTH);
  memzero(i_key_pad, sizeof(i_key_pad));
}

void hmac_sha512_Update(HMAC_SHA512_CTX *hctx, const uint8_t *msg, const uint32_t msglen) {
  sha512_Update(&(hctx->ctx), msg, msglen);
}

void hmac_sha512_Final(HMAC_SHA512_CTX *hctx, uint8_t *hmac) {
  sha512_Final(&(hctx->ctx), hmac);
  sha512_Init(&(hctx->ctx));
  sha512_Update(&(hctx->ctx), hctx->o_key_pad, SHA512_BLOCK_LENGTH);
  sha512_Update(&(hctx->ctx), hmac, SHA512_DIGEST_LENGTH);
  sha512_Final(&(hctx->ctx), hmac);
  memzero(hctx, sizeof(HMAC_SHA512_CTX));
}

void hmac_sha512(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac) {
  HMAC_SHA512_CTX hctx = {};
  hmac_sha512_Init(&hctx, key, keylen);
  hmac_sha512_Update(&hctx, msg, msglen);
  hmac_sha512_Final(&hctx, hmac);
}

void hmac_sha512_prepare(const uint8_t *key, const uint32_t keylen, uint64_t *opad_digest, uint64_t *ipad_digest) {
  static CONFIDENTIAL uint64_t key_pad[SHA512_BLOCK_LENGTH / sizeof(uint64_t)];

  memzero(key_pad, sizeof(key_pad));
  if (keylen > SHA512_BLOCK_LENGTH) {
    static CONFIDENTIAL SHA512_CTX context;
    sha512_Init(&context);
    sha512_Update(&context, key, keylen);
    sha512_Final(&context, (uint8_t *)key_pad);
  } else {
    memcpy(key_pad, key, keylen);
  }

  /* compute o_key_pad and its digest */
  for (int i = 0; i < SHA512_BLOCK_LENGTH / (int)sizeof(uint64_t); i++) {
    uint64_t data = 0;
#if BYTE_ORDER == LITTLE_ENDIAN
    REVERSE64(key_pad[i], data);
#else
    data = key_pad[i];
#endif
    key_pad[i] = data ^ 0x5c5c5c5c5c5c5c5c;
  }
  sha512_Transform(sha512_initial_hash_value, key_pad, opad_digest);

  /* convert o_key_pad to i_key_pad and compute its digest */
  for (int i = 0; i < SHA512_BLOCK_LENGTH / (int)sizeof(uint64_t); i++) {
    key_pad[i] = key_pad[i] ^ 0x5c5c5c5c5c5c5c5c ^ 0x3636363636363636;
  }
  sha512_Transform(sha512_initial_hash_value, key_pad, ipad_digest);
  memzero(key_pad, sizeof(key_pad));
}

// HMAC based Deterministic Random Bit Generator with SHA-256


static void update_k(HMAC_DRBG_CTX *ctx, uint8_t domain, const uint8_t *data1,
                     size_t len1, const uint8_t *data2, size_t len2) {
  // Computes K = HMAC(K, V || domain || data1 || data 2).

  // First hash operation of HMAC.
  uint32_t h[SHA256_BLOCK_LENGTH / sizeof(uint32_t)] = {0};
  if (len1 + len2 == 0) {
    ctx->v[8] = 0x00800000;
    ctx->v[15] = (SHA256_BLOCK_LENGTH + SHA256_DIGEST_LENGTH + 1) * 8;
    sha256_Transform(ctx->idig, ctx->v, h);
    ctx->v[8] = 0x80000000;
    ctx->v[15] = (SHA256_BLOCK_LENGTH + SHA256_DIGEST_LENGTH) * 8;
  } else {
    SHA256_CTX sha_ctx = {};
    memcpy(sha_ctx.state, ctx->idig, SHA256_DIGEST_LENGTH);
    for (size_t i = 0; i < SHA256_DIGEST_LENGTH / sizeof(uint32_t); i++) {
#if BYTE_ORDER == LITTLE_ENDIAN
      REVERSE32(ctx->v[i], sha_ctx.buffer[i]);
#else
      sha_ctx.buffer[i] = ctx->v[i];
#endif
    }
    ((uint8_t *)sha_ctx.buffer)[SHA256_DIGEST_LENGTH] = domain;
    sha_ctx.bitcount = (SHA256_BLOCK_LENGTH + SHA256_DIGEST_LENGTH + 1) * 8;
    sha256_Update(&sha_ctx, data1, len1);
    sha256_Update(&sha_ctx, data2, len2);
    sha256_Final(&sha_ctx, (uint8_t *)h);
#if BYTE_ORDER == LITTLE_ENDIAN
    for (size_t i = 0; i < SHA256_DIGEST_LENGTH / sizeof(uint32_t); i++)
      REVERSE32(h[i], h[i]);
#endif
  }

  // Second hash operation of HMAC.
  h[8] = 0x80000000;
  h[15] = (SHA256_BLOCK_LENGTH + SHA256_DIGEST_LENGTH) * 8;
  sha256_Transform(ctx->odig, h, h);

  // Precompute the inner digest and outer digest of K.
  h[8] = 0;
  h[15] = 0;
  for (size_t i = 0; i < SHA256_BLOCK_LENGTH / sizeof(uint32_t); i++) {
    h[i] ^= 0x36363636;
  }
  sha256_Transform(sha256_initial_hash_value, h, ctx->idig);

  for (size_t i = 0; i < SHA256_BLOCK_LENGTH / sizeof(uint32_t); i++) {
    h[i] = h[i] ^ 0x36363636 ^ 0x5c5c5c5c;
  }
  sha256_Transform(sha256_initial_hash_value, h, ctx->odig);
  memzero(h, sizeof(h));
}

static void update_v(HMAC_DRBG_CTX *ctx) {
  sha256_Transform(ctx->idig, ctx->v, ctx->v);
  sha256_Transform(ctx->odig, ctx->v, ctx->v);
}

void hmac_drbg_reseed(HMAC_DRBG_CTX *ctx, const uint8_t *entropy, size_t len,
                      const uint8_t *addin, size_t addin_len) {
  update_k(ctx, 0, entropy, len, addin, addin_len);
  update_v(ctx);
  if (len == 0) return;
  update_k(ctx, 1, entropy, len, addin, addin_len);
  update_v(ctx);
}

void hmac_drbg_init(HMAC_DRBG_CTX *ctx, const uint8_t *entropy,
                    size_t entropy_len, const uint8_t *nonce,
                    size_t nonce_len) {
  uint32_t h[SHA256_BLOCK_LENGTH / sizeof(uint32_t)] = {0};

  // Precompute the inner digest and outer digest of K = 0x00 ... 0x00.
  memset(h, 0x36, sizeof(h));
  sha256_Transform(sha256_initial_hash_value, h, ctx->idig);
  memset(h, 0x5c, sizeof(h));
  sha256_Transform(sha256_initial_hash_value, h, ctx->odig);

  // Let V = 0x01 ... 0x01.
  memset(ctx->v, 1, SHA256_DIGEST_LENGTH);
  for (size_t i = 9; i < 15; i++) ctx->v[i] = 0;
  ctx->v[8] = 0x80000000;
  ctx->v[15] = (SHA256_BLOCK_LENGTH + SHA256_DIGEST_LENGTH) * 8;

  hmac_drbg_reseed(ctx, entropy, entropy_len, nonce, nonce_len);

  memzero(h, sizeof(h));
}

void hmac_drbg_generate(HMAC_DRBG_CTX *ctx, uint8_t *buf, size_t len) {
  size_t i = 0;
  while (i < len) {
    update_v(ctx);
    for (size_t j = 0; j < 8 && i < len; j++) {
      uint32_t r = ctx->v[j];
      for (int k = 24; k >= 0 && i < len; k -= 8) {
        buf[i++] = (r >> k) & 0xFF;
      }
    }
  }
  update_k(ctx, 0, NULL, 0, NULL, 0);
  update_v(ctx);
}

/**
 * Copyright (c) 2013-2014 Tomas Dzetkulic
 * Copyright (c) 2013-2014 Pavol Rusnak
 * Copyright (c)      2015 Jochen Hoenicke
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include <assert.h>

void init_rfc6979(const uint8_t *priv_key, const uint8_t *hash,
                  rfc6979_state *state) {
  hmac_drbg_init(state, priv_key, 32, hash, 32);
}

// generate next number from deterministic random number generator
void generate_rfc6979(uint8_t rnd[32], rfc6979_state *state) {
  hmac_drbg_generate(state, rnd, 32);
}

// generate K in a deterministic way, according to RFC6979
// http://tools.ietf.org/html/rfc6979
void generate_k_rfc6979(bignum256 *k, rfc6979_state *state) {
  uint8_t buf[32] = {};
  generate_rfc6979(buf, state);
  bn_read_be(buf, k);
  memzero(buf, sizeof(buf));
}


// Set cp2 = cp1
void point_copy(const curve_point *cp1, curve_point *cp2) { *cp2 = *cp1; }

// set point to internal representation of point at infinity
void point_set_infinity(curve_point *p) {
  bn_zero(&(p->x));
  bn_zero(&(p->y));
}

// return true iff p represent point at infinity
// both coords are zero in internal representation
int point_is_infinity(const curve_point *p) {
  return bn_is_zero(&(p->x)) && bn_is_zero(&(p->y));
}

// return true iff both points are equal
int point_is_equal(const curve_point *p, const curve_point *q) {
  return bn_is_equal(&(p->x), &(q->x)) && bn_is_equal(&(p->y), &(q->y));
}

// cp = cp + cp
void point_double(const ecdsa_curve *curve, curve_point *cp) {
  bignum256 lambda = {}, xr = {}, yr = {};

  if (point_is_infinity(cp)) {
    return;
  }
  if (bn_is_zero(&(cp->y))) {
    point_set_infinity(cp);
    return;
  }

  // lambda = (3 x^2 + a) / (2 y)
  lambda = cp->y;
  bn_mult_k(&lambda, 2, &curve->prime);
  bn_inverse(&lambda, &curve->prime);

  xr = cp->x;
  bn_multiply(&xr, &xr, &curve->prime);
  bn_mult_k(&xr, 3, &curve->prime);
  bn_subi(&xr, (uint32_t) -curve->a, &curve->prime);
  bn_multiply(&xr, &lambda, &curve->prime);

  // xr = lambda^2 - 2*x
  xr = lambda;
  bn_multiply(&xr, &xr, &curve->prime);
  yr = cp->x;
  bn_lshift(&yr);
  bn_subtractmod(&xr, &yr, &xr, &curve->prime);
  bn_fast_mod(&xr, &curve->prime);
  bn_mod(&xr, &curve->prime);

  // yr = lambda (x - xr) - y
  bn_subtractmod(&(cp->x), &xr, &yr, &curve->prime);
  bn_multiply(&lambda, &yr, &curve->prime);
  bn_subtractmod(&yr, &(cp->y), &yr, &curve->prime);
  bn_fast_mod(&yr, &curve->prime);
  bn_mod(&yr, &curve->prime);

  cp->x = xr;
  cp->y = yr;
}

// returns true iff p == -q
// expects p and q be valid points on curve other than point at infinity
int point_is_negative_of(const curve_point *p, const curve_point *q) {
  // if P == (x, y), then -P would be (x, -y) on this curve
  if (!bn_is_equal(&(p->x), &(q->x))) {
    return 0;
  }

  // we shouldn't hit this for a valid point
  if (bn_is_zero(&(p->y))) {
    return 0;
  }

  return !bn_is_equal(&(p->y), &(q->y));
}

// cp2 = cp1 + cp2
void point_add(const ecdsa_curve *curve, const curve_point *cp1,
               curve_point *cp2) {
  bignum256 lambda = {}, inv = {}, xr = {}, yr = {};

  if (point_is_infinity(cp1)) {
    return;
  }
  if (point_is_infinity(cp2)) {
    point_copy(cp1, cp2);
    return;
  }
  if (point_is_equal(cp1, cp2)) {
    point_double(curve, cp2);
    return;
  }
  if (point_is_negative_of(cp1, cp2)) {
    point_set_infinity(cp2);
    return;
  }

  bn_subtractmod(&(cp2->x), &(cp1->x), &inv, &curve->prime);
  bn_inverse(&inv, &curve->prime);
  bn_subtractmod(&(cp2->y), &(cp1->y), &lambda, &curve->prime);
  bn_multiply(&inv, &lambda, &curve->prime);

  // xr = lambda^2 - x1 - x2
  xr = lambda;
  bn_multiply(&xr, &xr, &curve->prime);
  yr = cp1->x;
  bn_addmod(&yr, &(cp2->x), &curve->prime);
  bn_subtractmod(&xr, &yr, &xr, &curve->prime);
  bn_fast_mod(&xr, &curve->prime);
  bn_mod(&xr, &curve->prime);

  // yr = lambda (x1 - xr) - y1
  bn_subtractmod(&(cp1->x), &xr, &yr, &curve->prime);
  bn_multiply(&lambda, &yr, &curve->prime);
  bn_subtractmod(&yr, &(cp1->y), &yr, &curve->prime);
  bn_fast_mod(&yr, &curve->prime);
  bn_mod(&yr, &curve->prime);

  cp2->x = xr;
  cp2->y = yr;
}

// Negate a (modulo prime) if cond is 0xffffffff, keep it if cond is 0.
// The timing of this function does not depend on cond.
void conditional_negate(uint32_t cond, bignum256 *a, const bignum256 *prime) {
  int j = 0;
  uint32_t tmp = 1;
  assert(a->val[8] < 0x20000);
  for (j = 0; j < 8; j++) {
    tmp += 0x3fffffff + 2 * prime->val[j] - a->val[j];
    a->val[j] = ((tmp & 0x3fffffff) & cond) | (a->val[j] & ~cond);
    tmp >>= 30;
  }
  tmp += 0x3fffffff + 2 * prime->val[j] - a->val[j];
  a->val[j] = ((tmp & 0x3fffffff) & cond) | (a->val[j] & ~cond);
  assert(a->val[8] < 0x20000);
}

// generate random K for signing/side-channel noise
static void generate_k_random(bignum256 *k, const bignum256 *prime) {
  do {
    int i = 0;
    for (i = 0; i < 8; i++) {
      k->val[i] = random32() & 0x3FFFFFFF;
    }
    k->val[8] = random32() & 0xFFFF;
    // check that k is in range and not zero.
  } while (bn_is_zero(k) || !bn_is_less(k, prime));
}

void curve_to_jacobian(const curve_point *p, jacobian_curve_point *jp,
                       const bignum256 *prime) {
  // randomize z coordinate
  generate_k_random(&jp->z, prime);

  jp->x = jp->z;
  bn_multiply(&jp->z, &jp->x, prime);
  // x = z^2
  jp->y = jp->x;
  bn_multiply(&jp->z, &jp->y, prime);
  // y = z^3

  bn_multiply(&p->x, &jp->x, prime);
  bn_multiply(&p->y, &jp->y, prime);
}

void jacobian_to_curve(const jacobian_curve_point *jp, curve_point *p,
                       const bignum256 *prime) {
  p->y = jp->z;
  bn_inverse(&p->y, prime);
  // p->y = z^-1
  p->x = p->y;
  bn_multiply(&p->x, &p->x, prime);
  // p->x = z^-2
  bn_multiply(&p->x, &p->y, prime);
  // p->y = z^-3
  bn_multiply(&jp->x, &p->x, prime);
  // p->x = jp->x * z^-2
  bn_multiply(&jp->y, &p->y, prime);
  // p->y = jp->y * z^-3
  bn_mod(&p->x, prime);
  bn_mod(&p->y, prime);
}

void point_jacobian_add(const curve_point *p1, jacobian_curve_point *p2,
                        const ecdsa_curve *curve) {
  bignum256 r = {}, h = {}, r2 = {};
  bignum256 hcby = {}, hsqx = {};
  bignum256 xz = {}, yz = {}, az = {};
  int is_doubling = 0;
  const bignum256 *prime = &curve->prime;
  int a = curve->a;

  assert(-3 <= a && a <= 0);

  /* First we bring p1 to the same denominator:
   * x1' := x1 * z2^2
   * y1' := y1 * z2^3
   */
  /*
   * lambda  = ((y1' - y2)/z2^3) / ((x1' - x2)/z2^2)
   *         = (y1' - y2) / (x1' - x2) z2
   * x3/z3^2 = lambda^2 - (x1' + x2)/z2^2
   * y3/z3^3 = 1/2 lambda * (2x3/z3^2 - (x1' + x2)/z2^2) + (y1'+y2)/z2^3
   *
   * For the special case x1=x2, y1=y2 (doubling) we have
   * lambda = 3/2 ((x2/z2^2)^2 + a) / (y2/z2^3)
   *        = 3/2 (x2^2 + a*z2^4) / y2*z2)
   *
   * to get rid of fraction we write lambda as
   * lambda = r / (h*z2)
   * with  r = is_doubling ? 3/2 x2^2 + az2^4 : (y1 - y2)
   *       h = is_doubling ?      y1+y2       : (x1 - x2)
   *
   * With z3 = h*z2  (the denominator of lambda)
   * we get x3 = lambda^2*z3^2 - (x1' + x2)/z2^2*z3^2
   *           = r^2 - h^2 * (x1' + x2)
   *    and y3 = 1/2 r * (2x3 - h^2*(x1' + x2)) + h^3*(y1' + y2)
   */

  /* h = x1 - x2
   * r = y1 - y2
   * x3 = r^2 - h^3 - 2*h^2*x2
   * y3 = r*(h^2*x2 - x3) - h^3*y2
   * z3 = h*z2
   */

  xz = p2->z;
  bn_multiply(&xz, &xz, prime);  // xz = z2^2
  yz = p2->z;
  bn_multiply(&xz, &yz, prime);  // yz = z2^3

  if (a != 0) {
    az = xz;
    bn_multiply(&az, &az, prime);  // az = z2^4
    bn_mult_k(&az, (uint8_t) -a, prime);     // az = -az2^4
  }

  bn_multiply(&p1->x, &xz, prime);  // xz = x1' = x1*z2^2;
  h = xz;
  bn_subtractmod(&h, &p2->x, &h, prime);
  bn_fast_mod(&h, prime);
  // h = x1' - x2;

  bn_add(&xz, &p2->x);
  // xz = x1' + x2

  // check for h == 0 % prime.  Note that h never normalizes to
  // zero, since h = x1' + 2*prime - x2 > 0 and a positive
  // multiple of prime is always normalized to prime by
  // bn_fast_mod.
  is_doubling = bn_is_equal(&h, prime);

  bn_multiply(&p1->y, &yz, prime);  // yz = y1' = y1*z2^3;
  bn_subtractmod(&yz, &p2->y, &r, prime);
  // r = y1' - y2;

  bn_add(&yz, &p2->y);
  // yz = y1' + y2

  r2 = p2->x;
  bn_multiply(&r2, &r2, prime);
  bn_mult_k(&r2, 3, prime);

  if (a != 0) {
    // subtract -a z2^4, i.e, add a z2^4
    bn_subtractmod(&r2, &az, &r2, prime);
  }
  bn_cmov(&r, is_doubling, &r2, &r);
  bn_cmov(&h, is_doubling, &yz, &h);

  // hsqx = h^2
  hsqx = h;
  bn_multiply(&hsqx, &hsqx, prime);

  // hcby = h^3
  hcby = h;
  bn_multiply(&hsqx, &hcby, prime);

  // hsqx = h^2 * (x1 + x2)
  bn_multiply(&xz, &hsqx, prime);

  // hcby = h^3 * (y1 + y2)
  bn_multiply(&yz, &hcby, prime);

  // z3 = h*z2
  bn_multiply(&h, &p2->z, prime);

  // x3 = r^2 - h^2 (x1 + x2)
  p2->x = r;
  bn_multiply(&p2->x, &p2->x, prime);
  bn_subtractmod(&p2->x, &hsqx, &p2->x, prime);
  bn_fast_mod(&p2->x, prime);

  // y3 = 1/2 (r*(h^2 (x1 + x2) - 2x3) - h^3 (y1 + y2))
  bn_subtractmod(&hsqx, &p2->x, &p2->y, prime);
  bn_subtractmod(&p2->y, &p2->x, &p2->y, prime);
  bn_multiply(&r, &p2->y, prime);
  bn_subtractmod(&p2->y, &hcby, &p2->y, prime);
  bn_mult_half(&p2->y, prime);
  bn_fast_mod(&p2->y, prime);
}

void point_jacobian_double(jacobian_curve_point *p, const ecdsa_curve *curve) {
  bignum256 az4 = {}, m = {}, msq = {}, ysq = {}, xysq = {};
  const bignum256 *prime = &curve->prime;

  assert(-3 <= curve->a && curve->a <= 0);
  /* usual algorithm:
   *
   * lambda  = (3((x/z^2)^2 + a) / 2y/z^3) = (3x^2 + az^4)/2yz
   * x3/z3^2 = lambda^2 - 2x/z^2
   * y3/z3^3 = lambda * (x/z^2 - x3/z3^2) - y/z^3
   *
   * to get rid of fraction we set
   *  m = (3 x^2 + az^4) / 2
   * Hence,
   *  lambda = m / yz = m / z3
   *
   * With z3 = yz  (the denominator of lambda)
   * we get x3 = lambda^2*z3^2 - 2*x/z^2*z3^2
   *           = m^2 - 2*xy^2
   *    and y3 = (lambda * (x/z^2 - x3/z3^2) - y/z^3) * z3^3
   *           = m * (xy^2 - x3) - y^4
   */

  /* m = (3*x^2 + a z^4) / 2
   * x3 = m^2 - 2*xy^2
   * y3 = m*(xy^2 - x3) - 8y^4
   * z3 = y*z
   */

  m = p->x;
  bn_multiply(&m, &m, prime);
  bn_mult_k(&m, 3, prime);

  az4 = p->z;
  bn_multiply(&az4, &az4, prime);
  bn_multiply(&az4, &az4, prime);
  bn_mult_k(&az4, (uint8_t) -curve->a, prime);
  bn_subtractmod(&m, &az4, &m, prime);
  bn_mult_half(&m, prime);

  // msq = m^2
  msq = m;
  bn_multiply(&msq, &msq, prime);
  // ysq = y^2
  ysq = p->y;
  bn_multiply(&ysq, &ysq, prime);
  // xysq = xy^2
  xysq = p->x;
  bn_multiply(&ysq, &xysq, prime);

  // z3 = yz
  bn_multiply(&p->y, &p->z, prime);

  // x3 = m^2 - 2*xy^2
  p->x = xysq;
  bn_lshift(&p->x);
  bn_fast_mod(&p->x, prime);
  bn_subtractmod(&msq, &p->x, &p->x, prime);
  bn_fast_mod(&p->x, prime);

  // y3 = m*(xy^2 - x3) - y^4
  bn_subtractmod(&xysq, &p->x, &p->y, prime);
  bn_multiply(&m, &p->y, prime);
  bn_multiply(&ysq, &ysq, prime);
  bn_subtractmod(&p->y, &ysq, &p->y, prime);
  bn_fast_mod(&p->y, prime);
}

// res = k * p
void point_multiply(const ecdsa_curve *curve, const bignum256 *k,
                    const curve_point *p, curve_point *res) {
  // this algorithm is loosely based on
  //  Katsuyuki Okeya and Tsuyoshi Takagi, The Width-w NAF Method Provides
  //  Small Memory and Fast Elliptic Scalar Multiplications Secure against
  //  Side Channel Attacks.
  assert(bn_is_less(k, &curve->order));

  int i = 0, j = 0;
  static CONFIDENTIAL bignum256 a;
  uint32_t *aptr = NULL;
  uint32_t abits = 0;
  int ashift = 0;
  uint32_t is_even = (k->val[0] & 1) - 1;
  uint32_t bits = {0}, sign = {0}, nsign = {0};
  static CONFIDENTIAL jacobian_curve_point jres;
  curve_point pmult[8] = {};
  const bignum256 *prime = &curve->prime;

  // is_even = 0xffffffff if k is even, 0 otherwise.

  // add 2^256.
  // make number odd: subtract curve->order if even
  uint32_t tmp = 1;
  uint32_t is_non_zero = 0;
  for (j = 0; j < 8; j++) {
    is_non_zero |= k->val[j];
    tmp += 0x3fffffff + k->val[j] - (curve->order.val[j] & is_even);
    a.val[j] = tmp & 0x3fffffff;
    tmp >>= 30;
  }
  is_non_zero |= k->val[j];
  a.val[j] = tmp + 0xffff + k->val[j] - (curve->order.val[j] & is_even);
  assert((a.val[0] & 1) != 0);

  // special case 0*p:  just return zero. We don't care about constant time.
  if (!is_non_zero) {
    point_set_infinity(res);
    return;
  }

  // Now a = k + 2^256 (mod curve->order) and a is odd.
  //
  // The idea is to bring the new a into the form.
  // sum_{i=0..64} a[i] 16^i,  where |a[i]| < 16 and a[i] is odd.
  // a[0] is odd, since a is odd.  If a[i] would be even, we can
  // add 1 to it and subtract 16 from a[i-1].  Afterwards,
  // a[64] = 1, which is the 2^256 that we added before.
  //
  // Since k = a - 2^256 (mod curve->order), we can compute
  //   k*p = sum_{i=0..63} a[i] 16^i * p
  //
  // We compute |a[i]| * p in advance for all possible
  // values of |a[i]| * p.  pmult[i] = (2*i+1) * p
  // We compute p, 3*p, ..., 15*p and store it in the table pmult.
  // store p^2 temporarily in pmult[7]
  pmult[7] = *p;
  point_double(curve, &pmult[7]);
  // compute 3*p, etc by repeatedly adding p^2.
  pmult[0] = *p;
  for (i = 1; i < 8; i++) {
    pmult[i] = pmult[7];
    point_add(curve, &pmult[i - 1], &pmult[i]);
  }

  // now compute  res = sum_{i=0..63} a[i] * 16^i * p step by step,
  // starting with i = 63.
  // initialize jres = |a[63]| * p.
  // Note that a[i] = a>>(4*i) & 0xf if (a&0x10) != 0
  // and - (16 - (a>>(4*i) & 0xf)) otherwise.   We can compute this as
  //   ((a ^ (((a >> 4) & 1) - 1)) & 0xf) >> 1
  // since a is odd.
  aptr = &a.val[8];
  abits = *aptr;
  ashift = 12;
  bits = abits >> ashift;
  sign = (bits >> 4) - 1;
  bits ^= sign;
  bits &= 15;
  curve_to_jacobian(&pmult[bits >> 1], &jres, prime);
  for (i = 62; i >= 0; i--) {
    // sign = sign(a[i+1])  (0xffffffff for negative, 0 for positive)
    // invariant jres = (-1)^sign sum_{j=i+1..63} (a[j] * 16^{j-i-1} * p)
    // abits >> (ashift - 4) = lowbits(a >> (i*4))

    point_jacobian_double(&jres, curve);
    point_jacobian_double(&jres, curve);
    point_jacobian_double(&jres, curve);
    point_jacobian_double(&jres, curve);

    // get lowest 5 bits of a >> (i*4).
    ashift -= 4;
    if (ashift < 0) {
      // the condition only depends on the iteration number and
      // leaks no private information to a side-channel.
      bits = abits << (-ashift);
      abits = *(--aptr);
      ashift += 30;
      bits |= abits >> ashift;
    } else {
      bits = abits >> ashift;
    }
    bits &= 31;
    nsign = (bits >> 4) - 1;
    bits ^= nsign;
    bits &= 15;

    // negate last result to make signs of this round and the
    // last round equal.
    conditional_negate(sign ^ nsign, &jres.z, prime);

    // add odd factor
    point_jacobian_add(&pmult[bits >> 1], &jres, curve);
    sign = nsign;
  }
  conditional_negate(sign, &jres.z, prime);
  jacobian_to_curve(&jres, res, prime);
  memzero(&a, sizeof(a));
  memzero(&jres, sizeof(jres));
}

#if USE_PRECOMPUTED_CP

// res = k * G
// k must be a normalized number with 0 <= k < curve->order
void scalar_multiply(const ecdsa_curve *curve, const bignum256 *k,
                     curve_point *res) {
  assert(bn_is_less(k, &curve->order));

  int i = {0}, j = {0};
  static CONFIDENTIAL bignum256 a;
  uint32_t is_even = (k->val[0] & 1) - 1;
  uint32_t lowbits = 0;
  static CONFIDENTIAL jacobian_curve_point jres;
  const bignum256 *prime = &curve->prime;

  // is_even = 0xffffffff if k is even, 0 otherwise.

  // add 2^256.
  // make number odd: subtract curve->order if even
  uint32_t tmp = 1;
  uint32_t is_non_zero = 0;
  for (j = 0; j < 8; j++) {
    is_non_zero |= k->val[j];
    tmp += 0x3fffffff + k->val[j] - (curve->order.val[j] & is_even);
    a.val[j] = tmp & 0x3fffffff;
    tmp >>= 30;
  }
  is_non_zero |= k->val[j];
  a.val[j] = tmp + 0xffff + k->val[j] - (curve->order.val[j] & is_even);
  assert((a.val[0] & 1) != 0);

  // special case 0*G:  just return zero. We don't care about constant time.
  if (!is_non_zero) {
    point_set_infinity(res);
    return;
  }

  // Now a = k + 2^256 (mod curve->order) and a is odd.
  //
  // The idea is to bring the new a into the form.
  // sum_{i=0..64} a[i] 16^i,  where |a[i]| < 16 and a[i] is odd.
  // a[0] is odd, since a is odd.  If a[i] would be even, we can
  // add 1 to it and subtract 16 from a[i-1].  Afterwards,
  // a[64] = 1, which is the 2^256 that we added before.
  //
  // Since k = a - 2^256 (mod curve->order), we can compute
  //   k*G = sum_{i=0..63} a[i] 16^i * G
  //
  // We have a big table curve->cp that stores all possible
  // values of |a[i]| 16^i * G.
  // curve->cp[i][j] = (2*j+1) * 16^i * G

  // now compute  res = sum_{i=0..63} a[i] * 16^i * G step by step.
  // initial res = |a[0]| * G.  Note that a[0] = a & 0xf if (a&0x10) != 0
  // and - (16 - (a & 0xf)) otherwise.   We can compute this as
  //   ((a ^ (((a >> 4) & 1) - 1)) & 0xf) >> 1
  // since a is odd.
  lowbits = a.val[0] & ((1 << 5) - 1);
  lowbits ^= (lowbits >> 4) - 1;
  lowbits &= 15;
  curve_to_jacobian(&curve->cp[0][lowbits >> 1], &jres, prime);
  for (i = 1; i < 64; i++) {
    // invariant res = sign(a[i-1]) sum_{j=0..i-1} (a[j] * 16^j * G)

    // shift a by 4 places.
    for (j = 0; j < 8; j++) {
      a.val[j] = (a.val[j] >> 4) | ((a.val[j + 1] & 0xf) << 26);
    }
    a.val[j] >>= 4;
    // a = old(a)>>(4*i)
    // a is even iff sign(a[i-1]) = -1

    lowbits = a.val[0] & ((1 << 5) - 1);
    lowbits ^= (lowbits >> 4) - 1;
    lowbits &= 15;
    // negate last result to make signs of this round and the
    // last round equal.
    conditional_negate((lowbits & 1) - 1, &jres.y, prime);

    // add odd factor
    point_jacobian_add(&curve->cp[i][lowbits >> 1], &jres, curve);
  }
  conditional_negate(((a.val[0] >> 4) & 1) - 1, &jres.y, prime);
  jacobian_to_curve(&jres, res, prime);
  memzero(&a, sizeof(a));
  memzero(&jres, sizeof(jres));
}

#else

void scalar_multiply(const ecdsa_curve *curve, const bignum256 *k,
                     curve_point *res) {
  point_multiply(curve, k, &curve->G, res);
}

#endif

// Verifies that:
//   - pub is not the point at infinity.
//   - pub->x and pub->y are in range [0,p-1].
//   - pub is on the curve.

int ecdsa_validate_pubkey(const ecdsa_curve *curve, const curve_point *pub) {
  bignum256 y_2 = {}, x3_ax_b = {};

  if (point_is_infinity(pub)) {
    return 0;
  }

  if (!bn_is_less(&(pub->x), &curve->prime) ||
      !bn_is_less(&(pub->y), &curve->prime)) {
    return 0;
  }

  memcpy(&y_2, &(pub->y), sizeof(bignum256));
  memcpy(&x3_ax_b, &(pub->x), sizeof(bignum256));

  // y^2
  bn_multiply(&(pub->y), &y_2, &curve->prime);
  bn_mod(&y_2, &curve->prime);

  // x^3 + ax + b
  bn_multiply(&(pub->x), &x3_ax_b, &curve->prime);  // x^2
  bn_subi(&x3_ax_b, (uint32_t) -curve->a, &curve->prime);      // x^2 + a
  bn_multiply(&(pub->x), &x3_ax_b, &curve->prime);  // x^3 + ax
  bn_addmod(&x3_ax_b, &curve->b, &curve->prime);    // x^3 + ax + b
  bn_mod(&x3_ax_b, &curve->prime);

  if (!bn_is_equal(&x3_ax_b, &y_2)) {
    return 0;
  }

  return 1;
}

void uncompress_coords(const ecdsa_curve *curve, uint8_t odd,
                       const bignum256 *x, bignum256 *y) {
  // y^2 = x^3 + a*x + b
  memcpy(y, x, sizeof(bignum256));       // y is x
  bn_multiply(x, y, &curve->prime);      // y is x^2
  bn_subi(y, (uint32_t) -curve->a, &curve->prime);  // y is x^2 + a
  bn_multiply(x, y, &curve->prime);      // y is x^3 + ax
  bn_add(y, &curve->b);                  // y is x^3 + ax + b
  bn_sqrt(y, &curve->prime);             // y = sqrt(y)
  if ((uint32_t) (odd & ((uint8_t) 0x01)) != (y->val[0] & ((uint32_t) 1))) {
    bn_subtract(&curve->prime, y, y);  // y = -y
  }
}

int ecdsa_read_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
                      curve_point *pub) {
  if (!curve) {
    curve = &secp256k1;
  }
  if (pub_key[0] == 0x04) {
    bn_read_be(pub_key + 1, &(pub->x));
    bn_read_be(pub_key + 33, &(pub->y));
    return ecdsa_validate_pubkey(curve, pub);
  }
  if (pub_key[0] == 0x02 || pub_key[0] == 0x03) {  // compute missing y coords
    bn_read_be(pub_key + 1, &(pub->x));
    uncompress_coords(curve, pub_key[0], &(pub->x), &(pub->y));
    return ecdsa_validate_pubkey(curve, pub);
  }
  // error
  return 0;
}

int ecdh_multiply(const ecdsa_curve *curve, const uint8_t *priv_key,
                  const uint8_t *pub_key, uint8_t *session_key) {
  curve_point point = {};
  if (!ecdsa_read_pubkey(curve, pub_key, &point)) {
    return 1;
  }

  bignum256 k = {};
  bn_read_be(priv_key, &k);
  point_multiply(curve, &k, &point, &point);
  memzero(&k, sizeof(k));

  session_key[0] = 0x04;
  bn_write_be(&point.x, session_key + 1);
  bn_write_be(&point.y, session_key + 33);
  memzero(&point, sizeof(point));

  return 0;
}

// uses secp256k1 curve
// priv_key is a 32 byte big endian stored number
// sig is 64 bytes long array for the signature
// digest is 32 bytes of digest
// is_canonical is an optional function that checks if the signature
// conforms to additional coin-specific rules.
int ecdsa_sign_digest(const ecdsa_curve *curve, const uint8_t *priv_key,
                      const uint8_t *digest, uint8_t *sig, uint8_t *pby,
                      int (*is_canonical)(uint8_t by, uint8_t sig[64])) {
  int i = 0;
  curve_point R = {};
  bignum256 k = {}, z = {}, randk = {};
  bignum256 *s = &R.y;
  uint8_t by;  // signature recovery byte

#if USE_RFC6979
  rfc6979_state rng = {};
  init_rfc6979(priv_key, digest, &rng);
#endif

  bn_read_be(digest, &z);

  for (i = 0; i < 10000; i++) {
#if USE_RFC6979
    // generate K deterministically
    generate_k_rfc6979(&k, &rng);
    // if k is too big or too small, we don't like it
    if (bn_is_zero(&k) || !bn_is_less(&k, &curve->order)) {
      continue;
    }
#else
    // generate random number k
    generate_k_random(&k, &curve->order);
#endif

    // compute k*G
    scalar_multiply(curve, &k, &R);
    by = R.y.val[0] & 1;
    // r = (rx mod n)
    if (!bn_is_less(&R.x, &curve->order)) {
      bn_subtract(&R.x, &curve->order, &R.x);
      by |= 2;
    }
    // if r is zero, we retry
    if (bn_is_zero(&R.x)) {
      continue;
    }

    // randomize operations to counter side-channel attacks
    generate_k_random(&randk, &curve->order);
    bn_multiply(&randk, &k, &curve->order);  // k*rand
    bn_inverse(&k, &curve->order);           // (k*rand)^-1
    bn_read_be(priv_key, s);                 // priv
    bn_multiply(&R.x, s, &curve->order);     // R.x*priv
    bn_add(s, &z);                           // R.x*priv + z
    bn_multiply(&k, s, &curve->order);       // (k*rand)^-1 (R.x*priv + z)
    bn_multiply(&randk, s, &curve->order);   // k^-1 (R.x*priv + z)
    bn_mod(s, &curve->order);
    // if s is zero, we retry
    if (bn_is_zero(s)) {
      continue;
    }

    // if S > order/2 => S = -S
    if (bn_is_less(&curve->order_half, s)) {
      bn_subtract(&curve->order, s, s);
      by ^= 1;
    }
    // we are done, R.x and s is the result signature
    bn_write_be(&R.x, sig);
    bn_write_be(s, sig + 32);

    // check if the signature is acceptable or retry
    if (is_canonical && !is_canonical(by, sig)) {
      continue;
    }

    if (pby) {
      *pby = by;
    }

    memzero(&k, sizeof(k));
    memzero(&randk, sizeof(randk));
#if USE_RFC6979
    memzero(&rng, sizeof(rng));
#endif
    return 0;
  }

  // Too many retries without a valid signature
  // -> fail with an error
  memzero(&k, sizeof(k));
  memzero(&randk, sizeof(randk));
#if USE_RFC6979
  memzero(&rng, sizeof(rng));
#endif
  return -1;
}

void ecdsa_get_public_key33(const ecdsa_curve *curve, const uint8_t *priv_key,
                            uint8_t *pub_key) {
  curve_point R = {};
  bignum256 k = {};

  bn_read_be(priv_key, &k);
  // compute k*G
  scalar_multiply(curve, &k, &R);
  pub_key[0] = 0x02 | (R.y.val[0] & 0x01);
  bn_write_be(&R.x, pub_key + 1);
  memzero(&R, sizeof(R));
  memzero(&k, sizeof(k));
}

void ecdsa_get_public_key65(const ecdsa_curve *curve, const uint8_t *priv_key,
                            uint8_t *pub_key) {
  curve_point R = {};
  bignum256 k = {};

  bn_read_be(priv_key, &k);
  // compute k*G
  scalar_multiply(curve, &k, &R);
  pub_key[0] = 0x04;
  bn_write_be(&R.x, pub_key + 1);
  bn_write_be(&R.y, pub_key + 33);
  memzero(&R, sizeof(R));
  memzero(&k, sizeof(k));
}

int ecdsa_uncompress_pubkey(const ecdsa_curve *curve, const uint8_t *pub_key,
                            uint8_t *uncompressed) {
  curve_point pub = {};

  if (!ecdsa_read_pubkey(curve, pub_key, &pub)) {
    return 0;
  }

  uncompressed[0] = 4;
  bn_write_be(&pub.x, uncompressed + 1);
  bn_write_be(&pub.y, uncompressed + 33);

  return 1;
}

void compress_coords(const curve_point *cp, uint8_t *compressed) {
  compressed[0] = (uint8_t) (bn_is_odd(&cp->y) ? 0x03 : 0x02);
  bn_write_be(&cp->x, compressed + 1);
}

// Compute public key from signature and recovery id.
// returns 0 if the key is successfully recovered
int ecdsa_recover_pub_from_sig(const ecdsa_curve *curve, uint8_t *pub_key,
                               const uint8_t *sig, const uint8_t *digest,
                               int recid) {
  bignum256 r = {}, s = {}, e = {};
  curve_point cp = {}, cp2 = {};

  // read r and s
  bn_read_be(sig, &r);
  bn_read_be(sig + 32, &s);
  if (!bn_is_less(&r, &curve->order) || bn_is_zero(&r)) {
    return 1;
  }
  if (!bn_is_less(&s, &curve->order) || bn_is_zero(&s)) {
    return 1;
  }
  // cp = R = k * G (k is secret nonce when signing)
  memcpy(&cp.x, &r, sizeof(bignum256));
  if (recid & 2) {
    bn_add(&cp.x, &curve->order);
    if (!bn_is_less(&cp.x, &curve->prime)) {
      return 1;
    }
  }
  // compute y from x
  uncompress_coords(curve, (uint8_t) (recid & 1), &cp.x, &cp.y);
  if (!ecdsa_validate_pubkey(curve, &cp)) {
    return 1;
  }
  // e = -digest
  bn_read_be(digest, &e);
  bn_subtractmod(&curve->order, &e, &e, &curve->order);
  bn_fast_mod(&e, &curve->order);
  bn_mod(&e, &curve->order);
  // r := r^-1
  bn_inverse(&r, &curve->order);
  // cp := s * R = s * k *G
  point_multiply(curve, &s, &cp, &cp);
  // cp2 := -digest * G
  scalar_multiply(curve, &e, &cp2);
  // cp := (s * k - digest) * G = (r*priv) * G = r * Pub
  point_add(curve, &cp2, &cp);
  // cp := r^{-1} * r * Pub = Pub
  point_multiply(curve, &r, &cp, &cp);
  pub_key[0] = 0x04;
  bn_write_be(&cp.x, pub_key + 1);
  bn_write_be(&cp.y, pub_key + 33);
  return 0;
}

// returns 0 if verification succeeded
int ecdsa_verify_digest(const ecdsa_curve *curve, const uint8_t *pub_key,
                        const uint8_t *sig, const uint8_t *digest) {
  curve_point pub = {}, res = {};
  bignum256 r = {}, s = {}, z = {};

  if (!ecdsa_read_pubkey(curve, pub_key, &pub)) {
    return 1;
  }

  bn_read_be(sig, &r);
  bn_read_be(sig + 32, &s);

  bn_read_be(digest, &z);

  if (bn_is_zero(&r) || bn_is_zero(&s) || (!bn_is_less(&r, &curve->order)) ||
      (!bn_is_less(&s, &curve->order)))
    return 2;

  bn_inverse(&s, &curve->order);       // s^-1
  bn_multiply(&s, &z, &curve->order);  // z*s^-1
  bn_mod(&z, &curve->order);
  bn_multiply(&r, &s, &curve->order);  // r*s^-1
  bn_mod(&s, &curve->order);

  int result = 0;
  if (bn_is_zero(&z)) {
    // our message hashes to zero
    // I don't expect this to happen any time soon
    result = 3;
  } else {
    scalar_multiply(curve, &z, &res);
  }

  if (result == 0) {
    // both pub and res can be infinity, can have y = 0 OR can be equal -> false
    // negative
    point_multiply(curve, &s, &pub, &pub);
    point_add(curve, &pub, &res);
    bn_mod(&(res.x), &curve->order);
    // signature does not match
    if (!bn_is_equal(&res.x, &r)) {
      result = 5;
    }
  }

  memzero(&pub, sizeof(pub));
  memzero(&res, sizeof(res));
  memzero(&r, sizeof(r));
  memzero(&s, sizeof(s));
  memzero(&z, sizeof(z));

  // all OK
  return result;
}

int ecdsa_sig_to_der(const uint8_t *sig, uint8_t *der) {
  int i = 0;
  uint8_t *p = der, *len = NULL, *len1 = NULL, *len2 = NULL;
  *p = 0x30;
  p++;  // sequence
  *p = 0x00;
  len = p;
  p++;  // len(sequence)

  *p = 0x02;
  p++;  // integer
  *p = 0x00;
  len1 = p;
  p++;  // len(integer)

  // process R
  i = 0;
  while (sig[i] == 0 && i < 32) {
    i++;
  }                      // skip leading zeroes
  if (sig[i] >= 0x80) {  // put zero in output if MSB set
    *p = 0x00;
    p++;
    *len1 = (uint8_t) (*len1 + 1);
  }
  while (i < 32) {  // copy bytes to output
    *p = sig[i];
    p++;
    *len1 = (uint8_t) (*len1 + 1);
    i++;
  }

  *p = 0x02;
  p++;  // integer
  *p = 0x00;
  len2 = p;
  p++;  // len(integer)

  // process S
  i = 32;
  while (sig[i] == 0 && i < 64) {
    i++;
  }                      // skip leading zeroes
  if (sig[i] >= 0x80) {  // put zero in output if MSB set
    *p = 0x00;
    p++;
    *len2 = (uint8_t) (*len2 + 1);
  }
  while (i < 64) {  // copy bytes to output
    *p = sig[i];
    p++;
    *len2 = (uint8_t) (*len2 + 1);
    i++;
  }

  *len = (uint8_t) (*len1 + *len2 + 4);
  return *len + 2;
}

// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#if defined(INSIDE_ENCLAVE)

CryptoRSA::CryptoRSA()
{
    m_initialized = init_mbedtls();
}

CryptoRSA::~CryptoRSA()
{
    cleanup_mbedtls();
}

/**
 * init_mbedtls initializes the crypto module.
 * mbedtls initialization. Please refer to mbedtls documentation for detailed
 * information about the functions used.
 */
bool CryptoRSA::init_mbedtls(void)
{
    bool ret = false;
    int res = -1;

    mbedtls_ctr_drbg_init(&m_ctr_drbg_contex);
    mbedtls_entropy_init(&m_entropy_context);
    mbedtls_pk_init(&m_pk_context);

    // Initialize entropy.
    res = mbedtls_ctr_drbg_seed(
        &m_ctr_drbg_contex, mbedtls_entropy_func, &m_entropy_context, NULL, 0);
    if (res != 0)
    {
        printf("mbedtls_ctr_drbg_seed failed.");
        goto exit;
    }

    // Initialize RSA context.
    res = mbedtls_pk_setup(
        &m_pk_context, mbedtls_pk_info_from_type(MBEDTLS_PK_RSA));
    if (res != 0)
    {
        printf("mbedtls_pk_setup failed (%d).", res);
        goto exit;
    }

    // Generate an ephemeral 2048-bit RSA key pair with
    // exponent 65537 for the enclave.
    res = mbedtls_rsa_gen_key(
        mbedtls_pk_rsa(m_pk_context),
        mbedtls_ctr_drbg_random,
        &m_ctr_drbg_contex,
        2048,
        65537);
    if (res != 0)
    {
        printf("mbedtls_rsa_gen_key failed (%d)\n", res);
        goto exit;
    }

    // Write out the public key in PEM format for exchange with other enclaves.
    res = mbedtls_pk_write_pubkey_pem(
        &m_pk_context, m_public_key, sizeof(m_public_key));
    if (res != 0)
    {
        printf("mbedtls_pk_write_pubkey_pem failed (%d)\n", res);
        goto exit;
    }
    ret = true;
    printf("mbedtls initialized.");
exit:
    return ret;
}

/**
 * mbedtls cleanup during shutdown.
 */
void CryptoRSA::cleanup_mbedtls(void)
{
    mbedtls_pk_free(&m_pk_context);
    mbedtls_entropy_free(&m_entropy_context);
    mbedtls_ctr_drbg_free(&m_ctr_drbg_contex);

    printf("mbedtls cleaned up.");
}

/**
 * Get the public key for this enclave.
 */
void CryptoRSA::retrieve_public_key(uint8_t pem_public_key[512])
{
    memcpy(pem_public_key, m_public_key, sizeof(m_public_key));
}

// Compute the sha256 hash of given data.
int CryptoRSA::Sha256(const uint8_t* data, size_t data_size, uint8_t sha256[32])
{
    int ret = 0;
    mbedtls_sha256_context ctx;

    mbedtls_sha256_init(&ctx);

    ret = mbedtls_sha256_starts_ret(&ctx, 0);
    if (ret)
        goto exit;

    ret = mbedtls_sha256_update_ret(&ctx, data, data_size);
    if (ret)
        goto exit;

    ret = mbedtls_sha256_finish_ret(&ctx, sha256);
    if (ret)
        goto exit;

exit:
    mbedtls_sha256_free(&ctx);
    return ret;
}

/**
 * Encrypt encrypts the given data using the given public key.
 * Used to encrypt data using the public key of another enclave.
 */
bool CryptoRSA::Encrypt(
    const uint8_t* pem_public_key,
    const uint8_t* data,
    size_t data_size,
    uint8_t* encrypted_data,
    size_t* encrypted_data_size)
{
    bool result = false;
    mbedtls_pk_context key;
    size_t key_size = 0;
    int res = -1;
    mbedtls_rsa_context* rsa_context;

    mbedtls_pk_init(&key);
    if (!m_initialized)
        goto exit;

    // Read the given public key.
    key_size = strlen((const char*)pem_public_key) + 1; // Include ending '\0'.
    res = mbedtls_pk_parse_public_key(&key, pem_public_key, key_size);
    if (res != 0)
    {
        printf("mbedtls_pk_parse_public_key failed.");
        goto exit;
    }

    rsa_context = mbedtls_pk_rsa(key);
    rsa_context->padding = MBEDTLS_RSA_PKCS_V21;
    rsa_context->hash_id = MBEDTLS_MD_SHA256;

    if (rsa_context->padding == MBEDTLS_RSA_PKCS_V21)
    {
        printf("Padding used: MBEDTLS_RSA_PKCS_V21 for OAEP or PSS");
    }

    if (rsa_context->padding == MBEDTLS_RSA_PKCS_V15)
    {
        printf("New MBEDTLS_RSA_PKCS_V15  for 1.5 padding");
    }

    // Encrypt the data.
    res = mbedtls_rsa_pkcs1_encrypt(
        mbedtls_pk_rsa(key),
        mbedtls_ctr_drbg_random,
        &m_ctr_drbg_contex,
        MBEDTLS_RSA_PUBLIC,
        data_size,
        data,
        encrypted_data);
    if (res != 0)
    {
        printf("mbedtls_rsa_pkcs1_encrypt failed with %d\n", res);
        goto exit;
    }

    *encrypted_data_size = mbedtls_pk_rsa(key)->len;
    result = true;
exit:
    mbedtls_pk_free(&key);
    return result;
}

/**
 * decrypt the given data using current enclave's private key.
 * Used to receive encrypted data from another enclave.
 */
bool CryptoRSA::decrypt(
    const uint8_t* encrypted_data,
    size_t encrypted_data_size,
    uint8_t* data,
    size_t* data_size)
{
    bool ret = false;
    size_t output_size = 0;
    int res = 0;
    mbedtls_rsa_context* rsa_context;

    if (!m_initialized)
        goto exit;

    mbedtls_pk_rsa(m_pk_context)->len = encrypted_data_size;
    rsa_context = mbedtls_pk_rsa(m_pk_context);
    rsa_context->padding = MBEDTLS_RSA_PKCS_V21;
    rsa_context->hash_id = MBEDTLS_MD_SHA256;

    output_size = *data_size;
    res = mbedtls_rsa_pkcs1_decrypt(
        rsa_context,
        mbedtls_ctr_drbg_random,
        &m_ctr_drbg_contex,
        MBEDTLS_RSA_PRIVATE,
        &output_size,
        encrypted_data,
        data,
        output_size);
    if (res != 0)
    {
        printf("mbedtls_rsa_pkcs1_decrypt failed with %d\n", res);
        goto exit;
    }
    *data_size = output_size;
    ret = true;

exit:
    return ret;
}

bool CryptoRSA::get_rsa_modulus_from_pem(
    const char* pem_data,
    size_t pem_size,
    uint8_t** modulus,
    size_t* modulus_size)
{
    mbedtls_pk_context ctx;
    mbedtls_pk_type_t pk_type;
    mbedtls_rsa_context* rsa_ctx = NULL;
    uint8_t* modulus_local = NULL;
    size_t modulus_local_size = 0;
    int res = 0;
    bool ret = false;

    if (!m_initialized || !modulus || !modulus_size)
        goto exit_preinit;

    mbedtls_pk_init(&ctx);
    res = mbedtls_pk_parse_public_key(
        &ctx, (const unsigned char*)pem_data, pem_size);
    if (res != 0)
    {
        printf("mbedtls_pk_parse_public_key failed with %d\n", res);
        goto exit;
    }

    pk_type = mbedtls_pk_get_type(&ctx);
    if (pk_type != MBEDTLS_PK_RSA)
    {
        printf("mbedtls_pk_get_type had incorrect type: %d\n", res);
        goto exit;
    }

    rsa_ctx = mbedtls_pk_rsa(ctx);
    modulus_local_size = mbedtls_rsa_get_len(rsa_ctx);
    modulus_local = (uint8_t*)malloc(modulus_local_size);
    if (modulus_local == NULL)
    {
        printf(
            "malloc for modulus failed with size %zu:\n", modulus_local_size);
        goto exit;
    }

    res = mbedtls_rsa_export_raw(
        rsa_ctx,
        modulus_local,
        modulus_local_size,
        NULL,
        0,
        NULL,
        0,
        NULL,
        0,
        NULL,
        0);
    if (res != 0)
    {
        printf("mbedtls_rsa_export failed with %d\n", res);
        goto exit;
    }

    *modulus = modulus_local;
    *modulus_size = modulus_local_size;
    modulus_local = NULL;
    ret = true;

exit:
    if (modulus_local != NULL)
        free(modulus_local);

    mbedtls_pk_free(&ctx);

exit_preinit:
    return ret;
}

//CryptoRSA *p_cryptoRSA = new CryptoRSA();

#endif

/*
    API message format.

    {
        "call": "...",
        "params": {},
        "reply_mode": "long_poll",
        "nonce": "large rand no",
        "enclave_report": "attest [nonce] + [pub]... hex",
        "auth": {
            "pub": "... hex",
            "demo": 1
        }
    } client_pub_sig


    {
        "payload": "... above encoded somehow?",
        "nonce": "large rand no"
        ... bloom filters?
    } switch_board_sig

- enclave report is ~4595 bytes

*/


bool set_json_offsets(char **json_str, size_t *size)
{
    // Find first {
    char *json_start = 0;
    size_t start_offset = 0;
    for(; start_offset < *size; start_offset++)
    {
        if((*json_str)[start_offset] == '{')
        {
            json_start = &((*json_str)[start_offset]);
            break;
        }
    }

    if(!json_start)
    {
        return false;
    }

    // Find last }
    char *json_end = 0;
    size_t new_size = 0;
    for(size_t i = *size - 1; i; i--)
    {
        if((*json_str)[i] == '}')
        {
            json_end = &((*json_str)[i]);
            new_size = (i + 1) - (start_offset + 1);
            break;
        }
    }

    // Didn't find.
    if(!json_end)
    {
        return false;
    }

    // Update pointers.
    *size = new_size;
    *json_str = json_start;

    return true;
}

// include rand nonce
uint8_t *sign_json_payload(char *json_str, size_t size, uint8_t *priv_key)
{
    // Sha256 hash JSON message.
    uint8_t digest[32 + 1] = {};
    sha256(digest, (unsigned char *) json_str, size);
    ////printf("json msg digest = \r\n");
    //hex_print(digest, 32);

    ////printf("Priv key = \r\n");
    //hex_print(priv_key, 32);

    // Sign json.
    uint8_t sig_bytes[64 + 1] = {};
    uint8_t pby = 0;
    if(ecdsa_sign_digest(&secp256k1, priv_key, &digest[0], &sig_bytes[0], &pby, 0) != 0)
    {
        return 0;
    }

    // Alloc space for sig hex.
    uint8_t *sig_hex = (uint8_t *) calloc(128 + 1, 1);
    if(!sig_hex)
    {
        return 0;
    }

    // Convert sig bytes to hex.
    if(!bytes_to_hex(&sig_bytes[0], 64, &sig_hex[0], 129))
    {
        return 0;
    }

    return sig_hex;
}

bool valid_json_sig(char *json_str, size_t size, StrMap* p_json)
{
    // Get sig offsets.
    size_t sig_len = 0;
    size_t sig_end_offset = 0;
    char *sig = 0;
    for(size_t i = size - 1; i; i--)
    {
        if(!is_whitespace(json_str[i]))
        {
            sig_end_offset = i;
            break;
        }
    }

    for (size_t i = sig_end_offset; i; i--)
    {
        if(is_whitespace(json_str[i]) || json_str[i] == '}')
        {
            if(i + 1 < size)
            {
                sig = &json_str[i + 1];
                sig_len = 128;
                break;
            }
        }
    }

    if(!sig)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("sig not found.");
        #endif
        return 0;
    }

    json_str[size] = '\0';

    ////printf("api validate sig size = %d \r\n", size);
    ////printf("api msg sig hex %s \r\n", sig);
    ////printf("api msg sig len %d \r\n", strlen(sig));
    ////printf("api msg sig len pointer math %d \r\n", sig_len);
    ////printf("api sig = '%s' \r\n", sig);


    // Convert sig hex to bytes.
    uint8_t sig_bytes[64 + 1] = {};
    if(!hexstr_to_bytes(sig, sig_len, sig_bytes, 65))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("failed to convert sig to bytes.");
        #endif
        return 0;
    }


    //printf("size provided %d \r\n", size);
    //printf("hash len bytes %d \r\n", size - 128);

    // Hash json.
    uint8_t digest[32 + 1] = {};
    sha256(digest, (unsigned char *) json_str, size - 128);
    // ^ appears to hash the sig too.

    //printf("after sha hash \r\n.");



    //printf("before pub get \r\n.");

    // Pull pub key from json..
    uint8_t pub_key[33 + 1] = {};
    char json_key[] = "[auth][pub]";
    void *json_result = map_get(p_json, (const char *) &json_key[0]);
    if(!json_result)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("failed to get auth pub.");
        #endif
        return 0;
    }

        //printf("after pub get \r\n.");


    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
    if(json_expr->type != JSON_str)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("expr not str in auth pub.");
        #endif
        return 0;
    }

    //printf("before pub to bytes \r\n.");

    // Convert pub key to bytes.
    if(!hexstr_to_bytes(
            (char *) &json_expr->p_str[0],
            strlen((char *) &json_expr->p_str[0]),
            pub_key, 34))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("cant convert hex str to bytes. \r\n");
        #endif
        return 0;
    }

    // Convert sig to bytes.
    if(!hexstr_to_bytes(sig, sig_len, sig_bytes, 65))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("cant convert sig to bytes.");
        #endif
        return 0;
    }

    //printf("before ecdsa verify digest \r\n.");

    hex_print(digest, 32);

    // Validate sig against hash and pub key.
    int status = ecdsa_verify_digest(&secp256k1, &pub_key[0], &sig_bytes[0], &digest[0]);
    if(!status)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("sig verify digest success.");
        #endif
        return 1;
    }
    else
    {
        //printf("failed ecdsa verify !!! %d \r\n", status);
        return 0;
    }

}

// 32 byte c str, 33 byte c str, 32 byte output buf.
int calc_challenge_hash(uint8_t *nonce_buf, uint8_t *pub_key_buf, uint8_t *challenge_hash)
{
    uint8_t challenge_buf[32 + 33 + 1] = {};
    size_t challenge_buf_size = 32 + 33 + 1;

    memcpy(challenge_buf, nonce_buf, 32);
    memcpy(&challenge_buf[32], pub_key_buf, 33);

    sha256(challenge_hash, challenge_buf, challenge_buf_size - 1);
    return 0;
}

#if defined(INSIDE_ENCLAVE)

    uint8_t *pem_pub_to_mr_signer(uint8_t *pub_pem_buf, size_t pub_pem_len, uint8_t *mr_signer_out)
    {
        uint8_t* modulus = NULL;
        size_t modulus_size = 0;
        bool success = false;

        // Mbed tls.
        CryptoRSA *p_cryptoRSA = new CryptoRSA();
        if (p_cryptoRSA == NULL)
        {
            goto pem_to_mr_cleanup;
        }

        // Extract modulus from raw PEM.
        if (!p_cryptoRSA->get_rsa_modulus_from_pem(
                (char *) pub_pem_buf,
                pub_pem_len,
                &modulus,
                &modulus_size))
        {
            goto pem_to_mr_cleanup;
        }

        // Reverse the modulus and compute sha256 on it.
        for (size_t i = 0; i < modulus_size / 2; i++)
        {
            uint8_t tmp = modulus[i];
            modulus[i] = modulus[modulus_size - 1 - i];
            modulus[modulus_size - 1 - i] = tmp;
        }

        // Calculate the MRSIGNER value which is the SHA256 hash of the
        // little endian representation of the public key modulus. This value
        // is populated by the signer_id sub-field of a parsed oe_report_t's
        // identity field.
        if (p_cryptoRSA->Sha256(modulus, modulus_size, mr_signer_out) != 0)
        {
            goto pem_to_mr_cleanup;
        }

        success = true;
        pem_to_mr_cleanup:
            if(p_cryptoRSA)
            {
                delete p_cryptoRSA;
            }

            if(modulus)
            {
                free(modulus);
            }

        if(success)
        {
            return mr_signer_out;
        }

        return 0;
    }

#endif

// "params": {},
// ^ json heap corruption?
// Todo: signing needs to be done with bytes not hashes!
bool verify_api_message(char *msg_buf, size_t msg_len, uint8_t* pub_pem_buf, size_t pub_pem_len)
{
    if(msg_buf)
    {
        //printf("msg buf is tru \r\n");
        //printf("%d provided len is \r\n", msg_len);
        //printf("msg buf[0] is %c \r\n", msg_buf[0]);
    }

    bool msg_is_valid = false;
    bool valid_user_pub_sig = false;
    char *json_str = 0;
    StrMap *p_json_map = 0;
    uint8_t *p_report = 0;
    char *nonce_hex = 0;
    char *pub_key_hex = 0;
    char *report_hex = 0;
    uint8_t nonce_buf[32 + 1] = {};
    uint8_t pub_key_buf[33 + 1] = {};
    uint8_t challenge_hash[32 + 1] = {};
    uint8_t our_mrsigner[32 + 1] = {};
    size_t report_hex_len = 0;
    size_t report_size = 0;

    #if defined(INSIDE_ENCLAVE)
        oe_report_t parsed_report = {0};
        oe_result_t result = OE_OK;
    #endif

    // Allocate clean message buffer for json parser
    // so that json func doesn't touch input str.
    json_str = (char *) calloc((msg_len + 1), sizeof(char));
    if(json_str == NULL)
    {
        goto cleanup_api_verify;
    }
    memcpy(json_str, msg_buf, msg_len - 128);


    //printf("str len json str = %d \r\n", strlen((char *) json_str));

    // Assigned mapped json key value pairs to hashmap.
    p_json_map = json_decode(json_str, strlen((char *) json_str));
    if(!p_json_map)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json decode returned 0. \r\n");
        #endif

        goto cleanup_api_verify;
    }

    //printf("verify msg len = %d \r\n\r\n", msg_len);
    //printf("%s", msg_buf);

    // Check provided ECDSA sig matches pub key inside msg.
    valid_user_pub_sig = valid_json_sig(msg_buf, msg_len, p_json_map);
    if(!valid_user_pub_sig)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json sig not valid. \r\n");
        #endif

        goto cleanup_api_verify;
    }
    else
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json sig valid ! \r\n");
        #endif
    }


    // Validate enclave report.
    #if defined(INSIDE_ENCLAVE)
        // Get nonce.
        nonce_hex = get_json_str(p_json_map, "[nonce]", 64);
        if(!nonce_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("nonce not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Convert nonce hex back to bytes.
        if(hexstr_to_bytes(nonce_hex, 64, nonce_buf, 33) != 32)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("nonce to bytes failed. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Get their pub key hex.
        pub_key_hex = get_json_str(p_json_map, "[auth][pub]", 66);
        if(!pub_key_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("pub key not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Convert their pub key back to bytes.
        if(hexstr_to_bytes(pub_key_hex, 66, pub_key_buf, 34) != 33)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("pub hex to bytes failed. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Generate challenge value passed to enclave report.
        assert(sizeof(nonce_buf) >= 32);
        assert(sizeof(pub_key_buf) == 34);
        if(calc_challenge_hash((uint8_t *) nonce_buf, (uint8_t *) pub_key_buf, challenge_hash))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot calc challenge hash. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Get report.
        report_hex = get_json_str(p_json_map, "[enclave_report]");
        if(!report_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("enclave report not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }
        else
        {
            report_hex_len = strlen(report_hex);
            if(!report_hex_len)
            {
                #if defined(DEBUG_API_VERIFY)
                    //printf("report len blank. \r\n");
                #endif

                goto cleanup_api_verify;
            }

            if(report_hex_len % 2)
            {
                #if defined(DEBUG_API_VERIFY)
                    //printf("odd report hex len. \r\n");
                #endif

                goto cleanup_api_verify;
            }
        }

        //printf("GOT REPORT HEX = '%s' \r\n", report_hex);
        //printf("report hex len = '%d' \r\n", report_hex_len);

        // Convert report back to bytes.
        report_size = report_hex_len / 2;
        p_report = (uint8_t *) calloc(report_size + 1, sizeof(uint8_t) );
        if(p_report == NULL)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("convert alloc p report bytes. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        if(!hexstr_to_bytes(report_hex, report_hex_len, (unsigned char *) p_report, report_size + 1))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("convert report hex to bytes. \r\n");
            #endif

            goto cleanup_api_verify;
        }


        // While attesting, the report being attested must not be tampered
        // with. Ensure that it has been copied over to the enclave.
        if (!oe_is_within_enclave(p_report, report_size))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("not within enclave. \r\n");
            #endif
            TRACE_ENCLAVE("Cannot attest report in host memory. Unsafe. \r\n");

            goto cleanup_api_verify;
        }

        TRACE_ENCLAVE("report_size = %ld \r\n", report_size);
        if(p_report)
        {
            //printf("p report is true \r\n");
        }

        // Parse received report.
        result = oe_verify_report(p_report, report_size, &parsed_report);
        if (result != OE_OK)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("oe verify report failed. \r\n");
            #endif
            TRACE_ENCLAVE("oe_verify_report failed (%s).\n", oe_result_str(result));

            goto cleanup_api_verify;
        }
        else
        {
            //printf("REPORT VALIDATED !!!!! \a \r\n");
        }

        //printf("enclave pem pub here = '%s'", pub_pem_buf);

        // Convert our public key pem to mr signer.
        if(!pem_pub_to_mr_signer(pub_pem_buf, pub_pem_len, &our_mrsigner[0]))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot get mr signer. \r\n");
            #endif
            goto cleanup_api_verify;
        }

        // 2) validate the enclave identity's signed_id is the hash of the public
        // signing key that was used to sign an enclave. Check that the enclave was
        // signed by an trusted entity.
        if (memcmp(parsed_report.identity.signer_id, our_mrsigner, 32) != 0)
        {
            hex_print(parsed_report.identity.signer_id, 32);
            //printf("\r\n\r\n");
            hex_print(our_mrsigner, 32);

            #if defined(DEBUG_API_VERIFY)
                //printf("signer id is wrong. \r\n");
            #endif
            TRACE_ENCLAVE("identity.signer_id checking failed. \r\n");

            goto cleanup_api_verify;
        }

        // Validate report data challenge hash.
        if (memcmp(parsed_report.report_data, challenge_hash, 32) != 0)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("report data challenge hash is wrong. \r\n");
            #endif
            TRACE_ENCLAVE("SHA256 mismatch.");

            goto cleanup_api_verify;
        }
    #endif

    msg_is_valid = true;
    cleanup_api_verify:
        if(p_json_map)
        {
            map_destroy(p_json_map);
        }

        if(json_str)
        {
            free(json_str);
        }

        if(p_report)
        {
            free(p_report);
        }

    return msg_is_valid;
}

// Todo: lets move the report part to its own api call for pub key challenge
// Todo: add verify
// response format?
// seperate bellow into reusable funcs more.
char *api_message(
    const char *call,
    char *params_buf, size_t params_len,
    uint8_t *secp256k1_priv_b32,
    unsigned int demo,
    uint8_t *target_info_buf, size_t target_info_size,
    const char *reply_mode)
{
    uint8_t *api_msg_buf = 0;
    uint8_t secp256k1_pub_key[33 + 1] = {};
    uint8_t pub_key_hex[66 + 1] = {};
    uint8_t nonce[32 + 1] = {};
    uint8_t nonce_hex[64 + 1] = {};
    uint8_t challenge_hash[32 + 1] = {};
    size_t report_size = 0;
    uint8_t *p_report_buf = NULL;
    uint8_t *p_report_hex = NULL;
    uint8_t *hex_sig = NULL;
    size_t api_msg_len = 0;
    size_t api_msg_size = 0;

    // Layout of what an API message looks like.
    const char api_msg_format[] = 
    "{"
    "    \"call\": \"%s\","
    "    \"params\": \"%s\","
    "    \"reply_mode\": \"%s\","
    "    \"nonce\": \"%s\","
    "    \"enclave_report\": \"%s\","
    "    \"auth\": {"
    "        \"pub\": \"%s\","
    "        \"demo\": \"%d\""
    "    }"
    "}";

    #if defined(INSIDE_ENCLAVE)
        // Set enclave report type.
        #if defined(USE_LOCAL_REPORT)
            const uint32_t oe_report_flags = 0;
            //printf("get local report \r\n \a");

        #else
            const uint32_t oe_report_flags = OE_REPORT_FLAGS_REMOTE_ATTESTATION;
        #endif

        oe_result_t get_report_ret;
        size_t report_hex_size = 0;
    #endif

    // Get ECDSA pub key.
    ecdsa_get_public_key33(&secp256k1, &secp256k1_priv_b32[0], &secp256k1_pub_key[0]);
    if(!bytes_to_hex(&secp256k1_pub_key[0], 33, pub_key_hex, 67))
    {
        goto cleanup_api_msg;
    }

    //printf("last pub value %d \r\n", (int) secp256k1_pub_key[32]);

    // Get message nonce.
    rand_bytes((unsigned char *) &nonce, 32);
    if(!bytes_to_hex(&nonce[0], 32, nonce_hex, 65))
    {
        goto cleanup_api_msg;
    }

    // Generate challenge buf
    // Enclave attest report signs this if it's defined.
    assert(sizeof(nonce) >= 32);
    assert(sizeof(secp256k1_pub_key) == 34);
    if(calc_challenge_hash(nonce, secp256k1_pub_key, challenge_hash))
    {
        goto cleanup_api_msg;
    }

    // Calculate enclave report.
    #if defined(INSIDE_ENCLAVE)
        // Get enclave report.
        get_report_ret = oe_get_report(
            oe_report_flags,
            challenge_hash, // Store sha256 in report_data field
            32,
            target_info_buf, // opt_params must be null
            target_info_size,
            &p_report_buf,
            &report_size);
        if (get_report_ret != OE_OK)
        {
            //printf("oe_get_report failed. \r\n");
            goto cleanup_api_msg;
        }

        //printf("GOT REPORT SIZE %d \r\n", report_size);

        // Allocate space to store report as hex.
        report_hex_size = (report_size * 2) + 1;
        p_report_hex = (uint8_t *) calloc(
            report_hex_size,
            sizeof(uint8_t)
        );
        if(p_report_hex == NULL)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot alloc bytes for report hex \r\n");
            #endif

            goto cleanup_api_msg;
        }

        // Store remote report buf as hex.
        if(!bytes_to_hex(
                p_report_buf, report_size,
                p_report_hex, report_hex_size))
        {
            //printf("cant turn report to hex \r\n");
            goto cleanup_api_msg;
        }

        //printf("aa \r\n");
    #else
        //printf("skipping p report gen \r\n");
        p_report_hex = (uint8_t *) calloc(2, 1);
        p_report_hex[0] = '0';
    #endif

    // Calculate storage space requirements.
    api_msg_size = (
        strlen(api_msg_format) +
        strlen(call) +
        params_len +
        strlen(reply_mode) +
        64 + // Nonce (in hex).
        strlen((char *) p_report_hex) + // report
        66 + // Pub key (in hex)
        sizeof(unsigned int) + // Demo or production.
        1 + // white space
        128 + // Sig (in hex)
        1 + // null.
        10 // Space for null and extra.
    );

    // Allocate storage space.
    api_msg_buf = (uint8_t *) calloc(api_msg_size, sizeof(uint8_t));

    // Write fields to buf.
    /*
    s_sprintf(
        (char *) api_msg_buf, api_msg_size,
        api_msg_format, api_msg_size - 11,
            call,
            params_buf,
            reply_mode,
            nonce_hex,
            p_report_hex,
            pub_key_hex,
            demo
    );
    */


    snprintf(
        (char *) api_msg_buf, api_msg_size - 10,
        api_msg_format,
            call,
            params_buf,
            reply_mode,
            nonce_hex,
            p_report_hex,
            pub_key_hex,
            demo
    );


    // Sign json.
    api_msg_len = strlen((char *) api_msg_buf);
    hex_sig = sign_json_payload(
        (char *) api_msg_buf, api_msg_len, secp256k1_priv_b32);

    //printf("API msg len = %d \r\n", api_msg_len);

    // Write sig to end of message.
    assert(api_msg_len < api_msg_size);
    assert(api_msg_len + 128 < api_msg_size);
    memcpy(&api_msg_buf[api_msg_len], &hex_sig[0], 128);
    api_msg_buf[api_msg_len + 128] = '\0';

    // Cleanup temp memory.
    cleanup_api_msg:
        #if defined(INSIDE_ENCLAVE)
            if(p_report_buf)
            {
                oe_free_report(p_report_buf);
            }
        #endif

        if(p_report_hex)
        {
            free(p_report_hex);
        }

        if(hex_sig)
        {
            free(hex_sig);
        }

    // Return final signed message with any attached enclave reports.
    return (char *) api_msg_buf;
}

#include <stdarg.h>
#include <cstdarg>

typedef int wby__check_ptr_size[(sizeof(void*) == sizeof(WBY_UINT_PTR)) ? 1 : -1];
#define WBY_LEN(a) (sizeof(a)/sizeof((a)[0]))
#define WBY_UNUSED(a) ((void)(a))

#ifdef WBY_USE_ASSERT
#ifndef WBY_ASSERT
#include <assert.h>
#define WBY_ASSERT(expr) assert(expr)
#endif
#else
#define WBY_ASSERT(expr)
#endif


#define WBY_SOCK(s) (s)
#define WBY_INTERN static
#define WBY_GLOBAL static
#define WBY_STORAGE static

/* ===============================================================
 *                          UTIL
 * ===============================================================*/


WBY_API void
wby_dbg(wby_log_f log, const char *fmt, ...)
{
	#include <stdarg.h>
	#include <cstdarg>

    char buffer[1024];
    va_list args;
    if (!log) return;

    va_start(args, fmt);
    vsnprintf(buffer, sizeof buffer, fmt, args);
    va_end(args);
    buffer[(sizeof buffer)-1] = '\0';
    log(buffer);
}

WBY_INTERN int
wb_peek_request_size(const wby_byte *buf, int len)
{
    int i;
    int max = len - 3;
    for (i = 0; i < max; ++i) {
        if ('\r' != buf[i + 0]) continue;
        if ('\n' != buf[i + 1]) continue;
        if ('\r' != buf[i + 2]) continue;
        if ('\n' != buf[i + 3]) continue;
        /* OK; we have CRLFCRLF which indicates the end of the header section */
        return i + 4;
    }
    return -1;
}

WBY_INTERN char*
wby_skipws(char *p)
{
    for (;;) {
        char ch = *p;
        if (' ' == ch || '\t' == ch) ++p;
        else break;
    }
    return p;
}

#define WBY_TOK_SKIPWS WBY_FLAG(0)
WBY_INTERN int
wby_tok_inplace(char *buf, const char* separator, char *tokens[], int max, int flags)
{
    char *b = buf;
    char *e = buf;
    int token_count = 0;
    int separator_len = (int)strlen(separator);
    while (token_count < max) {
        if (flags & WBY_TOK_SKIPWS)
            b = wby_skipws(b);
        if (NULL != (e = strstr(b, separator))) {
            int len = (int) (e - b);
            if (len > 0)
                tokens[token_count++] = b;
            *e = '\0';
            b = e + separator_len;
        } else {
            tokens[token_count++] = b;
            break;
        }
    }
    return token_count;
}

WBY_INTERN wby_size
wby_make_websocket_header(wby_byte buffer[10], wby_byte opcode,
    int payload_len, int fin)
{
    buffer[0] = (wby_byte)((fin ? 0x80 : 0x00) | opcode);
    if (payload_len < 126) {
        buffer[1] = (wby_byte)(payload_len & 0x7f);
        return 2;
    } else if (payload_len < 65536) {
        buffer[1] = 126;
        buffer[2] = (wby_byte)(payload_len >> 8);
        buffer[3] = (wby_byte)payload_len;
        return 4;
    } else {
        buffer[1] = 127;
        /* Ignore high 32-bits. I didn't want to require 64-bit types and typdef hell in the API. */
        buffer[2] = buffer[3] = buffer[4] = buffer[5] = 0;
        buffer[6] = (wby_byte)(payload_len >> 24);
        buffer[7] = (wby_byte)(payload_len >> 16);
        buffer[8] = (wby_byte)(payload_len >> 8);
        buffer[9] = (wby_byte)payload_len;
        return 10;
    }
}

WBY_INTERN int
wby_read_buffered_data(int *data_left, struct wby_buffer* buffer,
    char **dest_ptr, wby_size *dest_len)
{
    int offset, read_size;
    int left = *data_left;
    int len;
    if (left == 0)
        return 0;

    len = (int) *dest_len;
    offset = (int)buffer->used - left;
    read_size = (len > left) ? left : len;
    memcpy(*dest_ptr, buffer->data + offset, (wby_size)read_size);

    (*dest_ptr) += read_size;
    (*dest_len) -= (wby_size) read_size;
    (*data_left) -= read_size;
    return read_size;
}

/* ---------------------------------------------------------------
 *                          SOCKET
 * ---------------------------------------------------------------*/
#ifdef _WIN32
//#include <winsock2.h>
//#pragma comment(lib, "Ws2_32.lib")





typedef int wby_socklen;
typedef char wby_sockopt;

#if defined(__GNUC__)
#define WBY_ALIGN(x) __attribute__((aligned(x)))
#else
#define WBY_ALIGN(x) __declspec(align(x))
#endif


#ifdef __APPLE__
	#define WBY_INVALID_SOCKET -1
#else
	#define WBY_INVALID_SOCKET 0
#endif

#define snprintf _snprintf

WBY_INTERN int
wby_socket_error(void)
{
    return WSAGetLastError();
}

#if !defined(__GNUC__)
WBY_INTERN int
strcasecmp(const char *a, const char *b)
{
    return _stricmp(a, b);
}

WBY_INTERN int
strncasecmp(const char *a, const char *b, wby_size len)
{
    return _strnicmp(a, b, len);
}
#endif

WBY_INTERN int
wby_socket_set_blocking(wby_socket socket, int blocking)
{
    u_long val = !blocking;
    return ioctlsocket(socket, FIONBIO, &val);
}

WBY_INTERN int
wby_socket_is_valid(wby_socket socket)
{

	return (socket >= 1);

}

WBY_INTERN void
wby_socket_close(wby_socket socket)
{
    closesocket(socket);
}

WBY_INTERN int
wby_socket_is_blocking_error(int error)
{
    return WSAEWOULDBLOCK == error;
}

#else /* UNIX */

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <strings.h>


typedef socklen_t wby_socklen;
typedef int wby_sockopt;

#define WBY_ALIGN(x) __attribute__((aligned(x)))
#define WBY_INVALID_SOCKET (0)

WBY_INTERN int
wby_socket_error(void)
{
    return errno;
}

WBY_INTERN int
wby_socket_is_valid(wby_socket socket)
{
	#ifdef __APPLE__
    	return (socket >= 0);
	#else
		return (socket >= 1);
	#endif
}

WBY_INTERN void
wby_socket_close(wby_socket socket)
{
    close((int) socket);
}

WBY_INTERN int
wby_socket_is_blocking_error(int error)
{
    return (EAGAIN == error);
}

WBY_INTERN int
wby_socket_set_blocking(wby_socket socket, int blocking)
{
    int flags = fcntl((int) socket, F_GETFL, 0);
    if (flags < 0) return flags;
    flags = blocking ? (flags & ~O_NONBLOCK) : (flags | O_NONBLOCK);
    return fcntl((int) socket, F_SETFL, flags);
}
#endif

WBY_INTERN int
wby_socket_config_incoming(wby_socket socket)
{
    wby_sockopt off = 0;
    int err;
    if ((err = wby_socket_set_blocking(socket, 0)) != WBY_OK) return err;
    setsockopt((wby_socket_cast) socket, SOL_SOCKET, SO_LINGER, (const char*) &off, sizeof(int));
    return 0;
}

WBY_INTERN int
wby_socket_send(wby_socket socket, const wby_byte *buffer, int size)
{
    while (size > 0) {
        long err = send((wby_socket_cast) socket, (const char*)buffer, (wby_size_cast) size, 0);
        if (err <= 0) return 1;
        buffer += err;
        size -= (int)err;
    }
    return 0;
}

/* Read as much as possible without blocking while there is buffer space. */
enum {WBY_FILL_OK, WBY_FILL_ERROR, WBY_FILL_FULL};
WBY_INTERN int
wby_socket_recv(wby_socket socket, struct wby_buffer *buf, wby_log_f log)
{
    long err;
    int buf_left;
    for (;;) {
        buf_left = (int) ((int) buf->max - (int)buf->used);
        wby_dbg(log, "buffer space left = %d", buf_left);
        if (buf_left == 0)
            return WBY_FILL_FULL;

        /* Read what we can into the current buffer space. */
        err = recv((wby_socket_cast) socket, (char*)buf->data + buf->used, (wby_size_cast) buf_left, 0);
        if (err < 0) {
            int sock_err = wby_socket_error();
            if (wby_socket_is_blocking_error(sock_err)) {
                return WBY_FILL_OK;
            } else {
                /* Read error. Give up. */
                wby_dbg(log, "read error %d - connection dead", sock_err);
                return WBY_FILL_ERROR;
            }
        } else if (err == 0) {
          /* The peer has closed the connection. */
          wby_dbg(log, "peer has closed the connection");
          return WBY_FILL_ERROR;
        } else buf->used += (wby_size)err;
    }
}

WBY_INTERN int
wby_socket_flush(wby_socket socket, struct wby_buffer *buf)
{
    if (buf->used > 0){
        if (wby_socket_send(socket, buf->data, (int)buf->used) != WBY_OK)
            return 1;
    }
    buf->used = 0;
    return 0;
}

/* ---------------------------------------------------------------
 *                          URL
 * ---------------------------------------------------------------*/
/* URL-decode input buffer into destination buffer.
 * 0-terminate the destination buffer. Return the length of decoded data.
 * form-url-encoded data differs from URI encoding in a way that it
 * uses '+' as character for space, see RFC 1866 section 8.2.1
 * http://ftp.ics.uci.edu/pub/ietf/html/rfc1866.txt
 *
 * This bit of code was taken from mongoose.
 */
WBY_INTERN wby_size
wby_url_decode(const char *src, wby_size src_len, char *dst, wby_size dst_len,
    int is_form_url_encoded)
{
    int a, b;
    wby_size i, j;
    #define HEXTOI(x) (isdigit(x) ? x - '0' : x - 'W')
    for (i = j = 0; i < src_len && j < dst_len - 1; i++, j++) {
        if (src[i] == '%' &&
            isxdigit(*(const wby_byte*)(src + i + 1)) &&
            isxdigit(*(const wby_byte*)(src + i + 2)))
        {
            a = tolower(*(const wby_byte*)(src + i + 1));
            b = tolower(*(const wby_byte*)(src + i + 2));
            dst[j] = (char)((HEXTOI(a) << 4) | HEXTOI(b));
            i += 2;
        } else if (is_form_url_encoded && src[i] == '+') {
            dst[j] = ' ';
        } else dst[j] = src[i];
    }
    #undef HEXTOI
    dst[j] = '\0'; /* Null-terminate the destination */
    return j;
}

/* Pulled from mongoose */
int
wby_find_query_var(const char *buf, const char *name, char *dst, wby_size dst_len)
{
    const char *p, *e, *s;
    wby_size name_len;
    int len;
    wby_size buf_len = strlen(buf);

    name_len = strlen(name);
    e = buf + buf_len;
    len = -1;
    dst[0] = '\0';

    /* buf is "var1=val1&var2=val2...". Find variable first */
    for (p = buf; p != NULL && p + name_len < e; p++) {
        if ((p == buf || p[-1] == '&') && p[name_len] == '=' &&
            strncasecmp(name, p, name_len) == 0)
        {
            /* Point p to variable value */
            p += name_len + 1;
            /* Point s to the end of the value */
            s = (const char *) memchr(p, '&', (wby_size)(e - p));
            if (s == NULL) s = e;
            WBY_ASSERT(s >= p);
            /* Decode variable into destination buffer */
            if ((wby_size) (s - p) < dst_len)
                len = (int)wby_url_decode(p, (wby_size)(s - p), dst, dst_len, 1);
            break;
        }
    }
    return len;
}

/* ---------------------------------------------------------------
 *                          BASE64
 * ---------------------------------------------------------------*/
#define WBY_BASE64_QUADS_BEFORE_LINEBREAK 19

WBY_INTERN wby_size
wby_base64_bufsize(wby_size input_size)
{
    wby_size triplets = (input_size + 2) / 3;
    wby_size base_size = 4 * triplets;
    wby_size line_breaks = 2 * (triplets / WBY_BASE64_QUADS_BEFORE_LINEBREAK);
    wby_size null_termination = 1;
    return base_size + line_breaks + null_termination;
}

WBY_INTERN int
wby_base64_encode(char* output, wby_size output_size,
    const wby_byte *input, wby_size input_size)
{
    wby_size i = 0;
    int line_out = 0;
    WBY_STORAGE const char enc[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/=";
    if (output_size < wby_base64_bufsize(input_size))
        return 1;

    while (i < input_size) {
        unsigned int idx_0, idx_1, idx_2, idx_3;
        unsigned int i0;

        i0 = (unsigned int)(input[i]) << 16; i++;
        i0 |= (unsigned int)(i < input_size ? input[i] : 0) << 8; i++;
        i0 |= (i < input_size ? input[i] : 0); i++;

        idx_0 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_1 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_2 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_3 = (i0 & 0xfc0000) >> 18;

        if (i - 1 > input_size) idx_2 = 64;
        if (i > input_size) idx_3 = 64;

        *output++ = enc[idx_0];
        *output++ = enc[idx_1];
        *output++ = enc[idx_2];
        *output++ = enc[idx_3];

        if (++line_out == WBY_BASE64_QUADS_BEFORE_LINEBREAK) {
          *output++ = '\r';
          *output++ = '\n';
        }
    }
    *output = '\0';
    return 0;
}

/* ---------------------------------------------------------------
 *                          SHA1
 * ---------------------------------------------------------------*/
struct wby_sha1 {
    unsigned int state[5];
    unsigned int msg_size[2];
    wby_size buf_used;
    wby_byte buffer[64];
};

WBY_INTERN unsigned int
wby_sha1_rol(unsigned int value, unsigned int bits)
{
    return ((value) << bits) | (value >> (32 - bits));
}

WBY_INTERN void
wby_sha1_hash_block(unsigned int state[5], const wby_byte *block)
{
    int i;
    unsigned int a, b, c, d, e;
    unsigned int w[80];

    /* Prepare message schedule */
    for (i = 0; i < 16; ++i) {
        w[i] =  (((unsigned int)block[(i*4)+0]) << 24) |
                (((unsigned int)block[(i*4)+1]) << 16) |
                (((unsigned int)block[(i*4)+2]) <<  8) |
                (((unsigned int)block[(i*4)+3]) <<  0);
    }

    for (i = 16; i < 80; ++i)
        w[i] = wby_sha1_rol(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
    /* Initialize working variables */
    a = state[0]; b = state[1]; c = state[2]; d = state[3]; e = state[4];

    /* This is the core loop for each 20-word span. */
    #define SHA1_LOOP(start, end, func, constant) \
        for (i = (start); i < (end); ++i) { \
            unsigned int t = wby_sha1_rol(a, 5) + (func) + e + (constant) + w[i]; \
            e = d; d = c; c = wby_sha1_rol(b, 30); b = a; a = t;}

    SHA1_LOOP( 0, 20, ((b & c) ^ (~b & d)),           0x5a827999)
    SHA1_LOOP(20, 40, (b ^ c ^ d),                    0x6ed9eba1)
    SHA1_LOOP(40, 60, ((b & c) ^ (b & d) ^ (c & d)),  0x8f1bbcdc)
    SHA1_LOOP(60, 80, (b ^ c ^ d),                    0xca62c1d6)
    #undef SHA1_LOOP

    /* Update state */
    state[0] += a; state[1] += b; state[2] += c; state[3] += d; state[4] += e;
}

WBY_INTERN void
wby_sha1_init(struct wby_sha1 *s)
{
    s->state[0] = 0x67452301;
    s->state[1] = 0xefcdab89;
    s->state[2] = 0x98badcfe;
    s->state[3] = 0x10325476;
    s->state[4] = 0xc3d2e1f0;

    s->msg_size[0] = 0;
    s->msg_size[1] = 0;
    s->buf_used = 0;
}

WBY_INTERN void
wby_sha1_update(struct wby_sha1 *s, const void *data_, wby_size size)
{
    const char *data = (const char*)data_;
    unsigned int size_lo;
    unsigned int size_lo_orig;
    wby_size remain = size;

    while (remain > 0) {
        wby_size buf_space = sizeof(s->buffer) - s->buf_used;
        wby_size copy_size = (remain < buf_space) ? remain : buf_space;
        memcpy(s->buffer + s->buf_used, data, copy_size);

        s->buf_used += copy_size;
        data += copy_size;
        remain -= copy_size;

        if (s->buf_used == sizeof(s->buffer)) {
            wby_sha1_hash_block(s->state, s->buffer);
            s->buf_used = 0;
        }
    }

    size_lo = size_lo_orig = s->msg_size[1];
    size_lo += (unsigned int)(size * 8);
    if (size_lo < size_lo_orig)
        s->msg_size[0] += 1;
    s->msg_size[1] = size_lo;
}

WBY_INTERN void
wby_sha1_final(wby_byte digest[20], struct wby_sha1 *s)
{
    wby_byte zero = 0x00;
    wby_byte one_bit = 0x80;
    wby_byte count_data[8];
    int i;

    /* Generate size data in bit endian format */
    for (i = 0; i < 8; ++i) {
        unsigned int word = s->msg_size[i >> 2];
        count_data[i] = (wby_byte)(word >> ((3 - (i & 3)) * 8));
    }

    /* Set trailing one-bit */
    wby_sha1_update(s, &one_bit, 1);
    /* Emit null padding to to make room for 64 bits of size info in the last 512 bit block */
    while (s->buf_used != 56)
        wby_sha1_update(s, &zero, 1);

    /* Write size in bits as last 64-bits */
    wby_sha1_update(s, count_data, 8);
    /* Make sure we actually finalized our last block */
    WBY_ASSERT(s->buf_used == 0);

    /* Generate digest */
    for (i = 0; i < 20; ++i) {
        unsigned int word = s->state[i >> 2];
        wby_byte byte = (wby_byte) ((word >> ((3 - (i & 3)) * 8)) & 0xff);
        digest[i] = byte;
    }
}

/* ---------------------------------------------------------------
 *                          CONNECTION
 * ---------------------------------------------------------------*/
#define WBY_WEBSOCKET_VERSION "13"
WBY_GLOBAL const char wby_continue_header[] = "HTTP/1.1 100 Continue\r\n\r\n";
WBY_GLOBAL const wby_size wby_continue_header_len = sizeof(wby_continue_header) - 1;
WBY_GLOBAL const char wby_websocket_guid[] = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
WBY_GLOBAL const wby_size wby_websocket_guid_len = sizeof(wby_websocket_guid) - 1;
WBY_GLOBAL const wby_byte wby_websocket_pong[] = { 0x80, WBY_WSOP_PONG, 0x00 };
WBY_GLOBAL const struct wby_header wby_plain_text_headers[]={{"Content-Type","text/plain"}};

enum wby_connection_flags {
    WBY_CON_FLAG_ALIVE                  = WBY_FLAG(0),
    WBY_CON_FLAG_FRESH_CONNECTION       = WBY_FLAG(1),
    WBY_CON_FLAG_CLOSE_AFTER_RESPONSE   = WBY_FLAG(2),
    WBY_CON_FLAG_CHUNKED_RESPONSE       = WBY_FLAG(3),
    WBY_CON_FLAG_WEBSOCKET              = WBY_FLAG(4)
};

enum wby_connection_state {
    WBY_CON_STATE_REQUEST,
    WBY_CON_STATE_SEND_CONTINUE,
    WBY_CON_STATE_SERVE,
    WBY_CON_STATE_WEBSOCKET
};



WBY_INTERN int
wby_connection_set_blocking(struct wby_connection *conn)
{
    if (conn->blocking_count == 0) {
        if (wby_socket_set_blocking(WBY_SOCK(conn->socket), 1) != WBY_OK) {
            wby_dbg(conn->log, "failed to switch connection to blocking");
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }
    ++conn->blocking_count;
    return 0;
}

WBY_INTERN int
wby_connection_set_nonblocking(struct wby_connection *conn)
{
    wby_size count = conn->blocking_count;
    if ((conn->flags & WBY_CON_FLAG_ALIVE) != 0 && count == 1) {
        if (wby_socket_set_blocking(WBY_SOCK(conn->socket), 0) != WBY_OK) {
            wby_dbg(conn->log, "failed to switch connection to non-blocking");
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }
    conn->blocking_count = count - 1;
    return 0;
}

WBY_INTERN void
wby_connection_reset(struct wby_connection *conn, wby_size request_buffer_size,
    wby_size io_buffer_size)
{
    conn->header_buf.used = 0;
    conn->header_buf.max = request_buffer_size;
    conn->io_buf.used = 0;
    conn->io_buf.max = io_buffer_size;
    conn->header_body_left = 0;
    conn->io_data_left = 0;
    conn->continue_data_left = 0;
    conn->body_bytes_read = 0;
    conn->state = WBY_CON_STATE_REQUEST;
    conn->public_data.user_data = NULL;
    conn->blocking_count = 0;
}

WBY_INTERN void
wby_connection_close(struct wby_connection* connection)
{
    if (    wby_socket_is_valid( WBY_SOCK(connection->socket) )    ) {
        wby_socket_close(WBY_SOCK(connection->socket));
		#ifdef __APPLE__
	    	connection->socket = -1;
		#else
			connection->socket = WBY_INVALID_SOCKET;
		#endif
    }
    connection->flags = 0;
}

WBY_INTERN int
wby_connection_setup_request(struct wby_connection *connection, int request_size)
{
    char* lines[WBY_MAX_HEADERS + 2];
    int line_count;
    char* tok[16];
    char* query_params;
    int tok_count;

    int i;
    int header_count;
    char *buf = (char*) connection->header_buf.data;
    struct wby_request *req = &connection->public_data.request;

    /* Null-terminate the request envelope by overwriting the last CRLF with 00LF */
    buf[request_size - 2] = '\0';
    /* Split header into lines */
    line_count = wby_tok_inplace(buf, "\r\n", lines, WBY_LEN(lines), 0);
    header_count = line_count - 2;
    if (line_count < 1 || header_count > (int) WBY_LEN(req->headers))
        return 1;

    /* Parse request line */
    tok_count = wby_tok_inplace(lines[0], " ", tok, WBY_LEN(tok), 0);
    if (3 != tok_count) return 1;

    req->method = tok[0];
    req->uri = tok[1];
    req->http_version = tok[2];
    req->content_length = 0;

    /* See if there are any query parameters */
    if ((query_params = (char*) strchr(req->uri, '?')) != NULL) {
        req->query_params = query_params + 1;
        *query_params = '\0';
    } else req->query_params = NULL;

    {
        /* Decode the URI in place */
        wby_size uri_len = strlen(req->uri);
        wby_url_decode(req->uri, uri_len, (char*)req->uri, uri_len + 1, 1);
    }

    /* Parse headers */
    for (i = 0; i < header_count; ++i) {
        tok_count = wby_tok_inplace(lines[i + 1], ":", tok, 2, WBY_TOK_SKIPWS);
        if (tok_count != 2) return 1;
        req->headers[i].name = tok[0];
        req->headers[i].value = tok[1];

        if (!strcasecmp("content-length", tok[0])) {
            req->content_length = (int)strtoul(tok[1], NULL, 10);
            wby_dbg(connection->log, "request has body; content length is %d", req->content_length);
        } else if (!strcasecmp("transfer-encoding", tok[0])) {
            wby_dbg(connection->log, "cowardly refusing to handle Transfer-Encoding: %s", tok[1]);
            return 1;
        }
    }
    req->header_count = header_count;
    return 0;
}

WBY_INTERN int
wby_connection_send_websocket_upgrade(struct wby_connection* connection)
{
    const char *hdr;
    struct wby_sha1 sha;
    wby_byte digest[20];
    char output_digest[64];
    struct wby_header headers[3];
    struct wby_con *conn = &connection->public_data;
    if ((hdr = wby_find_header(conn, "Sec-WebSocket-Version")) == NULL) {
        wby_dbg(connection->log, "Sec-WebSocket-Version header not present");
        return 1;
    }
    if (strcmp(hdr, WBY_WEBSOCKET_VERSION)) {
        wby_dbg(connection->log,"WebSocket version %s not supported (we only do %s)",
                hdr, WBY_WEBSOCKET_VERSION);
        return 1;
    }
    if ((hdr = wby_find_header(conn, "Sec-WebSocket-Key")) == NULL) {
        wby_dbg(connection->log, "Sec-WebSocket-Key header not present");
        return 1;
    }
    /* Compute SHA1 hash of Sec-Websocket-Key + the websocket guid as required by
    * the RFC.
    *
    * This handshake is bullshit. It adds zero security. Just forces me to drag
    * in SHA1 and create a base64 encoder.
    */
    wby_sha1_init(&sha);
    wby_sha1_update(&sha, hdr, strlen(hdr));
    wby_sha1_update(&sha, wby_websocket_guid, wby_websocket_guid_len);
    wby_sha1_final(&digest[0], &sha);
    if (wby_base64_encode(output_digest, sizeof output_digest, &digest[0], sizeof(digest)) != WBY_OK)
        return 1;

    headers[0].name  = "Upgrade";
    headers[0].value = "websocket";
    headers[1].name  = "Connection";
    headers[1].value = "Upgrade";
    headers[2].name  = "Sec-WebSocket-Accept";
    headers[2].value = output_digest;
    wby_response_begin(&connection->public_data, 101, 0, headers, WBY_LEN(headers));
    wby_response_end(&connection->public_data);
    return 0;
}

WBY_INTERN int
wby_connection_push(struct wby_connection *conn, const void *data_, int len)
{
    struct wby_buffer *buf = &conn->io_buf;
    const wby_byte* data = (const wby_byte*)data_;
    if (conn->state != WBY_CON_STATE_SERVE) {
        wby_dbg(conn->log, "attempt to write in non-serve state");
        return 1;
    }
    if (len == 0)
        return wby_socket_flush(WBY_SOCK(conn->socket), buf);

    while (len > 0) {
        int buf_space = (int)buf->max - (int)buf->used;
        int copy_size = len < buf_space ? len : buf_space;
        memcpy(buf->data + buf->used, data, (wby_size)copy_size);
        buf->used += (wby_size)copy_size;

        data += copy_size;
        len -= copy_size;
        if (buf->used == buf->max) {
            if (wby_socket_flush(WBY_SOCK(conn->socket), buf) != WBY_OK)
                return 1;
            if ((wby_size)len >= buf->max)
                return wby_socket_send(WBY_SOCK(conn->socket), data, len);
        }
    }
    return 0;
}

/* ---------------------------------------------------------------
 *                          CON/REQUEST
 * ---------------------------------------------------------------*/
WBY_INTERN int
wby_con_discard_incoming_data(struct wby_con* conn, int count)
{
    while (count > 0) {
        char buffer[1024];
        int read_size = (int)(((wby_size)count > sizeof(buffer)) ?
            sizeof(buffer) : (wby_size)count);
        if (wby_read(conn, buffer, (wby_size)read_size) != WBY_OK)
            return -1;
        count -= read_size;
    }
    return 0;
}

WBY_API const char*
wby_find_header(struct wby_con *conn, const char *name)
{
    int i, count;
    for (i = 0, count = conn->request.header_count; i < count; ++i) {
        if (!strcasecmp(conn->request.headers[i].name, name))
            return conn->request.headers[i].value;
    }
    return NULL;
}

WBY_INTERN int
wby_con_is_websocket_request(struct wby_con* conn)
{
    const char *hdr;
    if ((hdr = wby_find_header(conn, "Connection")) == NULL) return 0;
    if (strcasecmp(hdr, "Upgrade")) return 0;
    if ((hdr = wby_find_header(conn, "Upgrade")) == NULL) return 0;
    if (strcasecmp(hdr, "websocket")) return 0;
    return 1;
}

WBY_INTERN int
wby_scan_websocket_frame(struct wby_frame *frame, const struct wby_buffer *buf)
{
    wby_byte flags = 0;
    unsigned int len = 0;
    unsigned int opcode = 0;
    wby_byte* data = buf->data;
    wby_byte* data_max = data + buf->used;

    int i;
    int len_bytes = 0;
    int mask_bytes = 0;
    wby_byte header0, header1;
    if (buf->used < 2)
        return -1;

    header0 = *data++;
    header1 = *data++;
    if (header0 & 0x80)
        flags |= WBY_WSF_FIN;
    if (header1 & 0x80) {
        flags |= WBY_WSF_MASKED;
        mask_bytes = 4;
    }

    opcode = (unsigned int) (header0 & 0xf);
    len = (unsigned int) (header1 & 0x7f);
    if (len == 126)
        len_bytes = 2;
    else if (len == 127)
        len_bytes = 8;
    if (data + len_bytes + mask_bytes > data_max)
        return -1;

    /* Read big endian length from length bytes (if greater than 125) */
    len = len_bytes == 0 ? len : 0;
    for (i = 0; i < len_bytes; ++i) {
        /* This will totally overflow for 64-bit values. I don't care.
         * If you're transmitting more than 4 GB of data using Webby,
         * seek help. */
        len <<= 8;
        len |= *data++;
    }

    /* Read mask word if present */
    for (i = 0; i < mask_bytes; ++i)
        frame->mask_key[i] = *data++;
    frame->header_size = (wby_byte) (data - buf->data);
    frame->flags = flags;
    frame->opcode = (wby_byte) opcode;
    frame->payload_length = (int)len;
    return 0;
}

int
wby_frame_begin(struct wby_con *conn_pub, int opcode)
{
    struct wby_connection *conn = (struct wby_connection*)conn_pub;
    conn->ws_opcode = (wby_byte) opcode;
    /* Switch socket to blocking mode */
    return wby_connection_set_blocking(conn);
}

int
wby_frame_end(struct wby_con *conn_pub)
{
    wby_byte header[10];
    wby_size header_size;
    struct wby_connection *conn = (struct wby_connection*) conn_pub;
    header_size = wby_make_websocket_header(header, conn->ws_opcode, 0, 1);
    if (wby_socket_send(WBY_SOCK(conn->socket), header, (int) header_size) != WBY_OK)
        conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
    /* Switch socket to non-blocking mode */
    return wby_connection_set_nonblocking(conn);
}

WBY_API int
wby_read(struct wby_con *conn, void *ptr_, wby_size len)
{
    struct wby_connection* conn_prv = (struct wby_connection*)conn;
    char *ptr = (char*) ptr_;
    int count;

    int start_pos = conn_prv->body_bytes_read;
    if (conn_prv->header_body_left > 0) {
        count = wby_read_buffered_data(&conn_prv->header_body_left, &conn_prv->header_buf, &ptr, &len);
        conn_prv->body_bytes_read += count;
    }

    /* Read buffered websocket data */
    if (conn_prv->io_data_left > 0) {
        count = wby_read_buffered_data(&conn_prv->io_data_left, &conn_prv->io_buf, &ptr, &len);
        conn_prv->body_bytes_read += count;
    }

    while (len > 0) {
        long err = recv((wby_socket_cast) WBY_SOCK(conn_prv->socket), ptr, (wby_size_cast) len, 0);
        if (err < 0) {
            conn_prv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return (int)err;
        }
        len -= (wby_size)err;
        ptr += (wby_size)err;
        conn_prv->body_bytes_read += (int)err;
    }

    if ((conn_prv->flags & WBY_CON_FLAG_WEBSOCKET) && (conn_prv->ws_frame.flags & WBY_WSF_MASKED)) {
        /* XOR outgoing data with websocket ofuscation key */
        int i, end_pos = conn_prv->body_bytes_read;
        const wby_byte *mask = conn_prv->ws_frame.mask_key;
        ptr = (char*) ptr_; /* start over */
        for (i = start_pos; i < end_pos; ++i) {
            wby_byte byte = (wby_byte)*ptr;
            *ptr++ = (char)(byte ^ mask[i & 3]);
        }
    }
    return 0;
}

WBY_API int
wby_write(struct wby_con *conn, const void *ptr, wby_size len)
{
    struct wby_connection *conn_priv = (struct wby_connection*) conn;
    if (conn_priv->flags & WBY_CON_FLAG_WEBSOCKET) {
        wby_byte header[10];
        wby_size header_size;
        header_size = wby_make_websocket_header(header, conn_priv->ws_opcode, (int)len, 0);

        /* Overwrite opcode to be continuation packages from here on out */
        conn_priv->ws_opcode = WBY_WSOP_CONTINUATION;
        if (wby_socket_send(WBY_SOCK(conn_priv->socket), header, (int)header_size) != WBY_OK) {
            conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
        if (wby_socket_send(WBY_SOCK(conn_priv->socket),(const wby_byte*)ptr, (int)len) != WBY_OK) {
            conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
        return 0;
    } else if (conn_priv->flags & WBY_CON_FLAG_CHUNKED_RESPONSE) {
        const size_t chunk_header_size = 128;
        char chunk_header[chunk_header_size];


        int header_len = s_sprintf(chunk_header, chunk_header_size * sizeof(char), "%x\r\n", sizeof(int), (int) len);
        if (header_len < 1) {
            return -1;
        }


        wby_connection_push(conn_priv, chunk_header, header_len);
        wby_connection_push(conn_priv, ptr, (int)len);
        return wby_connection_push(conn_priv, "\r\n", 2);
    } else return wby_connection_push(conn_priv, ptr, (int) len);
}

WBY_INTERN int
wby_printf(struct wby_con* conn, const char* fmt, ...)
{
    int len;
    char buffer[1024];
    va_list args;
    va_start(args, fmt);
    len = vsnprintf(buffer, sizeof buffer, fmt, args);
    va_end(args);
    return wby_write(conn, buffer, (wby_size)len);
}

/* ---------------------------------------------------------------
 *                          RESPONSE
 * ---------------------------------------------------------------*/
#define WBY_STATUS_MAP(STATUS)\
    STATUS(100, "Continue")\
    STATUS(101, "Switching Protocols")\
    STATUS(200, "OK")\
    STATUS(201, "Created")\
    STATUS(202, "Accepted")\
    STATUS(203, "Non-Authoritative Information")\
    STATUS(204, "No Content")\
    STATUS(205, "Reset Content")\
    STATUS(206, "Partial Content")\
    STATUS(300, "Multiple Choices")\
    STATUS(301, "Moved Permanently")\
    STATUS(302, "Found")\
    STATUS(303, "See Other")\
    STATUS(304, "Not Modified")\
    STATUS(305, "Use Proxy")\
    STATUS(307, "Temporary Redirect")\
    STATUS(400, "Bad Request")\
    STATUS(401, "Unauthorized")\
    STATUS(402, "Payment Required")\
    STATUS(403, "Forbidden")\
    STATUS(404, "Not Found")\
    STATUS(405, "Method Not Allowed")\
    STATUS(406, "Not Acceptable")\
    STATUS(407, "Proxy Authentication Required")\
    STATUS(408, "Request Time-out")\
    STATUS(409, "Conflict")\
    STATUS(410, "Gone")\
    STATUS(411, "Length Required")\
    STATUS(412, "Precondition Failed")\
    STATUS(413, "Request Entity Too Large")\
    STATUS(414, "Request-URI Too Large")\
    STATUS(415, "Unsupported Media Type")\
    STATUS(416, "Requested range not satisfiable")\
    STATUS(417, "Expectation Failed")\
    STATUS(500, "Internal Server Error")\
    STATUS(501, "Not Implemented")\
    STATUS(502, "Bad Gateway")\
    STATUS(503, "Service Unavailable")\
    STATUS(504, "Gateway Time-out")\
    STATUS(505, "HTTP Version not supported")

WBY_GLOBAL const short wby_status_nums[] = {
#define WBY_STATUS(id, name) id,
    WBY_STATUS_MAP(WBY_STATUS)
#undef WBY_STATUS
};
WBY_GLOBAL const char* wby_status_text[] = {
#define WBY_STATUS(id, name) name,
    WBY_STATUS_MAP(WBY_STATUS)
#undef WBY_STATUS
};

WBY_INTERN const char*
wby_response_status_text(int status_code)
{
    int i;
    for (i = 0; i < (int) WBY_LEN(wby_status_nums); ++i) {
        if (wby_status_nums[i] == status_code)
            return wby_status_text[i];
    }
    return "Unknown";
}

WBY_API int
wby_response_begin(struct wby_con *conn_pub, int status_code, int content_length,
    const struct wby_header *headers, int header_count)
{
    int i = 0;
    struct wby_connection *conn = (struct wby_connection *)conn_pub;
    if (conn->body_bytes_read < (int)conn->public_data.request.content_length) {
        int body_left = conn->public_data.request.content_length - (int)conn->body_bytes_read;
        if (wby_con_discard_incoming_data(conn_pub, body_left) != WBY_OK) {
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }

    wby_printf(conn_pub, "HTTP/1.1 %d %s\r\n", status_code, wby_response_status_text(status_code));
    if (content_length >= 0)
        wby_printf(conn_pub, "Content-Length: %d\r\n", content_length);
    else wby_printf(conn_pub, "Transfer-Encoding: chunked\r\n");
    wby_printf(conn_pub, "Server: wby\r\n");

    for (i = 0; i < header_count; ++i) {
        if (!strcasecmp(headers[i].name, "Connection")) {
            if (!strcasecmp(headers[i].value, "close"))
            conn->flags |= WBY_CON_FLAG_CLOSE_AFTER_RESPONSE;
        }
        wby_printf(conn_pub, "%s: %s\r\n", headers[i].name, headers[i].value);
    }

    if (!(conn->flags & WBY_CON_FLAG_CLOSE_AFTER_RESPONSE)) {
        /* See if the client wants us to close the connection. */
        const char* connection_header = wby_find_header(conn_pub, "Connection");
        if (connection_header && !strcasecmp("close", connection_header)) {
            conn->flags |= WBY_CON_FLAG_CLOSE_AFTER_RESPONSE;
            wby_printf(conn_pub, "Connection: close\r\n");
        }
    }
    wby_printf(conn_pub, "\r\n");
    if (content_length < 0)
        conn->flags |= WBY_CON_FLAG_CHUNKED_RESPONSE;
    return 0;
}

WBY_API void
wby_response_end(struct wby_con *conn)
{
    struct wby_connection *conn_priv = (struct wby_connection*) conn;
    if (conn_priv->flags & WBY_CON_FLAG_CHUNKED_RESPONSE) {
        /* Write final chunk */
        wby_connection_push(conn_priv, "0\r\n\r\n", 5);
        conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_CHUNKED_RESPONSE;
    }
    /* Flush buffers */
    wby_connection_push(conn_priv, "", 0);

    /* Close connection when Content-Length is zero that maybe HTTP/1.0. */
    //if (conn->request.content_length == 0 && !wby_con_is_websocket_request(conn))
    wby_connection_close(conn_priv);
}

/* ---------------------------------------------------------------
 *                          SERVER
 * ---------------------------------------------------------------*/
/* Pointer to Integer type conversion for pointer alignment */
#if defined(__PTRDIFF_TYPE__) /* This case should work for GCC*/
# define WBY_UINT_TO_PTR(x) ((void*)(__PTRDIFF_TYPE__)(x))
# define WBY_PTR_TO_UINT(x) ((wby_size)(__PTRDIFF_TYPE__)(x))
#elif !defined(__GNUC__) /* works for compilers other than LLVM */
# define WBY_UINT_TO_PTR(x) ((void*)&((char*)0)[x])
# define WBY_PTR_TO_UINT(x) ((wby_size)(((char*)x)-(char*)0))
#elif defined(WBY_USE_FIXED_TYPES) /* used if we have <stdint.h> */
# define WBY_UINT_TO_PTR(x) ((void*)(uintptr_t)(x))
# define WBY_PTR_TO_UINT(x) ((uintptr_t)(x))
#else /* generates warning but works */
# define WBY_UINT_TO_PTR(x) ((void*)(x))
# define WBY_PTR_TO_UINT(x) ((wby_size)(x))
#endif

/* simple pointer math */
#define WBY_PTR_ADD(t, p, i) ((t*)((void*)((wby_byte*)(p) + (i))))
#define WBY_ALIGN_PTR(x, mask)\
    (WBY_UINT_TO_PTR((WBY_PTR_TO_UINT((wby_byte*)(x) + (mask-1)) & ~(mask-1))))

/* pointer alignment  */
#ifdef __cplusplus
template<typename T> struct wby_alignof;
template<typename T, int size_diff> struct wby_helper{enum {value = size_diff};};
template<typename T> struct wby_helper<T,0>{enum {value = wby_alignof<T>::value};};
template<typename T> struct wby_alignof{struct Big {T x; char c;}; enum {
    diff = sizeof(Big) - sizeof(T), value = wby_helper<Big, diff>::value};};
#define WBY_ALIGNOF(t) (wby_alignof<t>::value);
#else
#define WBY_ALIGNOF(t) ((char*)(&((struct {char c; t _h;}*)0)->_h) - (char*)0)
#endif

void
wby_init(struct wby_server *srv, const struct wby_config *cfg, wby_size *needed_memory)
{
    WBY_STORAGE const wby_size wby_conn_align = WBY_ALIGNOF(struct wby_connection);
    WBY_ASSERT(srv);
    WBY_ASSERT(cfg);
    WBY_ASSERT(needed_memory);

    memset(srv, 0, sizeof(*srv));
    srv->config = *cfg;
    WBY_ASSERT(cfg->dispatch);

    *needed_memory = 0;
    *needed_memory += cfg->connection_max * sizeof(struct wby_connection);
    *needed_memory += cfg->connection_max * cfg->request_buffer_size;
    *needed_memory += cfg->connection_max * cfg->io_buffer_size;
    *needed_memory += wby_conn_align;
    srv->memory_size = *needed_memory;
}

WBY_API void wby_event_loop(struct wby_server* server, struct server_state* state)
{
	while (!state->quit) {
		wby_update(server);
		sleep_for(30);
		++state->frame_counter;
	}
}

int
wby_start(struct wby_server *server, struct server_state *state, void *memory)
{
    wby_socket_cast handle = 0;
    wby_size i = 0;
    wby_socket sock = 0;
    wby_sockopt on = 1;
    wby_byte *buffer = (wby_byte*)memory;
    struct sockaddr_in bind_addr;
    WBY_STORAGE const wby_size wby_conn_align = WBY_ALIGNOF(struct wby_connection);

    WBY_ASSERT(server);
    WBY_ASSERT(memory);
    memset(buffer, 0, server->memory_size);

    /* setup sever memory */
    server->socket = WBY_INVALID_SOCKET;
    server->con = (struct wby_connection*)WBY_ALIGN_PTR(buffer, wby_conn_align);
    buffer += ((wby_byte*)server->con - buffer);
    buffer += server->config.connection_max * sizeof(struct wby_connection);

    for (i = 0; i < server->config.connection_max; ++i) {
        server->con[i].log = server->config.log;
        server->con[i].header_buf.data = buffer;
        buffer += server->config.request_buffer_size;
        server->con[i].io_buf.data = buffer;
        server->con[i].request_buffer_size = server->config.request_buffer_size;
        server->con[i].io_buffer_size = server->config.io_buffer_size;
        buffer += server->config.io_buffer_size;
    }
    WBY_ASSERT((wby_size)(buffer - (wby_byte*)memory) <= server->memory_size);

    /* server socket setup */
    handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);


    if(handle > 0)
    {
        sock = (wby_socket) handle;
    }

    printf("Handle value = %d \r\n", (int) sock);
    printf("Handle value = %d \r\n", WBY_INVALID_SOCKET);

#ifdef _WIN32
    printf("try start win231 \r\n");

    if (WSAGetLastError() == WSANOTINITIALISED) {
        /* Make sure WSAStartup has been called. */
        wby_dbg(server->config.log, "Calling WSAStartup.");
        WSADATA wsaData;
        WSAStartup(MAKEWORD(2, 2), &wsaData);
        handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if(handle > 0)
        {
            sock = (wby_socket) handle;
        }
        server->windows_socket_initialized = 1;
    }
#endif
    wby_dbg(server->config.log, "Server socket = %d", (int)sock);
    if (!wby_socket_is_valid(sock)) {
        wby_dbg(server->config.log, "failed to initialized server socket: %d", wby_socket_error());
        goto error;
    }

    setsockopt((wby_socket_cast) WBY_SOCK(sock), SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
    #ifdef __APPLE__ /* Don't generate SIGPIPE when writing to dead socket, we check all writes. */
    signal(SIGPIPE, SIG_IGN);
    #endif
    if (wby_socket_set_blocking(sock, 0) != WBY_OK) goto error;

    /* bind server socket */
    wby_dbg(server->config.log, "binding to %s:%d", server->config.address, server->config.port);
    memset(&bind_addr, 0, sizeof(bind_addr));
    bind_addr.sin_family = AF_INET;
    bind_addr.sin_port = htons((unsigned short)server->config.port);
    bind_addr.sin_addr.s_addr = inet_addr(server->config.address);

	bind( (wby_socket_cast) sock, (struct sockaddr*) &bind_addr, sizeof(struct sockaddr_in));

	/*
	Todo: not working on open enclave SDK? for bind error check
	very weird
    if ( bind_ret == -1)
	{
        wby_dbg(server->config.log, "bind() failed: %d", wby_socket_error());
        wby_dbg(server->config.log, "bind() failed: %s", strerror(wby_socket_error()));
        goto error;
    }
	*/

    /* set server socket to listening */
    if (listen((wby_socket_cast) sock, SOMAXCONN) != WBY_OK) {
        wby_dbg(server->config.log, "listen() failed: %d", wby_socket_error());
        wby_socket_close(WBY_SOCK(sock));
        goto error;
    }
    server->socket = sock;
    wby_dbg(server->config.log, "server initialized: %s", strerror(errno));

	/* Start the event loop for the server */
	wby_event_loop(server, state);
    return 0;

error:
    if (wby_socket_is_valid(WBY_SOCK(sock)))
        wby_socket_close(WBY_SOCK(sock));
    return -1;
}

void
wby_stop(struct wby_server *srv)
{
#ifdef _WIN32
    if (srv->windows_socket_initialized) {
        WSACleanup();
    }
#endif
    wby_size i;
    wby_socket_close(WBY_SOCK(srv->socket));
    for (i = 0; i < srv->con_count; ++i)
        wby_socket_close(WBY_SOCK(srv->con[i].socket));
}

WBY_INTERN int
wby_on_incoming(struct wby_server *srv)
{
    wby_socket_cast handle = 0;
    wby_size connection_index;
    char WBY_ALIGN(8) client_addr[64];
    struct wby_connection* connection;
    wby_socklen client_addr_len = sizeof(client_addr);
    wby_socket fd = 0;

    /* Make sure we have space for a new connection */
    connection_index = srv->con_count;
    if (connection_index == srv->config.connection_max) {
        wby_dbg(srv->config.log, "out of connection slots");
        return 1;
    }

    /* Accept the incoming connection. */
    handle = accept((wby_socket_cast) WBY_SOCK(srv->socket), (struct sockaddr*)&client_addr[0], &client_addr_len);
    if(handle <= 0)
    {
        int err = wby_socket_error();
        if (!wby_socket_is_blocking_error(err))
            wby_dbg(srv->config.log, "accept() failed: %d", err);
        return 1;
    }
    else
    {
        fd = (wby_socket) handle;
    }

    connection = &srv->con[connection_index];
    wby_connection_reset(connection, srv->config.request_buffer_size, srv->config.io_buffer_size);
    connection->flags = WBY_CON_FLAG_FRESH_CONNECTION;
    srv->con_count = connection_index + 1;

    /* Configure socket */
    if (wby_socket_config_incoming(fd) != WBY_OK) {
        wby_socket_close(fd);
        return 1;
    }

    /* OK, keep this connection */
    wby_dbg(srv->config.log, "tagging connection %d as alive", connection_index);
    connection->flags |= WBY_CON_FLAG_ALIVE;
    connection->socket = fd;
    return 0;
}

WBY_INTERN void
wby_update_connection(struct wby_server *srv, struct wby_connection* connection)
{
    /* This is no longer a fresh connection. Only read from it when select() says
    * so in the future. */
    connection->flags &= (unsigned short)~WBY_CON_FLAG_FRESH_CONNECTION;
    for (;;)
    {
        switch (connection->state) {
        default: break;
        case WBY_CON_STATE_REQUEST: {
            const char *expect_header;
            int request_size;
            int result = wby_socket_recv(WBY_SOCK(connection->socket),
                &connection->header_buf, srv->config.log);
            if (WBY_FILL_ERROR == result) {
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            /* Scan to see if the buffer has a complete HTTP request header package. */
            request_size = wb_peek_request_size(connection->header_buf.data,
                (int)connection->header_buf.used);
            if (request_size < 0) {
                /* Nothing yet. */
                if (connection->header_buf.max == connection->header_buf.used) {
                    wby_dbg(srv->config.log, "giving up as buffer is full");
                    /* Give up, we can't fit the request in our buffer. */
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                }
                return;
            }
            wby_dbg(srv->config.log, "peek request size: %d", request_size);


            /* Set up request data. */
            if (wby_connection_setup_request(connection, request_size) != WBY_OK) {
                wby_dbg(srv->config.log, "failed to set up request");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            /* Remember how much of the remaining buffer is body data. */
            connection->header_body_left = (int)connection->header_buf.used - request_size;
            /* If the client expects a 100 Continue, send one now. */
            if (NULL != (expect_header = wby_find_header(&connection->public_data, "Expect"))) {
                if (!strcasecmp(expect_header, "100-continue")) {
                    wby_dbg(srv->config.log, "connection expects a 100 Continue header.. making him happy");
                    connection->continue_data_left = (int)wby_continue_header_len;
                    connection->state = WBY_CON_STATE_SEND_CONTINUE;
                } else {
                    wby_dbg(srv->config.log, "unrecognized Expected header %s", expect_header);
                    connection->state = WBY_CON_STATE_SERVE;
                }
            } else connection->state = WBY_CON_STATE_SERVE;
        } break; /* WBY_REQUEST */

        case WBY_CON_STATE_SEND_CONTINUE: {
            int left = connection->continue_data_left;
            int offset = (int)wby_continue_header_len - left;
            long written = 0;

            written = send((wby_socket_cast) WBY_SOCK(connection->socket), wby_continue_header + offset, (wby_size_cast) left, 0);
            wby_dbg(srv->config.log, "continue write: %d bytes", written);
            if (written < 0) {
                wby_dbg(srv->config.log, "failed to write 100-continue header");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }
            left -= (int)written;
            connection->continue_data_left = left;
            if (left == 0)
                connection->state = WBY_CON_STATE_SERVE;
        } break; /* WBY_SEND_cONTINUE */

        case WBY_CON_STATE_SERVE: {
            /* Clear I/O buffer for output */
            connection->io_buf.used = 0;
            /* Switch socket to blocking mode. */
            if (wby_connection_set_blocking(connection) != WBY_OK)
                return;

            /* Figure out if this is a request to upgrade to WebSockets */
            if (wby_con_is_websocket_request(&connection->public_data)) {
                wby_dbg(srv->config.log, "received a websocket upgrade request");
                if (!srv->config.ws_connect ||
                    srv->config.ws_connect(&connection->public_data, srv->config.userdata) != WBY_OK)
                {
                    wby_dbg(srv->config.log, "user callback failed connection attempt");
                    wby_response_begin(&connection->public_data, 400, -1,
                        wby_plain_text_headers, WBY_LEN(wby_plain_text_headers));
                    wby_printf(&connection->public_data, "WebSockets not supported at %s\r\n",
                        connection->public_data.request.uri);
                    wby_response_end(&connection->public_data);
                } else {
                    /* OK, let's try to upgrade the connection to WebSockets */
                    if (wby_connection_send_websocket_upgrade(connection) != WBY_OK) {
                        wby_dbg(srv->config.log, "websocket upgrade failed");
                        wby_response_begin(&connection->public_data, 400, -1,
                            wby_plain_text_headers, WBY_LEN(wby_plain_text_headers));
                        wby_printf(&connection->public_data, "WebSockets couldn't not be enabled\r\n");
                        wby_response_end(&connection->public_data);
                    } else {
                        /* OK, we're now a websocket */
                        connection->flags |= WBY_CON_FLAG_WEBSOCKET;
                        wby_dbg(srv->config.log, "connection %d upgraded to websocket",
                            (int)(connection - srv->con));
                        srv->config.ws_connected(&connection->public_data, srv->config.userdata);
                    }
                }
            } else if (srv->config.dispatch(&connection->public_data, srv->config.userdata, srv) != 0) {
                static const struct wby_header headers[] = {{ "Content-Type", "text/plain" }};
                wby_response_begin(&connection->public_data, 404, -1, headers, WBY_LEN(headers));
                wby_printf(&connection->public_data, "No handler for %s\r\n",
                    connection->public_data.request.uri);
                wby_response_end(&connection->public_data);
            }

            /* Back to non-blocking mode, can make the socket die. */
            wby_connection_set_nonblocking(connection);
            /* Ready for another request, unless we should close the connection. */
            if (connection->flags & WBY_CON_FLAG_ALIVE) {
                if (connection->flags & WBY_CON_FLAG_CLOSE_AFTER_RESPONSE) {
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                } else {
                    /* Reset connection for next request. */
                    wby_connection_reset(connection, srv->config.request_buffer_size,
                        srv->config.io_buffer_size);
                    if (!(connection->flags & WBY_CON_FLAG_WEBSOCKET)) {
                        /* Loop back to request state */
                        connection->state = WBY_CON_STATE_REQUEST;
                    } else {
                        /* Clear I/O buffer for input */
                        connection->io_buf.used = 0;
                        /* Go to the web socket serving state */
                        connection->state = WBY_CON_STATE_WEBSOCKET;
                    }
                }
            }
        } break; /* WBY_SERVE */

        case WBY_CON_STATE_WEBSOCKET: {
            /* In this state, we're trying to read a websocket frame into the I/O
            * buffer. Once we have enough data, we call the websocket frame
            * callback and let the client read the data through WebbyRead. */
            if (WBY_FILL_ERROR == wby_socket_recv(WBY_SOCK(connection->socket),
                &connection->io_buf, srv->config.log)) {
                /* Give up on this connection */
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            if (wby_scan_websocket_frame(&connection->ws_frame, &connection->io_buf) != WBY_OK)
                return;

            connection->body_bytes_read = 0;
            connection->io_data_left = (int)connection->io_buf.used - connection->ws_frame.header_size;
            wby_dbg(srv->config.log, "%d bytes of incoming websocket data buffered",
                (int)connection->io_data_left);

            /* Switch socket to blocking mode */
            if (wby_connection_set_blocking(connection) != WBY_OK)
                return;

            switch (connection->ws_frame.opcode)
            {
            case WBY_WSOP_CLOSE:
                wby_dbg(srv->config.log, "received websocket close request");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;

              case WBY_WSOP_PING:
                wby_dbg(srv->config.log, "received websocket ping request");
                if (wby_socket_send(WBY_SOCK(connection->socket), wby_websocket_pong,
                    sizeof wby_websocket_pong)){
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                }
                break;

              default:
                /* Dispatch frame to user handler. */
                if (srv->config.ws_frame(&connection->public_data,
                    &connection->ws_frame, srv->config.userdata) != WBY_OK) {
                  connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                  return;
                }
            }

            /* Discard any data the client didn't read to retain the socket state. */
            if (connection->body_bytes_read < connection->ws_frame.payload_length) {
                int size = connection->ws_frame.payload_length - connection->body_bytes_read;
                if (wby_con_discard_incoming_data(&connection->public_data, size) != WBY_OK) {
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                }
            }

            /* Back to non-blocking mode */
            if (wby_connection_set_nonblocking(connection) != WBY_OK)
                return;

            wby_connection_reset(connection, srv->config.request_buffer_size, srv->config.io_buffer_size);
            connection->state = WBY_CON_STATE_WEBSOCKET;
        } break; /* WBY_WEBSOCKET */
        } /* switch */
    } /* for */
}

WBY_API void
wby_update(struct wby_server *srv)
{
    int err;
    wby_size i, count;
    wby_socket max_socket;
    fd_set read_fds, write_fds, except_fds;
    struct timeval timeout;

    /* Build set of sockets to check for events */
    FD_ZERO(&read_fds);
    FD_ZERO(&write_fds);
    FD_ZERO(&except_fds);
    max_socket = 0;

    /* Only accept incoming connections if we have space */
    if (srv->con_count < srv->config.connection_max) {
        FD_SET(srv->socket, &read_fds);
        FD_SET(srv->socket, &except_fds);
        max_socket = WBY_SOCK(srv->socket);
    }

    for (i = 0, count = srv->con_count; i < count; ++i) {
        wby_socket socket = WBY_SOCK(srv->con[i].socket);
        FD_SET(socket, &read_fds);
        FD_SET(socket, &except_fds);
        if (srv->con[i].state == WBY_CON_STATE_SEND_CONTINUE)
            FD_SET(socket, &write_fds);
        if (socket > max_socket)
            max_socket = socket;
    }

    timeout.tv_sec = 0;
    timeout.tv_usec = 5;
    err = select((int)(max_socket + 1), &read_fds, &write_fds, &except_fds, &timeout);
    if (err < 0) {
        wby_dbg(srv->config.log, "failed to select");
        return;
    }

    /* Handle incoming connections */
    if (FD_ISSET(WBY_SOCK(srv->socket), &read_fds)) {
        do {
            wby_dbg(srv->config.log, "awake on incoming");
            err = wby_on_incoming(srv);
        } while (err == 0);
    }

    /* Handle incoming connection data */
    for (i = 0, count = srv->con_count; i < count; ++i) {
        struct wby_connection *conn = &srv->con[i];
        if (FD_ISSET(WBY_SOCK(conn->socket), &read_fds) ||
            FD_ISSET(WBY_SOCK(conn->socket), &write_fds) ||
            conn->flags & WBY_CON_FLAG_FRESH_CONNECTION)
        {
            wby_dbg(srv->config.log, "reading from connection %d", i);
            wby_update_connection(srv, conn);
        }
    }

    /* Close stale connections & compact connection array. */
    for (i = 0; i < srv->con_count; ) {
        struct wby_connection *connection = &srv->con[i];
        if (!(connection->flags & WBY_CON_FLAG_ALIVE)) {
            wby_size remain;
            wby_dbg(srv->config.log, "closing connection %d (%08x)", i, connection->flags);
            if (connection->flags & WBY_CON_FLAG_WEBSOCKET)
                srv->config.ws_closed(&connection->public_data, srv->config.userdata);
            remain = srv->con_count - (wby_size)i - 1;
            wby_connection_close(connection);
            memmove(&srv->con[i], &srv->con[i + 1], remain*sizeof(srv->con[i]));
            --srv->con_count;
        } else ++i;
    }
}

void wby_config(const char *address, unsigned int port, struct server_state* state, struct wby_config* config,
	int(*dispatch)(struct wby_con* con, void* userdata, void* server))
{
	memset(state, 0, sizeof(struct server_state));
	memset(config, 0, sizeof(struct wby_config));
	config->userdata = &state;
	config->address = address;
	config->port = port;
	config->connection_max = 4;
	config->request_buffer_size = WBY_REQ_BUF_SIZE;
	config->io_buffer_size = 8192;
	config->log = test_log;
	config->dispatch = dispatch;
}

char *get_post_buf(struct wby_con *connection, struct wby_server *svr)
{
	struct wby_connection *detailed_con = (struct wby_connection*) connection;
    int pay_load_len = connection->request.content_length;
    void *post_content = NULL;

	wby_dbg(svr->config.log, "positive pay load len");
	if (pay_load_len <= WBY_REQ_BUF_SIZE - 100)
	{
		// Allocate mem.
		wby_dbg(svr->config.log, "Processing POST payload!");
		post_content = malloc((wby_size) pay_load_len + 1);
		if (!post_content)
		{
			wby_dbg(svr->config.log, "Out of mem for allocation post content.");
			wby_response_end(connection);
			return NULL;
		}
		memset(post_content, 0, (wby_size) pay_load_len + 1);

		// Read payload.
		if (wby_read(connection, post_content, (wby_size) pay_load_len) != WBY_OK)
		{
			wby_dbg(svr->config.log, "problem reading POST payload");
			wby_response_end(connection);
			return NULL;
		}

		// Didnt fully read payload or invalid payload len set by client.
		if (detailed_con->body_bytes_read != (wby_size) pay_load_len)
		{
			wby_dbg(svr->config.log, "problem fully reading POST payload");
			wby_response_end(connection);
			return NULL;
		}

		// Process JSON.
		((unsigned char*) post_content)[detailed_con->body_bytes_read] = '\0';
		return (char *) post_content;
	}

	return NULL;
}

StrMap *post_json_eq_to_json(char *post_content)
{
	char *json_str = strstr((char* const) post_content, "json=");
	if (json_str)
	{
		json_str = json_str + 5;
		return json_decode(json_str, strlen(json_str));
	}

	return NULL;
}

unsigned int serve_static_file(const char *www_root_path, struct wby_con *connection)
{
	size_t url_len = strlen(connection->request.uri);
	size_t file_path_len = 0;
	const size_t file_path_size = 512;
	char file_path[file_path_size] = { 0 };

	// Inputs + format str overflows buf.
	if ((file_path_len = s_sprintf(file_path, file_path_size, "%s/%s", url_len + strlen(www_root_path), www_root_path, connection->request.uri)) < 1)
	{
		wby_response_begin(connection, 500, 3, NULL, 0);
		wby_write(connection, "500", 3);
		wby_response_end(connection);

		return 0;
	}

	// Validate path before openning it to stop LFI.
	if (is_lfi(file_path, file_path_size))
	{
		wby_response_begin(connection, 500, 3, NULL, 0);
		wby_write(connection, "500", 3);
		wby_response_end(connection);

		return 0;
	}
		
	// Load file if it exists.
	if (access(file_path, F_OK) != -1)
	{
		char* file_content = file_get_contents(&file_path[0]);
		if (file_content)
		{
			size_t file_content_len = strlen(file_content);
			wby_response_begin(connection, 200, file_content_len, NULL, 0);
			wby_write(connection, file_content, file_content_len);
			wby_response_end(connection);
			free(file_content);

			return 1;
		}
	}
	else
	{
		wby_response_begin(connection, 404, 3, NULL, 0);
		wby_write(connection, "404", 3);
		wby_response_end(connection);

		return 0;
	}


	return 0;
}



static int http_internal_parse_url( char const* url, char* address, size_t address_capacity, char* port,
    size_t port_capacity, char const** resource )
    {
    // make sure url starts with http://
    if( strncmp( url, "http://", 7 ) != 0 ) return 0;
    url += 7; // skip http:// part of url

    size_t url_len = strlen( url );


    // find end of address part of url
    char const* address_end = strchr( url, ':' );
    if( !address_end ) address_end = strchr( url, '/' );
    if( !address_end ) address_end = url + url_len;

    // extract address
    size_t address_len = (size_t)( address_end - url );
    if( address_len >= address_capacity ) return 0;
    memcpy( address, url, address_len );
    address[ address_len ] = 0;

    // check if there's a port defined
    char const* port_end = address_end;
    if( *address_end == ':' )
        {
        ++address_end;
        port_end = strchr( address_end, '/' );
        if( !port_end ) port_end = address_end + strlen( address_end );
        size_t port_len = (size_t)( port_end - address_end );
        if( port_len >= port_capacity ) return 0;
        memcpy( port, address_end, port_len );
        port[ port_len ] = 0;
        }
    else
        {
        // use default port number 80
        if( port_capacity <= 2 ) return 0;

        strncpy_s(port, 3,  "80", 2);

        }


    *resource = port_end;

    return 1;
    }


HTTP_SOCKET http_internal_connect( char const* address, char const* port )
    {
    // set up hints for getaddrinfo
    struct addrinfo hints;
    memset( &hints, 0, sizeof( hints ) );
    hints.ai_family = AF_UNSPEC; // the Internet Protocol version 4 (IPv4) address family.
    hints.ai_flags = AI_PASSIVE;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;    // Use Transmission Control Protocol (TCP).

    // resolve the server address and port
    struct addrinfo* addri = 0;
    int error = getaddrinfo( address, port, &hints, &addri) ;
    if( error != 0 )
    {
        //printf("Get addr info error %s %s %d %s\r\n", address, port, error, gai_strerror(error));
        //errx(1, "%s", gai_strerror(error));
        return HTTP_INVALID_SOCKET;
    }

    // create the socket
    HTTP_SOCKET sock = socket( addri->ai_family, addri->ai_socktype, addri->ai_protocol );
    if( sock == -1)
        {
        freeaddrinfo( addri );
        return HTTP_INVALID_SOCKET;
        }

    // set socket to nonblocking mode
    #ifdef _WIN32
        u_long nonblocking = 1;
        int res = ioctlsocket( sock, FIONBIO, &nonblocking );
    #else
        int flags = fcntl( sock, F_GETFL, 0 );
        int res = fcntl( sock, F_SETFL, flags | O_NONBLOCK );
    #endif
    if( res == -1 )
        {
        freeaddrinfo( addri );
        #ifdef _WIN32
            closesocket( sock );
        #else
            close( sock );
        #endif
        return HTTP_INVALID_SOCKET;
        }

    // connect to server
    if( connect( sock, addri->ai_addr, addri->ai_addrlen ) == -1 )
        {
        #ifdef _WIN32
            if( WSAGetLastError() != WSAEWOULDBLOCK && WSAGetLastError() != WSAEINPROGRESS )
                {
                freeaddrinfo( addri );
                closesocket( sock );
                return HTTP_INVALID_SOCKET;
                }
        #else
            if( errno != EWOULDBLOCK && errno != EINPROGRESS && errno != EAGAIN )
                {
                freeaddrinfo( addri );
                close( sock );
                return HTTP_INVALID_SOCKET;
                }
        #endif
        }

    freeaddrinfo( addri );
    return sock;
    }


static http_internal_t* http_internal_create( size_t request_data_size, void* memctx )
    {
    http_internal_t* internal = (http_internal_t*) HTTP_MALLOC( memctx, sizeof( http_internal_t ) + request_data_size );

    internal->http.status = HTTP_STATUS_PENDING;
    internal->http.status_code = 0;
    internal->http.response_size = 0;
    internal->http.response_data = NULL;

    internal->memctx = memctx;
    internal->connect_pending = 1;
    internal->request_sent = 0;

    strncpy_s( internal->reason_phrase, 2, "", 1);
    internal->http.reason_phrase = internal->reason_phrase;

    strncpy_s( internal->content_type, 2, "", 1);
    internal->http.content_type = internal->content_type;

    internal->data_size = 0;
    internal->data_capacity = 64 * 1024;
    internal->data = HTTP_MALLOC( memctx, internal->data_capacity );

    internal->request_data = NULL;
    internal->request_data_size = 0;

    return internal;
    }


http_t* http_get( char const* url, void* memctx )
{
    #ifdef _WIN32
        WSADATA wsa_data;
        if( WSAStartup( MAKEWORD( 1, 0 ), &wsa_data ) != 0 ) return NULL;
    #endif

    char address[ 256 ];
    char port[ 16 ];
    char const* resource;

    if( http_internal_parse_url( url, address, sizeof( address ), port, sizeof( port ), &resource ) == 0 )
    {
        //printf("Url val error\r\n");
        return NULL;
    }

    HTTP_SOCKET socket = http_internal_connect( address, port );
    if( socket == HTTP_INVALID_SOCKET )
    {
        //printf("http invalid socket\r\n");
        return NULL;
    }

    http_internal_t* internal = http_internal_create( 0, memctx );
    internal->socket = socket;

    char* request_header;
    size_t request_header_len = 64 + strlen( resource ) + strlen( address ) + strlen( port );
    if( request_header_len < sizeof( internal->request_header ) )
        {
        internal->request_header_large = NULL;
        request_header = internal->request_header;
        }
    else
        {
        internal->request_header_large = (char*) HTTP_MALLOC( memctx, request_header_len + 1 );
        request_header = internal->request_header_large;
        }

    size_t len = strlen(resource) + strlen(address) + strlen(port);
    s_sprintf(request_header, request_header_len + 1, "GET %s HTTP/1.0\r\nHost: %s:%s\r\n\r\n", len, resource, address, port);

    return &internal->http;
    }


http_t* http_post( char const* url, void const* data, size_t size, void* memctx )
    {
    #ifdef _WIN32
        WSADATA wsa_data;
        if( WSAStartup( MAKEWORD( 1, 0 ), &wsa_data ) != 0 ) return 0;
    #endif

    char address[ 256 ];
    char port[ 16 ];
    char const* resource;

    if( http_internal_parse_url( url, address, sizeof( address ), port, sizeof( port ), &resource ) == 0 )
        return NULL;

    HTTP_SOCKET socket = http_internal_connect( address, port );
    if( socket == HTTP_INVALID_SOCKET ) return NULL;

    http_internal_t* internal = http_internal_create( size, memctx );
    internal->socket = socket;

    char* request_header;
    size_t request_header_len = 64 + strlen( resource ) + strlen( address ) + strlen( port );
    if( request_header_len < sizeof( internal->request_header ) )
        {
        internal->request_header_large = NULL;
        request_header = internal->request_header;
        }
    else
        {
        internal->request_header_large = (char*) HTTP_MALLOC( memctx, request_header_len + 1 );
        request_header = internal->request_header_large;
        }

    size_t len = strlen(resource) + strlen(address) + strlen(port);
    s_sprintf(request_header, request_header_len + 1, "POST %s HTTP/1.0\r\nHost: %s:%s\r\nContent-Length: %d\r\n\r\n", len, resource, address, port,
        (int) size);



    internal->request_data_size = size;
    internal->request_data = ( internal + 1 );
    memcpy( internal->request_data, data, size );

    return &internal->http;
    }


http_status_t http_process( http_t* http )
    {
    http_internal_t* internal = (http_internal_t*) http;

    if( http->status == HTTP_STATUS_FAILED ) return http->status;

    if( internal->connect_pending )
        {
        fd_set sockets_to_check;
        FD_ZERO( &sockets_to_check );
        FD_SET( (wby_socket) internal->socket, &sockets_to_check );
        struct timeval timeout; timeout.tv_sec = 0; timeout.tv_usec = 0;
        // check if socket is ready for send
        if( select( (int)( internal->socket + 1 ), NULL, &sockets_to_check, NULL, &timeout ) == 1 )
            {
            int opt = -1;
            socklen_t len = sizeof( opt );
            if( getsockopt( internal->socket, SOL_SOCKET, SO_ERROR, (char*)( &opt ), &len) >= 0 && opt == 0 )
                internal->connect_pending = 0; // if it is, we're connected
            }
        }

    if( internal->connect_pending ) return http->status;

    if( !internal->request_sent )
        {
        char const* request_header = internal->request_header_large ?
            internal->request_header_large : internal->request_header;
        if( send( internal->socket, request_header, (wby_size_cast) strlen( request_header ), 0 ) == -1 )
            {
            http->status = HTTP_STATUS_FAILED;
            return http->status;
            }
        if( internal->request_data_size )
            {
            long int res = send( internal->socket, (char const*)internal->request_data, (wby_size_cast) internal->request_data_size, 0 );
            if( res == -1 )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            }
        internal->request_sent = 1;
        return http->status;
        }

    // check if socket is ready for recv
    fd_set sockets_to_check;
    FD_ZERO( &sockets_to_check );
    FD_SET( (wby_socket) internal->socket, &sockets_to_check );

    struct timeval timeout; timeout.tv_sec = 0; timeout.tv_usec = 0;
    while( select( (int)( internal->socket + 1 ), &sockets_to_check, NULL, NULL, &timeout ) == 1 )
        {
        char buffer[ 4096 ];
        long int size = recv( internal->socket, buffer, sizeof( buffer ), 0 );
        if( size == -1 )
            {
            http->status = HTTP_STATUS_FAILED;
            return http->status;
            }
        else if( size > 0 )
            {
            size_t min_size = internal->data_size + ((size_t) size + 1);
            if( internal->data_capacity < min_size )
                {
                internal->data_capacity *= 2;
                if( internal->data_capacity < min_size ) internal->data_capacity = min_size;
                void* new_data = HTTP_MALLOC( memctx, internal->data_capacity );
                memcpy( new_data, internal->data, internal->data_size );
                HTTP_FREE( memctx, internal->data );
                internal->data = new_data;
                }
            memcpy( (void*)( ( (uintptr_t) internal->data ) + internal->data_size ), buffer, (size_t) size );
            internal->data_size += (unsigned long) size;
            }
        else if( size == 0 )
            {
            char const* status_line = (char const*) internal->data;

            int header_size = 0;
            char const* header_end = strstr( status_line, "\r\n\r\n" );
            if( header_end )
                {
                header_end += 4;
                header_size = (int)( header_end - status_line );
                }
            else
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }

            // skip http version
            status_line = strchr( status_line, ' ' );
            if( !status_line )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            ++status_line;

            // extract status code
            char status_code[ 16 ];
            char const* status_code_end = strchr( status_line, ' ' );
            if( !status_code_end )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            memcpy( status_code, status_line, (size_t)( status_code_end - status_line ) );
            status_code[ status_code_end - status_line ] = 0;
            status_line = status_code_end + 1;
            http->status_code = atoi( status_code );

            // extract reason phrase
            char const* reason_phrase_end = strstr( status_line, "\r\n" );
            if( !reason_phrase_end )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            size_t reason_phrase_len = (size_t)( reason_phrase_end - status_line );
            if( reason_phrase_len >= sizeof( internal->reason_phrase ) )
                reason_phrase_len = sizeof( internal->reason_phrase ) - 1;
            memcpy( internal->reason_phrase, status_line, reason_phrase_len );
            internal->reason_phrase[ reason_phrase_len ] = 0;
            status_line = reason_phrase_end + 1;

            // extract content type
            char const* content_type_start = strstr( status_line, "Content-Type: " );
            if( content_type_start )
                {
                content_type_start += strlen( "Content-Type: " );
                char const* content_type_end = strstr( content_type_start, "\r\n" );
                if( content_type_end )
                    {
                    size_t content_type_len = (size_t)( content_type_end - content_type_start );
                    if( content_type_len >= sizeof( internal->content_type ) )
                        content_type_len = sizeof( internal->content_type ) - 1;
                    memcpy( internal->content_type, content_type_start, content_type_len );
                    internal->content_type[ content_type_len ] = 0;
                    }
                }

            http->status =  http->status_code < 300 ? HTTP_STATUS_COMPLETED : HTTP_STATUS_FAILED;
            http->response_data = (void*)( ( (uintptr_t) internal->data ) + ((size_t) header_size) );
            http->response_size = internal->data_size - ((size_t) header_size);

            // add an extra zero after the received data, but don't modify the size, so ascii results can be used as
            // a zero terminated string. the size returned will be the string without this extra zero terminator.
            ( (char*)http->response_data )[ http->response_size ] = 0;
            return http->status;
            }
        }

    return http->status;
    }


void http_release( http_t* http )
    {
    http_internal_t* internal = (http_internal_t*) http;
    #ifdef _WIN32
        closesocket( internal->socket );
    #else
        close( internal->socket );
    #endif

    if( internal->request_header_large) HTTP_FREE( memctx, internal->request_header_large );
    HTTP_FREE( memctx, internal->data );
    HTTP_FREE( memctx, internal );
    #ifdef _WIN32
        WSACleanup();
    #endif
    }

int http_get_response(http_t* request)
{
    if( !request )
    {
        return HTTP_STATUS_FAILED;
    }

    http_status_t status = HTTP_STATUS_PENDING;
    int prev_size = -1;
    while( status == HTTP_STATUS_PENDING )
    {
        status = http_process( request );
        if( prev_size != (int) request->response_size )
        {
            //printf( "%d byte(s) received.\n", (int) request->response_size );
            prev_size = (int) request->response_size;
        }
    }

    if( status == HTTP_STATUS_FAILED )
    {
        //printf( "HTTP request failed (%d): %s.\n", request->status_code, request->reason_phrase );
        http_release( request );
        return HTTP_STATUS_FAILED;
    }


    return HTTP_STATUS_COMPLETED;
}

char *url_get_contents(const char *url, double timeout)
{
    clock_t begin;
    double time_spent;
    http_t *request = http_get( url, NULL );
    begin = clock();
    if(request != NULL)
    {
        // Download content to buffer.
        http_status_t status = HTTP_STATUS_PENDING;
        int prev_size = -1;
        while( status == HTTP_STATUS_PENDING )
        {
            status = http_process( request );
            if( prev_size != (int) request->response_size )
            {
                //printf( "%d byte(s) received.\n", (int) request->response_size );
                prev_size = (int) request->response_size;
            }

            time_spent = (double)(clock() - begin) / CLOCKS_PER_SEC;
            if(time_spent >= timeout)
            {
                status = HTTP_STATUS_FAILED;
                break;
            }
        }

        // Display buffer.
        if( status == HTTP_STATUS_FAILED )
        {
            //printf( "HTTP request failed (%d): %s.\n", request->status_code, request->reason_phrase );
            return NULL;
        }
        else
        {
            //printf("HTTP got content -- see bellow for how to access it\r\n");
            //printf( "\nContent type: %s\n\n%s\n", request->content_type, (char const*)request->response_data );

            // Copy req data to new buf
            // This is done so the http struct can be released and only the data can be returned. 
            const char *req_data = (const char *) request->response_data;
            size_t data_size = strlen(req_data);
            char *buf = (char *) malloc(data_size + 1);
            memcpy(buf, req_data, data_size);
            buf[data_size] = '\0';

            // Release HTTP struct and return content.
            http_release( request );
            return buf;
        }

        // Release buffer.
        http_release( request );
    }

    return NULL;
}



#endif

