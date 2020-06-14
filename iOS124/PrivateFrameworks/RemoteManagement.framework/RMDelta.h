//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RMDelta : NSObject
{
    NSString *_uniqueIdentifier;
    long long _changeType;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)deleted;
- (void)changedWithDictionary:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1;

@end

