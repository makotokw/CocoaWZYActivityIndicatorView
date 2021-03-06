//
//  WZYActivityIndicatorView.h
//  WZYActivityIndicatorView
//
//  Copyright (c) 2013 makoto_kw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WZYActivityIndicatorView : UIView

@property (nonatomic) CFTimeInterval duration;
@property (nonatomic) BOOL           hidesWhenStopped;

- (id)initWithActivityIndicatorImage:(UIImage *)image;
- (void)setActivityIndicatorImage:(UIImage *)image;

- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;

@end
