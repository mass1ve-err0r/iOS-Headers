//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPSectionedIdentifierListEnumerationResult-Protocol.h>

@class NSString;

@protocol MPSectionedIdentifierListEnumerationItem <MPSectionedIdentifierListEnumerationResult>
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@end

