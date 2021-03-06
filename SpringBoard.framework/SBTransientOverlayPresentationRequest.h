/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying> {
    bool  _animated;
    id /* block */  _completionHandler;
    bool  _shouldDismissSiri;
    SBTransientOverlayViewController * _viewController;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) bool shouldDismissSiri;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewController:(id)arg1;
- (bool)isAnimated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldDismissSiri;
- (id)viewController;

@end
