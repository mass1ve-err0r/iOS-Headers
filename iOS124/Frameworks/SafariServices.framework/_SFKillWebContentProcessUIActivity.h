//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;

@interface _SFKillWebContentProcessUIActivity : _SFActivity
{
    id <_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;
}

@property(nonatomic) __weak id <_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate; // @synthesize webProcessDelegate=_webProcessDelegate;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

