//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PHPersistentChangeToken;

@interface PGLibraryChangeListenerStateStore : NSObject
{
    NSURL *_changeTokenURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPersistentChangeToken *changeToken; // @dynamic changeToken;
- (void)setChangeToken:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

