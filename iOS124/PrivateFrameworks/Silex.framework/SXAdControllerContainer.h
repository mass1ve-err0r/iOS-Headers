//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAdControllerContainer-Protocol.h>

@class NSString, SXAdController;

@interface SXAdControllerContainer : NSObject <SXAdControllerContainer>
{
    SXAdController *_adController;
}

@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
- (void).cxx_destruct;
- (void)registerAdController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

