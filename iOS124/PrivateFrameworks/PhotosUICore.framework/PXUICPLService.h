//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLService-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCPLServiceStatus, PXCPLState, PXCPLStatus;

@interface PXUICPLService : NSObject <PXChangeObserver, PXCPLService>
{
    PXCPLStatus *_statusProvider;
    PXCPLState *_state;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_serviceStatusDidChange:(id)arg1;
- (void)_setState:(id)arg1;
- (void)performAction:(long long)arg1;
- (_Bool)canPerformAction:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

