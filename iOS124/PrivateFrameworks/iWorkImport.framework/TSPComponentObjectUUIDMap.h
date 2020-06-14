//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_objectUUIDToIdentifierDictionary;
}

@property(readonly, nonatomic) NSDictionary *objectUUIDToIdentifierDictionary; // @synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary;
@property(readonly, nonatomic) NSDictionary *identifierToObjectUUIDDictionary; // @synthesize identifierToObjectUUIDDictionary=_identifierToObjectUUIDDictionary;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToMessage:(RepeatedPtrField_f8410f9e *)arg1;
- (void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)identifierForObjectUUID:(id)arg1;
- (id)objectUUIDForIdentifier:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithMessage:(const RepeatedPtrField_f8410f9e *)arg1;
- (id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2;
- (id)init;

@end

