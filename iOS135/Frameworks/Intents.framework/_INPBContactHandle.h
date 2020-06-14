/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactHandle : PBCodable <NSCopying, NSSecureCoding, _INPBContactHandle> {
    bool  __encodeLegacyGloryData;
    int  _emergencyType;
    struct { 
        unsigned int emergencyType : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    int  _type;
    NSString * _value;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int emergencyType;
@property (nonatomic) bool hasEmergencyType;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEmergencyType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)emergencyType;
- (id)emergencyTypeAsString:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEmergencyType;
- (bool)hasLabel;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setEmergencyType:(int)arg1;
- (void)setHasEmergencyType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end