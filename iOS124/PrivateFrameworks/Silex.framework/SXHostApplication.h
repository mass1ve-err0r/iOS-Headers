//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXHost-Protocol.h>

@class NSString, UIApplication;

@interface SXHostApplication : NSObject <SXHost>
{
    UIApplication *_application;
}

@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (_Bool)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool active;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

