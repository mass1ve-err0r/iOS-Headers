//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/PKObservableContentContainer-Protocol.h>

@class NSHashTable, NSLock, NSString, _UIBackdropView;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer>
{
    _UIBackdropView *_backdropView;
    NSLock *_observersLock;
    NSHashTable *_observers;
    _Bool _overridesContentOverlayInsets;
    unsigned long long _style;
}

@property(nonatomic) _Bool overridesContentOverlayInsets; // @synthesize overridesContentOverlayInsets=_overridesContentOverlayInsets;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_observers;
- (void)removeContentContainerObserver:(id)arg1;
- (void)addContentContainerObserver:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly) Class superclass;

@end

