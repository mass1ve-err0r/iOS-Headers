/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMMessage : NSObject <NSCopying> {
    NSArray * _contentPages;
    NSString * _identifier;
    bool  _requiresCloseButton;
}

@property (nonatomic, readonly) NSArray *contentPages;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool requiresCloseButton;

// Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages

- (void).cxx_destruct;
- (id)contentPages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithICApplicationMessage:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentPages:(id)arg2 requiresCloseButton:(bool)arg3;
- (bool)requiresCloseButton;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_firstActionIdentifier;

@end
