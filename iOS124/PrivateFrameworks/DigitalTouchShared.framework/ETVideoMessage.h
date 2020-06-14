//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class ETSketchMessage, NSArray, NSMutableArray, NSURL, UIImage;

@interface ETVideoMessage : ETMessage
{
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
    _Bool _pauseTimeCompression;
    NSURL *_mediaURL;
    UIImage *_stillImage;
    ETSketchMessage *_introMessage;
    unsigned long long _mediaType;
}

+ (unsigned short)messageType;
@property(nonatomic) _Bool pauseTimeCompression; // @synthesize pauseTimeCompression=_pauseTimeCompression;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) ETSketchMessage *introMessage; // @synthesize introMessage=_introMessage;
@property(retain, nonatomic) UIImage *stillImage; // @synthesize stillImage=_stillImage;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void).cxx_destruct;
- (double)messageDuration;
- (_Bool)isAnimated;
- (double)compressTimeSinceStartOfMessage:(double)arg1;
@property(readonly, nonatomic) _Bool canCompressTime;
@property(retain, nonatomic) NSArray *playingMessages;
- (_Bool)shouldLoopDuringPlayback;
- (id)messageTypeAsString;
- (id)archiveData;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)arg1;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)arg1;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end

