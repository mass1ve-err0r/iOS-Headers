//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@interface AppMetricsEvent : AMSMetricsEvent
{
}

+ (id)_sanitizeError:(id)arg1;
+ (id)_defaultProperties;
- (id)description;
- (_Bool)requiresDiagnosticSendingPermission;
- (void)addInstallationDescription:(id)arg1;
- (void)addApplicationDescription:(id)arg1;
- (id)initWithTopic:(id)arg1;

@end

