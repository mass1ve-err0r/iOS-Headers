//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelRadioStation : MPModelObject
{
}

+ (id)__type_KEY;
+ (id)__allowsItemLiking_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__editorNotes_KEY;
+ (id)__name_KEY;
+ (id)__beats1_KEY;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
- (id)artworkCatalog;
- (id)humanDescription;
- (id)contentItemCollectionInfo;

// Remaining properties
@property(nonatomic) _Bool allowsItemLiking; // @dynamic allowsItemLiking;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(nonatomic, getter=isBeats1) _Bool beats1; // @dynamic beats1;
@property(copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property(nonatomic) _Bool hasExplicitContent; // @dynamic hasExplicitContent;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property(nonatomic) long long type; // @dynamic type;

@end

