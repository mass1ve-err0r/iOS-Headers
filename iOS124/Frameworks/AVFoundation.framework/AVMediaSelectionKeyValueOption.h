//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (_Bool)isPlayable;
- (id)mediaType;
- (id)_groupMediaType;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end

