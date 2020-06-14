//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class BBSectionIcon, BBSectionInfo, NSData, NSString;

@protocol BBSectionIdentity <NSObject>
- (NSString *)sectionIdentifier;

@optional
- (NSString *)parentSectionIdentifier;
- (NSData *)sectionIconData;
- (BBSectionIcon *)sectionIcon;
- (NSString *)sectionDisplayName;
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)universalSectionIdentifier;
@end

