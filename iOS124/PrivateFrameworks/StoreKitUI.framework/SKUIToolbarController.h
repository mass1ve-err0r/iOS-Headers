//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SKUIToolbarButtonsController, SKUIToolbarViewElement;
@protocol SKUIToolbarControllerDelegate;

@interface SKUIToolbarController : NSObject
{
    SKUIToolbarButtonsController *_buttonsController;
    SKUIToolbarViewElement *_viewElement;
    NSArray *_toolbarItems;
    id <SKUIToolbarControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUIToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(readonly, nonatomic) SKUIToolbarViewElement *toolbarViewElement; // @synthesize toolbarViewElement=_viewElement;
- (void).cxx_destruct;
- (id)_barButtonItemWithButtonElement:(id)arg1;
- (id)_barButtonItemWithElement:(id)arg1;
- (_Bool)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2;
- (void)detachFromNavigationController:(id)arg1;
- (void)updateToolbarForNavigationController:(id)arg1;
- (void)dealloc;
- (id)initWithToolbarViewElement:(id)arg1;

@end

