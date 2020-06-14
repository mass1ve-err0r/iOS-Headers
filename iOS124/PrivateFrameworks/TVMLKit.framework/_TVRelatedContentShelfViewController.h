//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/__TVShelfViewControllerDelegate-Protocol.h>

@class NSString, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>
{
    _TVShelfViewController *_shelfViewController;
}

@property(retain, nonatomic) _TVShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

