//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackageEntry : NSObject
{
    OISFUZipEntry *mZipEntry;
    struct _xmlDoc *mXmlDocument;
}

- (struct _xmlDoc *)xmlDocument;
- (id)data;
- (void)dealloc;
- (id)initWithZipEntry:(id)arg1;

@end

