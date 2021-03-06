/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigStateMachine : NSObject {
    unsigned int _currentState;
    NSString *_label;
    int _lock;
    id _owner;
    BOOL _performsAtomicStateTransitions;
    struct FigStateMachineStateConfiguration { BOOL x1; id x2; id x3; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; unsigned char x58; void*x59; unsigned short x60; void*x61; short x62; void*x63; void*x64; void*x65; void*x66; unsigned long x67; int x68; unsigned int x69/* : ? */; const void*x70; const void*x71; void*x72; void*x73; const int x74; void x75; void*x76; void*x77; void*x78; void*x79; const void*x80; void*x81; void*x82; void*x83; out const void*x84; short x85; void*x86; int x87; void*x88; out const void*x89; unsigned int x90; void*x91; void*x92; out const void*x93; void*x94; float x95; const void*x96; void*x97; void*x98; void*x99; out const void*x100; void*x101; int x102; void*x103; out const void*x104; unsigned int x105; void*x106; void*x107; out const void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; char *x121; void*x122; unsigned short x123; unsigned char x124; void*x125; void*x126; long doublex127; long doublex128; int x129; float x130; float x131; void*x132; short x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; const void*x140; long doublex141; void*x142; unsigned int x143/* : ? */; void*x144; void*x145; unsigned short x146; void*x147; void*x148; double x149; void*x150; const void*x151; float x152; float x153; void*x154; BOOL x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; struct x172; void*x173; void*x174; void*x175; float x176; void*x177; long x178; void*x179; out void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; float x205; void*x206; long x207; void*x208; out void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; } *_stateConfigurations;
    BOOL _stateCount;
}

@property (readonly) unsigned int currentState;
@property (readonly) NSString *currentStateLabel;
@property (readonly) NSString *label;
@property (nonatomic) BOOL performsAtomicStateTransitions;

+ (void)initialize;

- (BOOL)_transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2 errorStatus:(long)arg3;
- (unsigned int)currentState;
- (id)currentStateLabel;
- (void)dealloc;
- (id)description;
- (id)initWithLabel:(id)arg1 stateCount:(BOOL)arg2 initialState:(unsigned int)arg3 owner:(id)arg4;
- (id)label;
- (id)labelForState:(unsigned int)arg1;
- (void)markStateAsTerminal:(unsigned int)arg1;
- (BOOL)performsAtomicStateTransitions;
- (void)setLabel:(id)arg1 forState:(unsigned int)arg2;
- (void)setPerformsAtomicStateTransitions:(BOOL)arg1;
- (BOOL)transitionToState:(unsigned int)arg1;
- (BOOL)transitionToState:(unsigned int)arg1 errorStatus:(long)arg2;
- (BOOL)transitionToState:(unsigned int)arg1 fromState:(unsigned int)arg2;
- (BOOL)transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2;
- (void)whenTransitioningFromState:(unsigned int)arg1 toState:(unsigned int)arg2 callHandler:(id /* block */)arg3;
- (void)whenTransitioningToState:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStateFails:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStates:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStatesFail:(unsigned int)arg1 callHandler:(id /* block */)arg2;

@end
