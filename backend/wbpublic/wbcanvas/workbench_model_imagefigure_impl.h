/*
 * Copyright (c) 2007, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#ifndef _WORKBENCH_MODEL_IMAGEFIGURE_IMPL_H_
#define _WORKBENCH_MODEL_IMAGEFIGURE_IMPL_H_

#include "model_figure_impl.h"
#include "grts/structs.workbench.model.h"

#include "image_figure.h"

class WBPUBLICBACKEND_PUBLIC_FUNC workbench_model_ImageFigure::ImplData : public model_Figure::ImplData {
  typedef model_Figure::ImplData super;

protected:
  wbfig::Image *_figure;
  cairo_surface_t *_thumbnail;
  mdc::Timestamp _last_click;

  virtual bool realize();
  bool shrink_if_needed();

public:
  ImplData(workbench_model_ImageFigure *self);
  virtual ~ImplData(){};

  virtual mdc::CanvasItem *get_canvas_item() const {
    return _figure;
  }

  std::string set_filename(const std::string &fn);
  void set_keep_aspect_ratio(bool flag);

  virtual void unrealize();

  virtual void render_mini(mdc::CairoCtx *cr);

private:
  workbench_model_ImageFigure *self() const {
    return (workbench_model_ImageFigure *)_self;
  }
};

#endif
