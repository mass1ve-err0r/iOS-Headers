//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class NSArray, NSMutableDictionary;

@interface SUActivityViewController : UIActivityViewController
{
    NSMutableDictionary *_customTitles;
    NSArray *_suActivityItems;
    long long _transitionSafetyCount;
}

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

