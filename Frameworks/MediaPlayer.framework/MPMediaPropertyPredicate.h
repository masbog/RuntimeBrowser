/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    int _comparisonType;
    NSString *_property;
    id _value;
}

@property (nonatomic) int comparisonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *property;
@property (readonly) Class superclass;
@property (nonatomic, copy) id value;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(int)arg3;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (int)comparisonType;
- (id)description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)property;
- (id)protobufferEncodableObject;
- (void)setComparisonType:(int)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end