//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSObject;
@protocol FCMutableTodayPrivateData, FCPrivateDataContext;

@protocol FCTodayPrivateDataTransaction <NSCopying, NSSecureCoding>
- (void)performWithTodayPrivateData:(NSObject<FCMutableTodayPrivateData> *)arg1;
- (void)performWithPrivateDataContext:(id <FCPrivateDataContext>)arg1;
@end

