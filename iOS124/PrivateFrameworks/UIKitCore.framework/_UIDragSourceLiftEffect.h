//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragInteractionEffect-Protocol.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect>
{
    NSMapTable *_liftOperationByContext;
}

- (void).cxx_destruct;
- (void)_setInteractionEffectsLifted:(_Bool)arg1 withOperation:(id)arg2;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

