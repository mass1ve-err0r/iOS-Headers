//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSRecognitionAction.h>

@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction
{
    NSURL *_url;
}

- (id)perform;
- (id)URL;
- (void)setURL:(id)arg1;
- (int)completionType;
- (void)dealloc;

@end

