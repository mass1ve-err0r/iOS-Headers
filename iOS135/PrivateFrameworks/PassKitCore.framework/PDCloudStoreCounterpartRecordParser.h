/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreCounterpartRecordParser : NSObject {
    NSMutableDictionary * _identifierToParserZones;
    NSArray * _recordNamePrefixes;
    NSArray * _validRecordTypes;
}

- (void).cxx_destruct;
- (bool)_isValidRecordTypeForRecord:(id)arg1;
- (id)_parseIdentifierForRecord:(id)arg1;
- (void)addRecords:(id)arg1 fromPush:(bool)arg2;
- (id)allRecordsFromPush:(bool)arg1;
- (id)allRecordsWithIdentifier:(id)arg1 fromPush:(bool)arg2;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithValidRecordTypes:(id)arg1 recordNamePrefixes:(id)arg2;
- (void)removeIdentifiers:(id)arg1;

@end