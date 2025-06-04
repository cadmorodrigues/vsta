#ifndef RTW_HEADER_PassVeh14DOF_h_
#define RTW_HEADER_PassVeh14DOF_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef PassVeh14DOF_COMMON_INCLUDES_
#define PassVeh14DOF_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "PassVeh14DOF_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T mxnzeug4nh ; real_T oncbp0s2zr ; real_T fsvm5wdpio ;
real_T ppy03j1qb0 ; real_T ann1mbf2pk ; real_T lfkckh45gm ; real_T a14t5l50m4
; real_T deb1ljvkmh ; real_T mo4bakyh35 ; real_T o5scpiwkct ; real_T
pxnhzxtrvj ; real_T lolwbkbdyz ; real_T ipmizht33u ; real_T b22phmh1ve ;
real_T iba44ce42u ; } cteb3oyvnq ; typedef struct { real_T kzqsfaol4a ;
real_T jz1qaqwx3v ; real_T hfejbbrskr ; real_T gd55tcuwje ; real_T pwwndqhk2w
; real_T dbx4mov4m4 ; real_T of554nhr01 ; real_T lffkwhcvxb ; real_T
b3ht5prdxs ; real_T nm41v2ucaw ; real_T hmhpue1uo5 ; real_T p05cg5l00v ;
real_T gwt4zcc4g3 ; real_T nzgr2qj1ft ; real_T lposaemyy4 ; } bqjh4erey1 ;
typedef struct { real_T cicq2wt240 ; real_T fr5u3xghpu [ 3 ] ; real_T
prbwkbzumq ; real_T d103xjheve ; real_T hjw2oal0pw ; real_T ckfnfmlort ;
real_T e50aspswiy ; real_T ojbdksy5fo ; real_T hnesvll3na ; real_T mp5ukvqobt
; real_T equgzhxlxr ; real_T d2t5jptaz1 [ 2 ] ; real_T ecyge1pzsf [ 2 ] ;
real_T d0s2eqjxkb ; real_T hhmhuy4zd5 ; real_T jvgyr4m0ot ; real_T pykx2qoc0w
; real_T npd13muehq ; real_T c5r4z1gssi ; real_T jelijprmkv ; real_T
aq2celegj2 ; real_T jpx2ecbdtc ; real_T czrilyfpsf ; real_T jqwqh33vy2 ;
real_T gwrahxk05s ; real_T dm03xfog1b ; real_T asavn0ctw4 ; real_T p4ehvgcpdy
; real_T c5a2s0vea1 ; real_T brq3iky05o ; real_T fyyuckkumu ; real_T
b03mqg2szy ; real_T j2kqfmigow ; real_T a0g0vgj20j ; real_T ckutmaxmqk ;
real_T lwa5zynhf2 [ 6 ] ; real_T gg04yehw5y ; real_T bpytoihiqt ; real_T
kfqbegqjbb ; real_T n20kcrgdwc ; real_T nptb0hyhub ; bqjh4erey1 oivxhq0cznz ;
cteb3oyvnq ldzdl10ue5i ; } hrnezzmo5t ; typedef struct { int_T okoyaqzdju ;
int_T nu2df2kwl1 ; int_T liwywmg0ur ; int_T l40kfboxs3 ; } fbaq4kzkfo ;
typedef struct { real_T akqcanfrph ; real_T fr1r4odzny ; real_T filezjrdvy ;
real_T k3ks4xuoxg ; } gbbrm3jtjx ; typedef struct { real_T oxbgtlrdud ;
real_T mwawmojnxi ; real_T lrpxsz0b4y ; real_T ih0d3zkte4 ; real_T croe320dav
[ 2 ] ; real_T krq1a23n0c [ 2 ] ; real_T p4h5wcxyke ; real_T k5joel52y2 ;
real_T agj4e5tw53 ; real_T fkmoewjjs4 ; real_T klqfajocmc ; real_T am1jp53fhb
; real_T gglfwuw35y ; real_T jukhnhv0ox ; real_T nedeonigjr ; real_T
iglw2qze0d ; real_T pasxvymmj2 ; real_T mqntoz5m5q ; real_T ijekr2pdxt ;
real_T lfaoqpegbf ; real_T gwweoitimw ; real_T fsqi22jaew ; real_T dlyxfg334c
[ 6 ] ; real_T igqifotzl4 ; real_T bguuce054u ; real_T muy0rgclxd ; real_T
phlylvhwdq ; real_T lvxdepsply ; bqjh4erey1 befbqbrvjk ; cteb3oyvnq
hyvok4zcde ; } azukdjvoab ; typedef struct { real_T m4wqzb2ia2 [ 3 ] ; real_T
ksqpydme1s [ 9 ] ; } nafsdv5ott ; typedef struct { real_T ah54u1egw0 ; real_T
l5a5rc0my3 ; boolean_T blafqnysyv ; boolean_T psggcyj44o ; } jrxvhjuqzx ;
typedef struct { real_T mwstxxdi3s ; boolean_T jssuiu3wxt ; int8_T gnyxap4gdb
; int8_T kaq4xl53jx ; int8_T fc00kr5opj ; int8_T htduue1soz ; int8_T
jvaxzka4z2 ; int8_T noth33b4op ; uint8_T lvet3mhvom ; uint8_T f4i5qvi3sc ; }
j1voep2fvx ; typedef struct { real_T aa44yahfij ; } k0w4owh1wt ; typedef
struct { real_T aa44yahfij ; } ewgqg0jltp ; typedef struct { boolean_T
aa44yahfij ; } c0vfcph2jr ; typedef struct { real_T aa44yahfij ; } ixrrjydlk1
; typedef struct { real_T aa44yahfij ; } jkv3rhibik ; typedef struct { real_T
aa44yahfij ; } lefies3zhx ; typedef struct { real_T as1map0icv ; } baunl1pyw5
; typedef struct { jrxvhjuqzx k31vvyldjn ; } fsefk1xnf1 ; typedef struct {
j1voep2fvx k31vvyldjn ; } jzunfcfcgs ; typedef struct { k0w4owh1wt k31vvyldjn
; } eymajdgx1m ; typedef struct { ewgqg0jltp k31vvyldjn ; } prkk3qd1ha ;
typedef struct { c0vfcph2jr k31vvyldjn ; } mxq12po52d ; typedef struct {
ixrrjydlk1 k31vvyldjn ; } denfui5vct ; typedef struct { jkv3rhibik k31vvyldjn
; } bdund2nz3j ; typedef struct { lefies3zhx k31vvyldjn ; } l1bxdafdp2 ;
typedef struct { baunl1pyw5 k31vvyldjn ; } erbtp2hzn5 ; typedef struct {
real_T jiymnmjvvi [ 3 ] ; real_T oj2b3bbbyc [ 9 ] ; } nafsdv5otth ; typedef
struct { real_T gx5x4ztqah [ 3 ] ; real_T h5psafpbqk [ 3 ] ; real_T
d5i3gzd5sf [ 3 ] ; real_T itp5obvoz0 [ 3 ] ; real_T hezsloaggd [ 12 ] ;
real_T hez4tdrrkt [ 4 ] ; real_T em34mocrdd [ 4 ] ; real_T cqhb0irlyj ;
real_T fmgxt1jne3 [ 4 ] ; real_T gpy3qkujpt [ 4 ] ; real_T fsayo1nhwb [ 4 ] ;
real_T mjdfw3nby4 [ 4 ] ; real_T am0clwdkl0 ; real_T avwhrzvqh5 [ 4 ] ;
real_T bni1z032nu ; real_T arvhleyolj ; real_T e4dw33qtfq ; real_T j4my0x4bzt
[ 4 ] ; real_T hthhtic4qv [ 4 ] ; real_T iyvcsahwyq [ 6 ] ; real_T olvtfollgv
[ 6 ] ; real_T atdufzyuuj ; real_T nutel31b4q [ 4 ] ; real_T dlqcqpqnkl [ 4 ]
; real_T duhuv0np2j [ 12 ] ; real_T pth25tqvmo [ 4 ] ; real_T l3gbybwijn [ 4
] ; real_T fqvhu33fza [ 4 ] ; real_T bv4mxbp41h [ 4 ] ; real_T pfzlwiwkut [
92 ] ; real_T fnbdxfdev4 [ 6 ] ; real_T ainuj45vxd [ 6 ] ; real_T pcbxf2fdkn
[ 6 ] ; real_T bwdtaddfa3 [ 6 ] ; real_T i0dvyv4cex [ 6 ] ; real_T nxafiwrriu
[ 6 ] ; real_T o4xm5kjbof [ 6 ] ; real_T in2wjv2kfe [ 6 ] ; real_T gzz3ye1gen
[ 3 ] ; real_T boyjweequl [ 3 ] ; real_T okmqzhv5na [ 3 ] ; real_T kld552rx5m
[ 9 ] ; real_T o24zd4ebno [ 9 ] ; real_T kgqnixdqan [ 3 ] ; real_T kdenipkvbp
[ 3 ] ; real_T nydq3kwiav ; real_T iukka5zdos [ 6 ] ; real_T jvqczsq2fd ;
real_T btwxixir5u ; real_T dpmtqoov3m [ 9 ] ; real_T itcktfrgfz [ 3 ] ;
real_T oe1dzamdh1 [ 3 ] ; real_T b1vgqocwys [ 3 ] ; real_T l1uufffmdx [ 3 ] ;
real_T aqapk1v0t0 [ 3 ] ; real_T ox2w4gkipx [ 3 ] ; real_T oewcnnmfmr [ 3 ] ;
real_T n3qakgny1j ; real_T juwiwnsyjk ; real_T o14k4utpmj [ 4 ] ; real_T
h1kxf2pmmg ; real_T jhg1g2vzdy [ 4 ] ; real_T j3mjj4bcm0 ; real_T kzglkmb1cy
[ 12 ] ; real_T fiq5gikbtr [ 4 ] ; real_T ggfonfcqtp [ 4 ] ; real_T
iaomq3ybdj [ 4 ] ; real_T j0mfdzb04k ; real_T fa5lgoaihl ; real_T ghjrh22zyt
[ 4 ] ; real_T hdoyhunv1o [ 4 ] ; real_T kiyo5hzxi2 [ 4 ] ; real_T p0xrgrfxel
[ 4 ] ; real_T o0uuzv3anx [ 4 ] ; real_T dns5wl2she [ 4 ] ; real_T ndnd53sn5r
; real_T jfrgpvrdeu [ 3 ] ; real_T gxwazai45h [ 4 ] ; real_T gddrn1a0vn [ 12
] ; real_T cu5peihsua [ 2 ] ; real_T hlnzk4rkuk [ 6 ] ; real_T j2dm0fccwn [ 6
] ; real_T htyet5m21q [ 3 ] ; real_T ee2uzipgww [ 2 ] ; real_T dx2z2izbuv ;
real_T dswgknmxhc [ 12 ] ; real_T jam5pnoyrm [ 2 ] ; real_T ljyxkxd55t [ 6 ]
; real_T cciw5zyeym [ 6 ] ; real_T j4kdqzk1n5 [ 3 ] ; real_T ix0lonhhu2 [ 2 ]
; real_T nwfrejgm22 ; real_T andlutfjv4 [ 12 ] ; nafsdv5otth m42zhk1m0gm [ 4
] ; fsefk1xnf1 fcx1mol1nq [ 4 ] ; nafsdv5ott m42zhk1m0g [ 4 ] ; azukdjvoab
aolbjpn4v4 [ 2 ] ; hrnezzmo5t opyd5j3dsd [ 2 ] ; } k0r514zhkn ; typedef
struct { real_T hymmah22xz [ 9 ] ; struct { void * LoggedData ; void *
SignalProbe ; } homlg5qry1 ; struct { void * LoggedData ; void * SignalProbe
; } akaz4f2y4m ; struct { void * LoggedData ; void * SignalProbe ; }
dhss2us2db ; int_T krcegcursg [ 4 ] ; int8_T gi424e55lf ; boolean_T
mvxawinz10 ; jzunfcfcgs fcx1mol1nq [ 4 ] ; fbaq4kzkfo opyd5j3dsd [ 2 ] ; }
jb251fek03 ; typedef struct { real_T mikcbgv21f [ 8 ] ; real_T blvhp4tgtm [ 3
] ; real_T hpjiynoun5 [ 3 ] ; real_T daheo5vuvb [ 3 ] ; real_T ku0nrbvwvg [ 3
] ; real_T fwmyae1wzn [ 4 ] ; real_T dtjafqjnli [ 4 ] ; real_T pbvhqqzyxg [ 4
] ; real_T dygqmcwtyc [ 12 ] ; real_T a5tsdaqepm [ 4 ] ; real_T icb2kaexil [
3 ] ; eymajdgx1m fcx1mol1nq [ 4 ] ; } h21fsrthfa ; typedef int_T hn13clrkfo [
3 ] ; typedef real_T ja0rmqcfdg [ 6 ] ; typedef struct { real_T mikcbgv21f [
8 ] ; real_T blvhp4tgtm [ 3 ] ; real_T hpjiynoun5 [ 3 ] ; real_T daheo5vuvb [
3 ] ; real_T ku0nrbvwvg [ 3 ] ; real_T fwmyae1wzn [ 4 ] ; real_T dtjafqjnli [
4 ] ; real_T pbvhqqzyxg [ 4 ] ; real_T dygqmcwtyc [ 12 ] ; real_T a5tsdaqepm
[ 4 ] ; real_T icb2kaexil [ 3 ] ; prkk3qd1ha fcx1mol1nq [ 4 ] ; } ectmdkaxud
; typedef struct { boolean_T mikcbgv21f [ 8 ] ; boolean_T blvhp4tgtm [ 3 ] ;
boolean_T hpjiynoun5 [ 3 ] ; boolean_T daheo5vuvb [ 3 ] ; boolean_T
ku0nrbvwvg [ 3 ] ; boolean_T fwmyae1wzn [ 4 ] ; boolean_T dtjafqjnli [ 4 ] ;
boolean_T pbvhqqzyxg [ 4 ] ; boolean_T dygqmcwtyc [ 12 ] ; boolean_T
a5tsdaqepm [ 4 ] ; boolean_T icb2kaexil [ 3 ] ; mxq12po52d fcx1mol1nq [ 4 ] ;
} gy0s4k0fxb ; typedef struct { real_T mikcbgv21f [ 8 ] ; real_T blvhp4tgtm [
3 ] ; real_T hpjiynoun5 [ 3 ] ; real_T daheo5vuvb [ 3 ] ; real_T ku0nrbvwvg [
3 ] ; real_T fwmyae1wzn [ 4 ] ; real_T dtjafqjnli [ 4 ] ; real_T pbvhqqzyxg [
4 ] ; real_T dygqmcwtyc [ 12 ] ; real_T a5tsdaqepm [ 4 ] ; real_T icb2kaexil
[ 3 ] ; denfui5vct fcx1mol1nq [ 4 ] ; } mq10j5tdpd ; typedef struct { real_T
mikcbgv21f [ 8 ] ; real_T blvhp4tgtm [ 3 ] ; real_T hpjiynoun5 [ 3 ] ; real_T
daheo5vuvb [ 3 ] ; real_T ku0nrbvwvg [ 3 ] ; real_T fwmyae1wzn [ 4 ] ; real_T
dtjafqjnli [ 4 ] ; real_T pbvhqqzyxg [ 4 ] ; real_T dygqmcwtyc [ 12 ] ;
real_T a5tsdaqepm [ 4 ] ; real_T icb2kaexil [ 3 ] ; bdund2nz3j fcx1mol1nq [ 4
] ; } omszgc4jji ; typedef struct { real_T mikcbgv21f [ 8 ] ; real_T
blvhp4tgtm [ 3 ] ; real_T hpjiynoun5 [ 3 ] ; real_T daheo5vuvb [ 3 ] ; real_T
ku0nrbvwvg [ 3 ] ; real_T fwmyae1wzn [ 4 ] ; real_T dtjafqjnli [ 4 ] ; real_T
pbvhqqzyxg [ 4 ] ; real_T dygqmcwtyc [ 12 ] ; real_T a5tsdaqepm [ 4 ] ;
real_T icb2kaexil [ 3 ] ; l1bxdafdp2 fcx1mol1nq [ 4 ] ; } bphav3l4td ;
typedef struct { erbtp2hzn5 fcx1mol1nq [ 4 ] ; gbbrm3jtjx opyd5j3dsd [ 2 ] ;
} beahf2xhqn ; struct o20ylfmnd4_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 [ 3 ] ; real_T P_7 [ 3 ] ;
} ; struct ixt5yofl3e_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 [ 3 ] ; real_T P_7 [ 3 ] ; } ; struct
fqfe55v4os_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T
P_10 ; real_T P_11 ; real_T P_12 [ 2 ] ; real_T P_13 ; real_T P_14 ; real_T
P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ;
ixt5yofl3e oivxhq0cznz ; o20ylfmnd4 ldzdl10ue5i ; } ; struct futqym3qfo_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 [ 2 ] ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T
P_16 ; real_T P_17 ; ixt5yofl3e befbqbrvjk ; o20ylfmnd4 hyvok4zcde ; } ;
struct ockhrdxqqe_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; boolean_T P_5 ; boolean_T P_6 ; boolean_T P_7 ; boolean_T P_8 [
8 ] ; } ; struct fevtypq00p_ { real_T P_0 ; ockhrdxqqe k31vvyldjn ; } ;
struct l0o1fxj1vpq_ { real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 [
2 ] ; real_T P_13 [ 2 ] ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T
P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ;
real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 [ 31 ] ; real_T P_27 [
31 ] ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ;
real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T
P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 [ 9 ] ; real_T P_42 ; real_T
P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ;
real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T
P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ;
real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T
P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ;
real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T
P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ;
real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T
P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ;
real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T
P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T
P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T
P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T
P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T
P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T
P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T
P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T
P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T
P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T
P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T
P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T
P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T
P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T
P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T
P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T
P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T
P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T
P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T
P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T
P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T
P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ; real_T
P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ; real_T
P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ; real_T
P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217 ; real_T
P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T P_222 ; real_T
P_223 ; real_T P_224 ; real_T P_225 [ 2 ] ; real_T P_226 [ 2 ] ; real_T P_227
; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 [ 3 ] ; real_T
P_232 ; real_T P_233 ; real_T P_234 [ 31 ] ; real_T P_235 ; real_T P_236 ;
real_T P_237 ; real_T P_238 [ 3 ] ; real_T P_239 ; real_T P_240 ; real_T
P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T
P_246 ; real_T P_247 ; real_T P_248 [ 3 ] ; real_T P_249 ; real_T P_250 [ 2 ]
; real_T P_251 ; real_T P_252 ; real_T P_253 [ 3 ] ; real_T P_254 ; real_T
P_255 [ 9 ] ; real_T P_256 [ 3 ] ; real_T P_257 ; real_T P_258 [ 9 ] ; real_T
P_259 [ 3 ] ; real_T P_260 ; real_T P_261 [ 9 ] ; real_T P_262 [ 3 ] ; real_T
P_263 ; real_T P_264 [ 9 ] ; real_T P_265 [ 3 ] ; real_T P_266 ; real_T P_267
[ 9 ] ; real_T P_268 [ 3 ] ; real_T P_269 ; real_T P_270 [ 9 ] ; real_T P_271
[ 3 ] ; real_T P_272 ; real_T P_273 [ 9 ] ; real_T P_274 [ 3 ] ; real_T P_275
; real_T P_276 ; real_T P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 [
12 ] ; real_T P_281 ; real_T P_282 ; real_T P_283 ; real_T P_284 ; real_T
P_285 ; real_T P_286 ; real_T P_287 ; real_T P_288 ; real_T P_289 ; real_T
P_290 ; real_T P_291 [ 4 ] ; real_T P_292 ; real_T P_293 ; real_T P_294 [ 4 ]
; real_T P_295 [ 4 ] ; real_T P_296 [ 4 ] ; real_T P_297 ; real_T P_298 ;
real_T P_299 ; real_T P_300 ; real_T P_301 ; real_T P_302 ; real_T P_303 ;
real_T P_304 ; real_T P_305 [ 4 ] ; real_T P_306 [ 4 ] ; real_T P_307 [ 4 ] ;
real_T P_308 [ 4 ] ; real_T P_309 [ 4 ] ; real_T P_310 [ 4 ] ; real_T P_311 [
92 ] ; real_T P_312 [ 3 ] ; real_T P_313 [ 3 ] ; real_T P_314 [ 9 ] ; real_T
P_315 [ 2 ] ; real_T P_316 [ 2 ] ; real_T P_317 [ 3 ] ; real_T P_318 ; real_T
P_319 ; real_T P_320 ; real_T P_321 ; real_T P_322 ; real_T P_323 ; real_T
P_324 ; real_T P_325 ; real_T P_326 ; real_T P_327 ; real_T P_328 ; real_T
P_329 ; real_T P_330 ; real_T P_331 ; real_T P_332 ; real_T P_333 ; real_T
P_334 ; real_T P_335 ; real_T P_336 ; real_T P_337 ; uint8_T P_338 ;
fevtypq00p fcx1mol1nq ; futqym3qfo aolbjpn4v4 ; fqfe55v4os opyd5j3dsd ; } ;
struct mmo2vwjqw3 { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 3 ] ; real_T mr_nonContSig1 [ 3 ] ; real_T mr_nonContSig2 [
9 ] ; real_T mr_nonContSig3 [ 3 ] ; real_T mr_nonContSig4 [ 9 ] ; real_T
mr_nonContSig5 [ 9 ] ; real_T mr_nonContSig6 [ 12 ] ; real_T mr_nonContSig7 [
1 ] ; real_T mr_nonContSig8 [ 3 ] ; real_T mr_nonContSig9 [ 3 ] ; real_T
mr_nonContSig10 [ 3 ] ; real_T mr_nonContSig11 [ 3 ] ; boolean_T
mr_nonContSig12 [ 1 ] ; boolean_T mr_nonContSig13 [ 1 ] ; boolean_T
mr_nonContSig14 [ 1 ] ; boolean_T mr_nonContSig15 [ 1 ] ; boolean_T
mr_nonContSig16 [ 1 ] ; boolean_T mr_nonContSig17 [ 1 ] ; boolean_T
mr_nonContSig18 [ 1 ] ; boolean_T mr_nonContSig19 [ 1 ] ; real_T
mr_nonContSig20 [ 12 ] ; real_T mr_nonContSig21 [ 4 ] ; real_T
mr_nonContSig22 [ 3 ] ; real_T mr_nonContSig23 [ 1 ] ; real_T mr_nonContSig24
[ 1 ] ; real_T mr_nonContSig25 [ 1 ] ; real_T mr_nonContSig26 [ 1 ] ; real_T
mr_nonContSig27 [ 1 ] ; real_T mr_nonContSig28 [ 1 ] ; real_T mr_nonContSig29
[ 1 ] ; real_T mr_nonContSig30 [ 1 ] ; real_T mr_nonContSig31 [ 1 ] ; real_T
mr_nonContSig32 [ 1 ] ; real_T mr_nonContSig33 [ 1 ] ; real_T mr_nonContSig34
[ 1 ] ; real_T mr_nonContSig35 [ 1 ] ; real_T mr_nonContSig36 [ 1 ] ; real_T
mr_nonContSig37 [ 1 ] ; real_T mr_nonContSig38 [ 1 ] ; real_T mr_nonContSig39
[ 1 ] ; real_T mr_nonContSig40 [ 1 ] ; real_T mr_nonContSig41 [ 1 ] ; real_T
mr_nonContSig42 [ 1 ] ; real_T mr_nonContSig43 [ 1 ] ; real_T mr_nonContSig44
[ 1 ] ; real_T mr_nonContSig45 [ 1 ] ; real_T mr_nonContSig46 [ 1 ] ; real_T
mr_nonContSig47 [ 1 ] ; real_T mr_nonContSig48 [ 1 ] ; real_T mr_nonContSig49
[ 1 ] ; real_T mr_nonContSig50 [ 1 ] ; real_T mr_nonContSig51 [ 1 ] ; real_T
mr_nonContSig52 [ 1 ] ; real_T mr_nonContSig53 [ 1 ] ; real_T mr_nonContSig54
[ 1 ] ; real_T mr_nonContSig55 [ 1 ] ; real_T mr_nonContSig56 [ 1 ] ; real_T
mr_nonContSig57 [ 1 ] ; real_T mr_nonContSig58 [ 1 ] ; real_T mr_nonContSig59
[ 1 ] ; real_T mr_nonContSig60 [ 1 ] ; real_T mr_nonContSig61 [ 1 ] ; real_T
mr_nonContSig62 [ 1 ] ; real_T mr_nonContSig63 [ 1 ] ; real_T mr_nonContSig64
[ 1 ] ; real_T mr_nonContSig65 [ 1 ] ; real_T mr_nonContSig66 [ 1 ] ; real_T
mr_nonContSig67 [ 1 ] ; real_T mr_nonContSig68 [ 1 ] ; real_T mr_nonContSig69
[ 1 ] ; real_T mr_nonContSig70 [ 1 ] ; real_T mr_nonContSig71 [ 1 ] ; real_T
mr_nonContSig72 [ 1 ] ; real_T mr_nonContSig73 [ 1 ] ; real_T mr_nonContSig74
[ 1 ] ; real_T mr_nonContSig75 [ 1 ] ; real_T mr_nonContSig76 [ 1 ] ; real_T
mr_nonContSig77 [ 1 ] ; real_T mr_nonContSig78 [ 1 ] ; real_T mr_nonContSig79
[ 1 ] ; real_T mr_nonContSig80 [ 1 ] ; real_T mr_nonContSig81 [ 1 ] ; real_T
mr_nonContSig82 [ 1 ] ; real_T mr_nonContSig83 [ 1 ] ; real_T mr_nonContSig84
[ 1 ] ; real_T mr_nonContSig85 [ 1 ] ; real_T mr_nonContSig86 [ 1 ] ; real_T
mr_nonContSig87 [ 1 ] ; real_T mr_nonContSig88 [ 1 ] ; real_T mr_nonContSig89
[ 1 ] ; real_T mr_nonContSig90 [ 1 ] ; real_T mr_nonContSig91 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 92 ] ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
11 ] ; int32_T * vardimsAddress [ 11 ] ; RTWLoggingFcnPtr loggingPtrs [ 11 ]
; sysRanDType * systemRan [ 25 ] ; int_T systemTid [ 25 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
k0r514zhkn rtb ; jb251fek03 rtdw ; gwlxzditat rtm ; } egcgcay4tuh ; extern
real_T rtP_camberFront ; extern real_T rtP_camberRear ; extern real_T
rtP_casterFront ; extern real_T rtP_casterRear ; extern real_T
rtP_lateralStiffness ; extern real_T rtP_pressaoPneu ; extern real_T
rtP_toeFront ; extern real_T rtP_toeRear ; extern real_T
rtP_verticalStiffness ; extern void klg3zs3vu4 ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , gwlxzditat * const ke3gqsjzkb , k0r514zhkn
* localB , jb251fek03 * localDW , h21fsrthfa * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_PassVeh14DOF_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_PassVeh14DOF_GetDWork ( const
egcgcay4tuh * mdlrefDW ) ; extern void mr_PassVeh14DOF_SetDWork ( egcgcay4tuh
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_PassVeh14DOF_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_PassVeh14DOF_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * PassVeh14DOF_GetCAPIStaticMap ( void ) ;
extern void n34y0qyv41 ( cteb3oyvnq * localB ) ; extern void ldzdl10ue5 (
gwlxzditat * const ke3gqsjzkb , real_T k3jlmkgqpf , real_T nf0q1cqtwn ,
real_T djzl2gy0ma , real_T ge2klxnmjs , real_T e42hhssswd , cteb3oyvnq *
localB , o20ylfmnd4 * localP , real_T rtp_Hmax ) ; extern void jipq50ykxa (
bqjh4erey1 * localB ) ; extern void oivxhq0czn ( gwlxzditat * const
ke3gqsjzkb , real_T fxvzhgfyki , real_T id0jfhenth , real_T mfqed0idfq ,
real_T ofgxerhaz1 , real_T a1nxpppy1c , bqjh4erey1 * localB , ixt5yofl3e *
localP , real_T rtp_Hmax ) ; extern void cp4q0jwdsy ( jrxvhjuqzx * localB ,
j1voep2fvx * localDW , ockhrdxqqe * localP , k0w4owh1wt * localX , real_T
rtp_omegao ) ; extern void mvcalo4ahf ( jrxvhjuqzx * localB , j1voep2fvx *
localDW , k0w4owh1wt * localX ) ; extern void nu15l3egkm ( jrxvhjuqzx *
localB ) ; extern void gawdypwfto ( jrxvhjuqzx * localB , j1voep2fvx *
localDW , ewgqg0jltp * localXdot ) ; extern void gayvpyaph1 ( gwlxzditat *
const ke3gqsjzkb , real_T icyiiqibih , real_T ppqocs1wqb , jrxvhjuqzx *
localB , j1voep2fvx * localDW , ockhrdxqqe * localP , baunl1pyw5 * localZCSV
, real_T rtp_br , real_T rtp_OmegaTol ) ; extern void oqxh41gl5v ( gwlxzditat
* const ke3gqsjzkb , real_T icyiiqibih , real_T ppqocs1wqb , real_T
mizdrk3zm2 , jrxvhjuqzx * localB , j1voep2fvx * localDW , ockhrdxqqe * localP
, k0w4owh1wt * localX , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy ,
real_T rtp_OmegaTol ) ; extern void pas0r4q5nt ( gwlxzditat * const
ke3gqsjzkb , jb251fek03 * localDW ) ; extern void m3kvjvuvj4 ( k0r514zhkn *
localB , jb251fek03 * localDW , h21fsrthfa * localX ) ; extern void
nqasp5wza1 ( k0r514zhkn * localB , jb251fek03 * localDW , h21fsrthfa * localX
) ; extern void g53loesncj ( k0r514zhkn * localB , jb251fek03 * localDW ) ;
extern void kpl5p5meuz ( real_T g5sfsronmg [ 3 ] , k0r514zhkn * localB ,
jb251fek03 * localDW , h21fsrthfa * localX , ectmdkaxud * localXdot ) ;
extern void gahgwqe10m ( gwlxzditat * const ke3gqsjzkb , k0r514zhkn * localB
, jb251fek03 * localDW , beahf2xhqn * localZCSV ) ; extern void jpl1qt0btr (
gwlxzditat * const ke3gqsjzkb , mq10j5tdpd * localXAbsTol ) ; extern void
PassVeh14DOF ( gwlxzditat * const ke3gqsjzkb , const real_T bczv22mps0 [ 4 ]
, const real_T hcd1y4n4my [ 4 ] , const real_T c3zd4dk1uf [ 4 ] , const
real_T ezwtynlaay [ 3 ] , const real_T miqwpmctiu [ 4 ] , const real_T
jwz44h4qyo [ 4 ] , real_T g5sfsronmg [ 3 ] , real_T dwbmln1se2 [ 3 ] , real_T
o4xt0a5dmp [ 3 ] , real_T elv4vw1bsg [ 3 ] , real_T n0nnakkppo [ 3 ] , real_T
nt0o0kr5ap [ 3 ] , real_T * ofgvow0d0k , real_T pnplhjjsam [ 3 ] , real_T
hxadql5meo [ 3 ] , real_T m2jizfv4ot [ 4 ] , real_T jp2gflnfah [ 4 ] , real_T
azbxswejfi [ 4 ] , real_T ges3gpmlk4 [ 4 ] , real_T hvtgnxvd5g [ 4 ] , real_T
ccq1g1j2wk [ 4 ] , k0r514zhkn * localB , jb251fek03 * localDW , h21fsrthfa *
localX ) ; extern void apei0jh2jv ( gwlxzditat * const ke3gqsjzkb ) ;
#endif
