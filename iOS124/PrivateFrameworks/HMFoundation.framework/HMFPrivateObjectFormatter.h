//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <HMFoundation/HMFPrivateDescriptionFormatter-Protocol.h>

@class NSString;

@interface HMFPrivateObjectFormatter : NSFormatter <HMFPrivateDescriptionFormatter>
{
}

+ (id)defaultFormatter;
- (id)privateStringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

