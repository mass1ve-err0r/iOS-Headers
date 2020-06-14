//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/ICAccessibilityExtras-Protocol.h>
#import <NotesUI/ICAnalyticsReporterAccessibilityDelegate-Protocol.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras, ICAnalyticsReporterAccessibilityDelegate>
{
}

+ (id)sharedInstance;
- (_Bool)shouldPerformLoggingForSwitchControl;
- (_Bool)shouldPerformLoggingForVoiceOver;
- (_Bool)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end

