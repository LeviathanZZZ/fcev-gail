#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "dif03hcjvgl" , 17 , 352 }
, { "hmke5fx3tcj" , 18 , 2832 } , { "g5h05g3u4wx" , 19 , 27624 } , {
"uint64_T" , 20 , 8 } , { "int64_T" , 21 , 8 } , { "uint_T" , 22 , 32 } , {
"char_T" , 23 , 8 } , { "uchar_T" , 24 , 8 } , { "time_T" , 25 , 8 } } ;
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T
) , sizeof ( uint64_T ) , sizeof ( dif03hcjvgl ) , sizeof ( hmke5fx3tcj ) ,
sizeof ( g5h05g3u4wx ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof (
uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ;
static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"dif03hcjvgl" , "hmke5fx3tcj" , "g5h05g3u4wx" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & arol2xwgeua . mdtyud1uco ) , 0 , 0
, 86 } , { ( char_T * ) ( & arol2xwgeua . pmarfk24je ) , 8 , 0 , 5 } , { (
char_T * ) ( & arol2xwgeua . dxcv00k5uk . i1rtqrd21n ) , 0 , 0 , 1 } , { (
char_T * ) ( & arol2xwgeua . mfp3l0luimk . i1rtqrd21n ) , 0 , 0 , 1 } , { (
char_T * ) ( & lw0sy0o11jr . mumtw2t4fy [ 0 ] ) , 0 , 0 , 40 } , { ( char_T *
) ( & lw0sy0o11jr . jfjzwnxtuk . AQHandles ) , 11 , 0 , 18 } , { ( char_T * )
( & lw0sy0o11jr . ahou0vl2z3 ) , 6 , 0 , 1 } , { ( char_T * ) ( & lw0sy0o11jr
. pjfrrptm45 ) , 7 , 0 , 2 } , { ( char_T * ) ( & lw0sy0o11jr . noc02rvf4u )
, 10 , 0 , 3 } , { ( char_T * ) ( & lw0sy0o11jr . agsuq5sl52 ) , 2 , 0 , 17 }
, { ( char_T * ) ( & lw0sy0o11jr . mbvoiiw20z ) , 3 , 0 , 2 } , { ( char_T *
) ( & lw0sy0o11jr . lzrdwg5jtp ) , 8 , 0 , 2 } , { ( char_T * ) ( &
lw0sy0o11jr . jkb4b3hcqy ) , 18 , 0 , 1 } , { ( char_T * ) ( & lw0sy0o11jr .
f2cw5vgug5 ) , 19 , 0 , 1 } , { ( char_T * ) ( & lw0sy0o11jr . im32k3bxdo ) ,
6 , 0 , 1 } , { ( char_T * ) ( & lw0sy0o11jr . jfaeol5er3 ) , 17 , 0 , 1 } ,
{ ( char_T * ) ( & lw0sy0o11jr . dxcv00k5uk . g1iyf3f52k ) , 2 , 0 , 1 } , {
( char_T * ) ( & lw0sy0o11jr . dxcv00k5uk . flozbskedr ) , 8 , 0 , 1 } , { (
char_T * ) ( & lw0sy0o11jr . mfp3l0luimk . g1iyf3f52k ) , 2 , 0 , 1 } , { (
char_T * ) ( & lw0sy0o11jr . mfp3l0luimk . flozbskedr ) , 8 , 0 , 1 } } ;
static DataTypeTransitionTable rtBTransTable = { 20U , rtBTransitions } ;
static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( &
bo1z0vnccp . LongitudinalDriverModel_GearInit ) , 0 , 0 , 2811 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
