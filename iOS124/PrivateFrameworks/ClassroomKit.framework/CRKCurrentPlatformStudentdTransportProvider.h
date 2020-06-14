//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSString;
@protocol CRKTransportProviding;

@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKTransportProviding> mBaseProvider;
}

- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)makeProviderForCurrentPlatform;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

