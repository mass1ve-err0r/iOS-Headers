//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying>
{
    MPModelSong *_song;
}

+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

