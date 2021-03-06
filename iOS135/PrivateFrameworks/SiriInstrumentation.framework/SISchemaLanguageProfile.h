/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaLanguageProfile : PBCodable {
    NSData * _l;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *l;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)l;
- (bool)readFrom:(id)arg1;
- (void)setL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
