//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface PersistentStoreConfiguration : NSObject <NSCopying>
{
    NSString *_databaseFileName;
    NSArray *_legacyModelVersionIdentifiers;
    NSString *_modelFileName;
    int _storeType;
}

@property(nonatomic) int storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) NSString *modelFileName; // @synthesize modelFileName=_modelFileName;
@property(copy, nonatomic) NSArray *legacyModelVersionIdentifiers; // @synthesize legacyModelVersionIdentifiers=_legacyModelVersionIdentifiers;
@property(retain, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property(readonly, nonatomic) NSString *integrityCookieFileName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStoreType:(int)arg1;

@end

