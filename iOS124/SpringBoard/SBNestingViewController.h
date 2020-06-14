//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBNestingViewControllerDelegate-Protocol.h"
#import "SBViewControllerTransitionContextDelegate-Protocol.h"

@class NSArray, NSHashTable, NSString, SBViewControllerTransitionContext;
@protocol SBNestingViewControllerDelegate;

@interface SBNestingViewController : UIViewController <SBViewControllerTransitionContextDelegate, SBNestingViewControllerDelegate>
{
    id <SBNestingViewControllerDelegate> _delegate;
    SBNestingViewController *_parentNestingViewController;
    SBNestingViewController *_nestedViewController;
    long long _currentTransitionOperation;
    SBViewControllerTransitionContext *_currentTransition;
    CDUnknownBlockType _clientOperationCompletion;
    NSHashTable *_transitionObservers;
}

@property(retain, nonatomic) NSHashTable *transitionObservers; // @synthesize transitionObservers=_transitionObservers;
@property(copy, nonatomic) CDUnknownBlockType clientOperationCompletion; // @synthesize clientOperationCompletion=_clientOperationCompletion;
@property(retain, nonatomic) SBViewControllerTransitionContext *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(nonatomic) long long currentTransitionOperation; // @synthesize currentTransitionOperation=_currentTransitionOperation;
@property(retain, nonatomic) SBNestingViewController *nestedViewController; // @synthesize nestedViewController=_nestedViewController;
@property(nonatomic) __weak SBNestingViewController *parentNestingViewController; // @synthesize parentNestingViewController=_parentNestingViewController;
@property(nonatomic) __weak id <SBNestingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForOperation:(long long)arg1;
- (void)_setFinalStateForTransitioningViewController:(id)arg1;
- (void)_updateStateForTransitioningViewController:(id)arg1;
- (void)_handleRemoveChildViewController:(id)arg1;
- (void)_handleWillRemoveChildViewController:(id)arg1;
- (void)_handleAddChildViewController:(id)arg1;
- (void)_handleWillAddChildViewController:(id)arg1;
- (void)_performOperation:(long long)arg1 onViewController:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldAddTransitioningViewControllerAfterCurrentTransitionCompletes;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)transitionDidReverse:(id)arg1;
- (void)transitionWillReverse:(id)arg1;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (id)transitionCoordinator;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)traverseNestedViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)frameForNestedViewController:(id)arg1 afterOperation:(long long)arg2 withParentContainerSize:(struct CGSize)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (void)removeNestedViewController:(id)arg1;
- (void)addNestedViewController:(id)arg1;
@property(readonly, nonatomic) _Bool isTransitioning;
@property(readonly, nonatomic) SBNestingViewController *viewControllerCurrentlyDrivingTransition;
- (void)removeTransitionObserver:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
@property(readonly, nonatomic) SBNestingViewController *deepestNestedDescendantViewController;
@property(readonly, copy, nonatomic) NSArray *nestedViewControllers;
- (void)setNestedViewControllers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)popNestedViewControllerAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pushNestedViewController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

