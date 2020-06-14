//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPBIRConverter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRPublicURLConverter : NSObject <UAPBIRConverter>
{
}

+ (void)registerConverter;
- (id)convertIRDataToPlatform:(id)arg1;
- (id)convertPlatformDataToIR:(id)arg1;
- (id)typeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

