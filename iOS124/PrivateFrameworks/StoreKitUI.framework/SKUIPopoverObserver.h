//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIPopoverController;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPopoverController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

