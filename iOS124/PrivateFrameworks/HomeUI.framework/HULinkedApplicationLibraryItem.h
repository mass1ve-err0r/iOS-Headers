//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HULinkedApplicationItem.h>

#import <HomeUI/NSCopying-Protocol.h>

@class SSSoftwareLibraryItem;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying>
{
    SSSoftwareLibraryItem *_libraryItem;
}

@property(readonly, nonatomic) SSSoftwareLibraryItem *libraryItem; // @synthesize libraryItem=_libraryItem;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLibraryItem:(id)arg1;
- (id)init;

@end

