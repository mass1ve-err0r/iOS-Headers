//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleFlowController-Protocol.h>

@class NSArray, NSString, PXPeopleBootstrapContext, UIViewController;
@protocol PXPeopleBootstrapFlowDelegate, PXPeopleFlowViewController, PXPeopleSuggestionManagerDataSource;

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController>
{
    id <PXPeopleBootstrapFlowDelegate> _bootstrapDelegate;
    id <PXPeopleSuggestionManagerDataSource> _bootstrapDataSource;
    PXPeopleBootstrapContext *_context;
    unsigned long long _namingResultType;
    NSArray *_viewControllers;
    unsigned long long _viewControllerIndex;
}

@property(nonatomic) unsigned long long viewControllerIndex; // @synthesize viewControllerIndex=_viewControllerIndex;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) unsigned long long namingResultType; // @synthesize namingResultType=_namingResultType;
@property(readonly, nonatomic) PXPeopleBootstrapContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> bootstrapDataSource; // @synthesize bootstrapDataSource=_bootstrapDataSource;
@property(retain, nonatomic) id <PXPeopleBootstrapFlowDelegate> bootstrapDelegate; // @synthesize bootstrapDelegate=_bootstrapDelegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
@property(readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property(readonly, nonatomic) _Bool hasPreviousViewController;
@property(readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property(readonly, nonatomic) _Bool hasNextViewController;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
@property(readonly, nonatomic) _Bool shouldPresentPostNaming;
@property(readonly, nonatomic) _Bool shouldPresentNaming;
- (void)dealloc;
- (id)initEmptyFlowWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)commonInitWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

