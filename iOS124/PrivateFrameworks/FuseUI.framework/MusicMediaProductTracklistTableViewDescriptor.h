//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicEntityViewDescriptor.h>

@class MusicEntityValueContext, MusicEntityViewTracklistItemContentDescriptor, NSSet, NSString;

@interface MusicMediaProductTracklistTableViewDescriptor : MusicEntityViewDescriptor
{
    MusicEntityValueContext *_entityValueContext;
    NSSet *_propertiesToQueryForContentDescriptorResolution;
    NSString *_groupingProperty;
    NSString *_wantsGroupingProperty;
    MusicEntityViewTracklistItemContentDescriptor *_prominentTracklistItemContentDescriptor;
    long long _prominentTrackStoreID;
}

@property(nonatomic) long long prominentTrackStoreID; // @synthesize prominentTrackStoreID=_prominentTrackStoreID;
@property(retain, nonatomic) MusicEntityViewTracklistItemContentDescriptor *prominentTracklistItemContentDescriptor; // @synthesize prominentTracklistItemContentDescriptor=_prominentTracklistItemContentDescriptor;
@property(copy, nonatomic) NSString *wantsGroupingProperty; // @synthesize wantsGroupingProperty=_wantsGroupingProperty;
@property(copy, nonatomic) NSString *groupingProperty; // @synthesize groupingProperty=_groupingProperty;
- (void).cxx_destruct;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (void)enumerateContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) MusicEntityViewTracklistItemContentDescriptor *defaultContentDescriptor; // @dynamic defaultContentDescriptor;

@end

