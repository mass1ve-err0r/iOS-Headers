//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCTopicTranslation, NSString;

@protocol FCTranslationProvider <NSObject>
- (NSString *)favoriteTranslationForTagID:(NSString *)arg1;
- (FCTopicTranslation *)topicTranslationForTagID:(NSString *)arg1;
@end

