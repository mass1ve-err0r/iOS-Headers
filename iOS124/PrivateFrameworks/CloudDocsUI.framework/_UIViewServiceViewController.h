//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController;

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate>
{
    id _hostingViewController;
    UINavigationController *_containedNavController;
}

@property(readonly, nonatomic) UINavigationController *containedNavController; // @synthesize containedNavController=_containedNavController;
@property(readonly, nonatomic) id hostingViewController; // @synthesize hostingViewController=_hostingViewController;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (struct CGSize)_updatedContentSizeForPreferredContentSize:(struct CGSize)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setContainedNavController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

