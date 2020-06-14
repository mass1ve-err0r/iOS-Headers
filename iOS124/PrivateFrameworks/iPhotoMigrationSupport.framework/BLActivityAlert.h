//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iPhotoMigrationSupport/BLAlert.h>

@class UIActivityIndicatorView, UIProgressView;

@interface BLActivityAlert : BLAlert
{
    UIProgressView *_progressView;
    UIActivityIndicatorView *_activityIndicatorView;
    int _type;
    double _progress;
    _Bool _hasActivity;
}

- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setHasActivity:(_Bool)arg1;
- (void)setActivityType:(int)arg1;
- (int)activityType;
- (id)initWithType:(int)arg1 title:(id)arg2 cancelAction:(id)arg3;
- (id)initWithType:(int)arg1 title:(id)arg2 options:(int)arg3 cancelAction:(id)arg4;

@end

