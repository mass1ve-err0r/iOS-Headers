//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>
{
}

+ (id)watchDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)watchData;
@property(nonatomic) _Bool victoryDevice;
@property(copy, nonatomic) NSString *interfaceOrientation;
@property(nonatomic) _Bool configuredForLeftWrist;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

