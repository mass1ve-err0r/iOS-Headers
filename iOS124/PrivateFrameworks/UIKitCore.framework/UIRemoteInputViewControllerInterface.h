//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <UIKitCore/_UIIVCResponseDelegate-Protocol.h>

@class NSString;
@protocol _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>
{
    id <_UIIVCResponseDelegate> _responseDelegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

