//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSSSpec : TSKSosBase
{
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSString *operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)canApplyOnObject:(id)arg1;
- (_Bool)isUnsetSpec;
- (id)getUnsetSpec;
- (id)specWithCurrentProperty:(id)arg1;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;

@end

