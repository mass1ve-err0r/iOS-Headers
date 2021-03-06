/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBEvent : PBCodable <NSCopying, NSSecureCoding, _INPBEvent> {
    bool  __encodeLegacyGloryData;
    NSArray * _eventDescriptors;
    _INPBString * _eventType;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eventDescriptors;
@property (nonatomic, readonly) unsigned long long eventDescriptorsCount;
@property (nonatomic, retain) _INPBString *eventType;
@property (nonatomic, readonly) bool hasEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventDescriptorsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addEventDescriptors:(id)arg1;
- (void)clearEventDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDescriptors;
- (id)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDescriptorsCount;
- (id)eventType;
- (bool)hasEventType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventDescriptors:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
