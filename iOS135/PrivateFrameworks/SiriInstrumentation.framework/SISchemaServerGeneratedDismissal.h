/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaServerGeneratedDismissal : PBCodable {
    int  _serverGeneratedDismissalReason;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int serverGeneratedDismissalReason;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)serverGeneratedDismissalReason;
- (void)setServerGeneratedDismissalReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
