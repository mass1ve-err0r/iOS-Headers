/* Generated by RuntimeBrowser.
 */

@protocol _UIDragSetDownAnimationTarget <NSObject>

@required

- (UITargetedDragPreview *)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 prepareForSetDownOfDragItem:(UIDragItem *)arg2 visibleDroppedItem:(_DUIVisibleDroppedItem *)arg3;
- (bool)_setDownAnimation:(void *)arg1 shouldDelaySetDownOfDragItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _UIDragSetDownAnimation *, UIDragItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 willAnimateSetDownOfDragItem:(UIDragItem *)arg2 withAnimator:(UIViewPropertyAnimator *)arg3;
- (UIWindow *)_setDownAnimation:(_UIDragSetDownAnimation *)arg1 windowForSetDownOfDragItem:(UIDragItem *)arg2;

@end
